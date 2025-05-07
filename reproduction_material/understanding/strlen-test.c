#include <stdio.h>
#include <string.h>

int main(void) {
	char src[16];
	char dst[16];

	memset(src, 'A', sizeof(src)-1);
	memset(dst, 'B', sizeof(dst)-1);

	printf("source: %s\n", src);
	printf("destination: %s\n", dst);
	return 0;
}
