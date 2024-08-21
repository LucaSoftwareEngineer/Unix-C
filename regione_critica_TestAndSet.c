#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdbool.h>

bool TestAndSet(bool blocco) {
    blocco = true;
    return blocco;
}

void regione_critica() {
    printf("\nentrato in regione critica\n");
}

int main() {

    bool blocco = false;
    if (TestAndSet(blocco)){
        regione_critica();
    }

    return 0;
}
