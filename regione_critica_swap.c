#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdbool.h>

bool swap(bool blocco, bool chiave) {
    blocco = chiave;
    return blocco;
}

void regione_critica() {
    printf("\nentrato in regione critica\n");
}

int main() {

    bool blocco = false;
    bool chiave = true;

    if (swap(blocco, chiave)) {
        regione_critica();
    }

    return 0;
}
