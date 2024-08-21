#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

int f_somma(int a, int b) {
    return a+b;
}

int f_sottrazione(int a, int b) {
    return a-b;
}

int f_moltiplicazione(int a, int b) {
    return a*b;
}

int f_divisione(int a, int b) {
    return a/b;
}

int f_stampa(int somma, int sottrazione, int moltiplicazione, int divisione) {
    printf("\n%d", somma);
    printf("\n%d", sottrazione);
    printf("\n%d", moltiplicazione);
    printf("\n%d", divisione);
    printf("\n");
    return 0;
}

int main() {

    int a = 1;
    int b = 3;

    int somma = f_somma(a,b);
    int sottrazione = f_sottrazione(a,b);
    int moltiplicazione = f_moltiplicazione(a,b);
    int divisione = f_divisione(a,b);

    f_stampa(somma, sottrazione, moltiplicazione, divisione);    

    return 0;
}
