#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    // Creazione di un nuovo processo utilizzando fork()
    pid = fork();

    //mostro a schermo il codice PID del padre e del figlio
    printf("PID del processo: %d.\n",getpid());

    // Uscita dal processo
    exit(0);

    return 0;
}
