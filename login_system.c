#include <stdio.h>

// Definiamo le costanti per rendere il codice più leggibile e facile da modificare
#define ETA_MINIMA 18
#define PASSWORD_CORRETTA 3453
#define TENTATIVI_MAX 3

int main(void) {
    int passUtente;
    int etaUtente;
    int tentativiRimasti = TENTATIVI_MAX;

    // 1. Controllo Età
    printf("Inserisci la tua eta: ");
    scanf("%d", &etaUtente);

    if (etaUtente < ETA_MINIMA) {
        puts("Accesso negato: devi essere maggiorenne.");
        return 0; // Esce subito dal programma
    }

    // 2. Controllo Password con Tentativi
    printf("Inserisci la password: ");
    scanf("%d", &passUtente);

    while (tentativiRimasti > 1) { // Cicla finché ci sono tentativi extra
        if (passUtente == PASSWORD_CORRETTA) {
            break; // Esce dal ciclo se la password è giusta
        }

        tentativiRimasti--;
        printf("Password errata. Riprova, hai ancora %d tentativi: ", tentativiRimasti);
        scanf("%d", &passUtente);
    }

    // 3. Verifica finale dopo il ciclo
    if (passUtente == PASSWORD_CORRETTA) {
        puts("\n========================");
        puts("   ACCESSO CONSENTITO    ");
        puts("========================");
    } else {
        puts("\nAccesso negato. Tentativi esauriti.");
    }

    return 0;
}
