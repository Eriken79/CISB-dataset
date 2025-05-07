/*successful
    x86-64 gcc 4.4-5.4 -O1 6.0-12.0.1 -O0
    x86-64 clang 3.0.0-14.0.0 -O1
    Compile and get disassembly code of this program. If section "<test>:" doesn't contain "%dil", there is a bug.
*/
#include <stdio.h>
#include <stdlib.h>

void test(unsigned char a){
    if(a+1) {                  // removed
	printf("%d\n", a);
	printf("%d\n", a+1);
        printf("ok\n");
    }
}

int main(int argc, char* argv[]){
    char i = atoi(argv[1]);//input 255
    test(i);
}
