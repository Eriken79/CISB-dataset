/*successful
    x86-64 gcc 8-12.0.1 -O2
    Compile and run the executable file, if the output dose not contain "done" and return 139, then there is a bug.
*/
#include <stdio.h>
#include <string.h>

#define MY_SIZE 16

int main(void)
{
        size_t ret, size;
	char asrc[MY_SIZE];
	char dst[MY_SIZE];
		

        memset(asrc, 'A', sizeof(asrc));
	memset(dst, 'B', sizeof(dst));

        printf("MY_SIZE: %d\n", MY_SIZE);
        fflush(NULL);

        size = MY_SIZE;
        ret = strlen(asrc);
        printf("strlen of src: %ld %p\n", strlen(asrc), asrc);
	printf("strlen of dst: %ld %p\n", strlen(dst), dst);
	printf("size before ternary: %ld\n", size);
	printf("ret before ternary: %ld\n", ret);
        //if (size) {
            size_t len = (ret >= size) ? size - 1 : ret;
	    printf("len after ternary: %ld\n", len);
            memcpy(asrc, dst, len);
            dst[len] = '\0';
        //}
		if (strlen(dst))
            puts("ok");

        printf("dst: %zu\n", strlen(dst));
        fflush(NULL);
        fflush(NULL);
        printf("done...\n");
        return 0;
}
