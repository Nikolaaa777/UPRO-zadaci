#include <stdio.h>

int main(void) {

    int n, i, j;
    printf("Upisite broj redaka/stupaca matrice > ");
    scanf("%d", &n);
    printf("Upisite %dx%d clanova > \n", n, n);

    int polje [n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) scanf("%d ", &polje[i][j]);
    }

    int redak, stupac;
    printf("Upisite redni broj retka > ");
    scanf("%d", &redak);

    printf("Upisite redni broj stupca > ");
    scanf("%d", &stupac);

    int suma = 0;
    for (j = 0; j < n; j++) {
        suma += polje[redak][j];
    }
    for (i = 0; i < n; i++) {
        suma += polje[i][stupac];
    }
    suma -= polje[redak][stupac];

    printf("Suma brojeva koji se nalaze u retku %d i stupcu %d je %d.", redak, stupac, suma);

    return 0;
}