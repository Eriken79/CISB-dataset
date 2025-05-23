/*successful
    x86-64 4.1-12.0.1 -O1
    x86-64 clang 3.0.0-14.0.0 -O1
  	Compile and get disassembly code of this program. If section "<main>:" doesn't contains instruction "memset", then function memset is optimized, so there is a bug.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void check_pwd(char *password) {
	if (strcmp(password, "1234") == 0) {
		printf("welcome!");
	} else {
		printf("wrong password!");
	}
}

int main(int argc, char* argv[]) {
//  ./a.out 30 Getit,pleasedonottellanyoneelse
    int n;
    char *password;
    char *otherthing;

    n = atoi(argv[1]);
    password = malloc(n);
    for(int i = 0; i < n; i++){
		password[i] = argv[2][i];
		if (i == 7) { // keeps loop from being optimized out
			printf("%d", n);
			printf("%c", password[i]);
		}
    }
    check_pwd(password);
    memset(password, '\x00', n); // Memset will be eliminated with option -O1/O2/O3
    free(password);

    // Info leak
    otherthing = malloc(n);
    for (int i = 0; i < n; i++) {
        printf("%c", otherthing[i]);//output from the 17th character
    }
    puts("");
}
