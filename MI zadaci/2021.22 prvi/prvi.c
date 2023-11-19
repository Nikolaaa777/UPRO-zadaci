#include <stdio.h>

int main(void) {
    
    int m, n, i, j;

    do {
        printf("Unesite m > ");
        scanf("%d", &m);
    } while (m < 0);

    do {
        printf("Unesite n > ");
        scanf("%d", &n);
    } while (n < 0);

    int polje [m][n];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) scanf("%d", &polje[i][j]);
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i % 2 == 1 && polje[i][j] >= 0) {
                polje[i][j] = 1;
            } else if (i % 2 == 0 && polje[i][j] > 0) {
                polje[i][j] = 0;
            }
        }
    }

    printf("Rezultat: \n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d", polje[i][j]);
        } 
        printf("\n");
    }
    

    return 0;
}