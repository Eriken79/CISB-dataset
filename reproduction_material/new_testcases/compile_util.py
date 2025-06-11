import os
import subprocess
import sys

def compile_c_file(c_file):
    compilers = {"gcc-12": "gcc-12", "clang-14": "clang-14"}
    opt_levels = ["O0", "O1", "O2", "O3", "O4"]
    
    if not os.path.isfile(c_file):
        print(f"Error: File '{c_file}' not found.")
        sys.exit(1)
    
    base_name = os.path.splitext(os.path.basename(c_file))[0]
    
    for compiler_name, compiler_path in compilers.items():
        for opt in opt_levels:
            if opt == "O4" and compiler_path == "clang-14":
                continue
            output_file = f"{base_name}-{compiler_name}-{opt}"
            cmd = [compiler_path, c_file, "-g", "-pthread", "-o", output_file, f"-{opt}"]
            try:
                subprocess.run(cmd, check=True)
                print(f"Compiled {c_file} with {compiler_name} at {opt} -> {output_file}")
            except subprocess.CalledProcessError as e:
                print(f"Failed to compile {c_file} with {compiler_name} at {opt}: {e}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python compile.py <c_file>")
        sys.exit(1)
    
    compile_c_file(sys.argv[1])
