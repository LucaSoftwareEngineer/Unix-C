#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main() {
    const char *dirName = "directory_di_prova";

    mkdir(dirName, 0755);

    return 0;
}
