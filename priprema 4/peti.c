#include <stdio.h>
#define MEDA 50

int main(void) {
    int i;

    // Unos niza znakova
    printf("Unesite niz > ");
    char tekst[MEDA];
    fgets(tekst, MEDA + 1, stdin);

    // Uklanjanje znaka za novi red ako postoji na kraju niza
    for (i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == '\n') {
            tekst[i] = '\0';
        }
    }

    // Inicijalizacija frekvencije ponavljanja svih znakova
    int frekvencija[128] = {0};

    // Pronalaženje broja znakova
    int broj_znakova = 0;
    for (i = 0; tekst[i] != '\0'; i++) {
        broj_znakova += 1;
    }

    // Pronalaženje frekvencija svakog znaka
    for (i = 0; i < broj_znakova; i++) {
        frekvencija[tekst[i]] += 1;
    }

    // Pronalaženje najveće frekvencije i brojanje koliko ima takvih znakova
    int max_frekvencija = 1;
    int brojac = 0;

    for (i = 0; i < 128; i++) {
        if (frekvencija[i] > max_frekvencija) {
            max_frekvencija = frekvencija[i];
            brojac = 1;
        } else if (frekvencija[i] == max_frekvencija && max_frekvencija != 1) {
            brojac++;
        }
    }

    int prvi_put = 1;

    // Ispis rezultata
    if (brojac == 1) {
        printf("Znak ");
        for (int i = 0; i < 128; i++) {
            if (frekvencija[i] == max_frekvencija) {
                printf("\"%c\" ", (char)i);
            }
        }
        printf("se ponavlja %d puta.\n", max_frekvencija);
    } else {
        printf("Znakovi ");
        for (int i = 0; i < 128; i++) {
            if (frekvencija[i] == max_frekvencija) {
                if (prvi_put == 1) {
                    printf("\"%c\"", (char)i);
                    prvi_put = 0;
                } else {
                    printf(", ");
                    printf("\"%c\"", (char)i);
                }
            }
        }
        printf(" se ponavljaju %d puta.\n", max_frekvencija);
    }

    return 0;
}