#!/usr/bin/python3

import yaml
import sys
import os
import argparse
import subprocess
import signal
import csv
from datetime import datetime

arm_file_list = ['l-23.c', 'b-26.c']
reproduce_set_path = '../eriks_testcases/'


def ubsan_testing(cc, args, testcases_path, file_name, input = '', output = 'verbose'):
    # test ubsan here
    if file_name == arm_file_list[0] and 'gcc' in cc:
        # online compiler works
        if output == 'verbose':
            print('error: ', file_name, cc)
        return True

    ret_code = os.system(cc + ' ' + args + ' ' + testcases_path + file_name)
    assert( ret_code == 0 and 'error')
    result = subprocess.Popen('./a.out ' + input, shell=True, start_new_session=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try:
        # if this returns, the process completed
        result.wait(timeout=1)
    except subprocess.TimeoutExpired:
        os.killpg(os.getpgid(result.pid), signal.SIGTERM)
    
    out, err = result.communicate()
    err = err.decode()
    # print(err)
    if 'UndefinedBehavior' in err or 'runtime' in err:
        if output == 'verbose':
            print('error: ', file_name, cc)
        return True
    return False

def warning_testing(cc, args, testcases_path, file_name):
    # test warning here
    result = subprocess.Popen(cc + ' ' + args + ' ' + testcases_path + file_name, shell=True, start_new_session=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try:
        # if this returns, the process completed
        result.wait(timeout=1)
    except subprocess.TimeoutExpired:
        os.killpg(os.getpgid(result.pid), signal.SIGTERM)
    
    out, err = result.communicate()

    return err.decode().count('warning')
    # print(err.decode())
    

def bug_not_trigger(check_type, input, test_str, section_start, section_end='>:'):
    trigger = 0
    if check_type == 1:
        #res = os.popen("./a.out " + input)
        res = subprocess.run(f"./a.out {input}", shell=True, capture_output=True, encoding='utf-8', errors='replace')
        #res = res.read()
        res = res.stdout
        if res == test_str or test_str in res:
            trigger = 1

    if check_type == 2:
        #res = os.popen("./a.out " + input)
        res = subprocess.run(f"./a.out {input}", shell=True, capture_output=True, encoding='utf-8', errors='replace')
        #res = res.read()
        res = res.stdout
        if res != test_str and test_str not in res:
            trigger = 1
    
    if check_type == 3:
        #res = os.popen("./a.out " + input + " 2>&1")
        res = subprocess.run(f"./a.out {input} 2>&1", shell=True, capture_output=True, encoding='utf-8', errors='replace')
        #res = res.read()
        res = res.stdout
        #status = res.close()
        #if status is not None:
        #    signal = os.WTERMSIG(status)
        #    if signal == 11:
        #        print(signal)
        if res != "Segmentation fault (core dumped)" and "Segmentation fault (core dumped)" not in res:
            trigger = 1

    return trigger

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    #parser.add_argument('file', type=argparse.FileType('r'), help='It is the test file name.')
    #parser.add_argument('-level', default='O3', type=str, help='For user to choose which config of one c program in config.yml is applied to the test file, O3 default.')
    #parser.add_argument('-cc', default=None, type=str, help='For user to choose gcc or clang to test')
    parser.add_argument('-opt', default=None, type=argparse.FileType('r'), help='Users can choose whether or not to add options in testing.')
    args = parser.parse_args()
    #file = args.file.name.split('/')[-1]
    folder_path = '../eriks_testcases'
    opti_levels = ['O0', 'O1', 'O2', 'O3', 'O4']
    ccs = ['gcc', 'clang']
    cisb_found = 0
    cisb_not_found = 0
    with open('./csv_files/experiment_2.csv', mode='w', newline='') as csv_file:
        writer = csv.writer(csv_file)
        writer.writerow(['exp_id', 'test_id', 'compiler', 'optimization_level', 'architecture', 'output', 'timestamp'])
        for file_name in os.listdir(folder_path):
            print(file_name)
            for cc in ccs:
                for opti_level in opti_levels:
                    #opti_level = 'O0'
                    if opti_level == 'O4' and cc == 'clang':
                        continue
                    file = ''
                    #cc = args.cc
                    argss = ''
                    section_end = '>:'
                    #if args.opt:
                    #    f = open(args.opt.name, 'r')
                    #    argss = f.read()
                    #    f.close()
                    file = file_name + '-' + cc + '-' + opti_level
                    args = ' -' + opti_level + ' ' + argss
                    with open('exp2config.yml', 'r') as f:
                        # get config for files
                        
                        configs = yaml.safe_load(f.read())
                        if file not in configs:
                            print('Error: can\'t find ' + file + ' in the config file!')
                            writer.writerow(['exp_2', file_name, cc, opti_level, 'x86_64', '2', datetime.now()])
                            continue
                        config = configs[file]
                        file_name = config['file_name']
                        cc_ver = config['cc']
                        # opti_level = '-' + config['opti_level']
                        input = str(config['input'])
                        check_type = config['check_type']
                        test_str = config['test_str']
                        section_name = config['section_name']
                        special_cause = config['special_cause']
                        if section_name and section_name.split(' ')[0] == 'between':
                            section_start = section_name.split(' ')[1]
                            section_end = section_name.split(' ')[2]
                        else:
                            section_start = section_name
                        if 'default_option' in config:
                            default_option = config['default_option']
                            args += ' ' + default_option
                        if(input == None):
                            input = ''

                        if 'undefined' in args:
                            # ubsan only
                            result = ubsan_testing(cc_ver, args, file_name, input)
                            print('ubsan work or not: ', result)

                        elif 'Wall' in args:
                            # Wall only
                            warning_num = warning_testing(cc_ver, args, file_name)
                            print(warning_num, ' warngings reported')
                            
                        else:
                            if check_type == 5 or check_type == 6 or check_type == 7:
                                section_end = ':'
                                args += ' -S -o temp.s '
                                ret_code = os.system(cc_ver + ' ' + args + ' ' + reproduce_set_path + file_name)
                                assert( ret_code == 0 and 'error')
                            else:
                                ret_code = os.system(cc_ver + ' ' + args + ' ' + reproduce_set_path + file_name)
                                assert( ret_code == 0 and 'error')
                            print(cc + ' ' + args + ' ' + reproduce_set_path + file_name)
                            if not bug_not_trigger(check_type, input, test_str, section_start, section_end):
                                print(check_type, input, test_str, section_start, section_end)
                                print('One CISB here!')
                                writer.writerow(['exp_2', file_name, cc, opti_level, 'x86_64', '1', datetime.now()])
                                cisb_found += 1
                            else:
                                print(check_type, input, test_str, section_start, section_end)
                                print('No CISB here!')
                                writer.writerow(['exp_2', file_name, cc, opti_level, 'x86_64', '0', datetime.now()])
                                cisb_not_found += 1
        print(cisb_found)
        print(cisb_not_found)
