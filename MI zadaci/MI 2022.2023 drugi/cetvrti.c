#include <stdio.h>

int main(void) {

    char niz[31];
    printf("Upisite niz > ");
    fgets(niz, 31, stdin);

    int i;
    
    int najveci = niz[0];
    int najmanji = niz[0];
    int najmanji_i = 0;
    int najveci_i = 0;

    //PROLAZAK NAJVECEG
    for (i = 0; niz[i] != '\0'; i++) {
        if (niz[i] > najveci && niz[i] != '\n') {
            najveci_i = i;
            najveci = niz[i]; 
        }
    }


    //PROLAZAK NAJMANJEG
    for (i = 0; niz[i] != '\0'; i++) {
        if (niz[i] <= najmanji && niz[i] != '\n') {
            najmanji_i = i; 
            najmanji = niz[i]; 
        }
    }

    printf("imin = %d,", najmanji_i);
    printf(" imax = %d\n", najveci_i);

    if (najmanji_i < najveci_i) {
        for (i = najmanji_i; i <= najveci_i; i++) {
            printf("%c", niz[i]);
        }
    } else {
        for (i = najmanji_i; i >= najveci_i; i--) {
            printf("%c", niz[i]);
        }
    }
    return 0;
}