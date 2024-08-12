#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>


int main() {
    pid_t pid;

    // Creazione di un nuovo processo utilizzando fork()
    pid = fork();

    //mostro a schermo il codice PID del padre e del figlio
    printf("PID del processo: %d.\n",getpid());

    // kill di un processo processo
    kill(pid, 0);
    printf("processo killato correttamente");

    return 0;
}
