#include <stdio.h>
#define MEDA 150

int main(void) {

    char tekst[MEDA + 1];
    printf("Upisite znakovni niz > ");
    fgets(tekst, MEDA + 1, stdin);

    char novi_tekst[MEDA+1];
    int k = 0, i;

    for(i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == '\n') tekst[i] = '\0';
        if ((tekst[i] >= 'A' && tekst[i] <= 'Z') || (tekst[i] >= 'a' && tekst[i] <= 'z')) {
            novi_tekst[k] = tekst[i];
            k += 1;
        }
    }
    if (k == 0) printf("Izlazni znakovni niz je : prazan string\n");
    else {
        printf("Izlazni znakovni niz je : ");
        for(i = 0; i < k; i++) {
        printf("%c", novi_tekst[i]);
    } printf("\n");
    }
    return 0;
}