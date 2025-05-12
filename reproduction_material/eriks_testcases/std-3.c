/*
	x86-64gcc 10.1-12.0.1 -O2
	x86-64clang 3.0.0-14.0.0 -O1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void* vgPlain_memset( void *destV, int c, int sz )
{
     char* d = (char*)destV;
     while (sz >= 1) {
        d[0] = c;
        d++;
        sz--;
     }
     return destV;
}

void* memset(void *s, int c, unsigned long n) {
	//printf("hello\n");
	return vgPlain_memset(s,c,n);
}

int main(int argc, char** argv){
//input abcde
	char* str = argv[1];
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	memset(str, a, b);
	puts(str);
}
