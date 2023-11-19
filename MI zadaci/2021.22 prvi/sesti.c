#include <stdio.h>

int main(void) {

    char niz[11];
    int i;
    printf("Unesite niz znakova > ");
    fgets(niz, 11, stdin);

    printf("Rezultat: ");

    int brojac = 0;

    for (i = 0; niz[i] != '\0'; i++) {
        if ((niz[i] >= 'A' && niz[i] <= 'z') || niz[i] == ' ' ) brojac++;
    }

    if (niz[0] >= 'a' && niz[0] <= 'z' && niz[1] != ' ') niz[0] -= 'a' - 'A';

    for (i = 0; i <= brojac - 1; i++) {
        if ((niz[i - 1] == ' ' || niz[i + 1] == ' ') || (i == brojac - 1 && brojac != 1)) {
            niz[i] -= 'a' - 'A';
        }
        printf("%c", niz[i]);
    }



    return 0;
}