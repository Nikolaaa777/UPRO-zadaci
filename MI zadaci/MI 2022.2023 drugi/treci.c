#include <stdio.h>

int main(void) {

    int i, j, m; 
    printf("Unesite m > ");
    scanf("%d", &m);

    int polje[m][m];

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) scanf("%d", &polje[i][j]);
    }

    int najmanji = polje[0][0];
    int pomocna;

    for (i = 0; i < m - 1; i++) {
        for (j = i; j < m - 1; j++) {
            if (polje[j][j] > polje[j + 1][j + 1]) {
                pomocna = polje[j][j];
                polje[j][j] = polje[j + 1][j + 1];
                polje[j + 1][j + 1] = pomocna;
            } 
        }
    }

    printf("Ispis:"); 

    for (i = 0; i < m; i++) {
        printf("\n");
        for (j = 0; j < m; j++) {
            printf("%4d", polje[i][j]);
        }
    }

    return 0;
}