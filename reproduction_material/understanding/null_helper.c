#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char *args[2];
    args[0] = "./b-8-clang-14-O0"; // Name of your target program
    args[1] = NULL;               // This is a true NULL pointer
    
    execv(args[0], args);
    
    // If execv returns, it means it failed
    perror("execv failed");
    return 1;
}
