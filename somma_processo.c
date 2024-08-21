#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

int f_somma(int numero_primo, int numero_secondo) {
    return numero_primo + numero_secondo;
}

int f_stampa(int valore) {
    if (valore < 0) {
        printf("si è verificato un errore sul processo");
    } else {
        printf("%d\n", valore);
    }
    printf("\n");
}

int main() {

    //processi pronti
    pid_t pid_somma = fork();

    //variabili
    int numero_primo = 5;
    int numero_secondo = 1;

    //processi in esecuzione
    if (pid_somma == -1) {
        f_stampa(-1);
    } else if (pid_somma == 0) {
        f_stampa(f_somma(numero_primo, numero_secondo));
    }

    //chiudo il processo
    kill(pid_somma, 0);

    return 0;
}
