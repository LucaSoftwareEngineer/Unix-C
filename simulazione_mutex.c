#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdbool.h>

int wait(int S) {
    S--;
    return S;
}

int f_signal(int S) {
    S++;
    return S;
}

void regione_critica() {
    printf("\nentrato in regione critica\n");
}

int main() {

    int mutex = 1;

    if(wait(mutex) >= 0) {
        mutex = wait(mutex);
        regione_critica();
        printf("%d\n", mutex);
        mutex = f_signal(mutex);
    }

    printf("%d\n", mutex);

    return 0;
}
