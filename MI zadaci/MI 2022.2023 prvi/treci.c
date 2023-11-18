#include <stdio.h>

int main(void) {

    int m, n, udaljenost, i, j; 

    printf("Unesite m > ");
    scanf("%d", &m);
    printf("Unesite n > ");
    scanf("%d", &n);

    int polje[m][n];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) scanf("%d", &polje[i][j]);
    }

    printf("Unesite trazenu udaljenost > ");
    scanf("%d", &udaljenost);

    int brojac[m];
    int brojac_parova = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n - 1; j = j + 1) {
            if (polje[i][j + 1] - polje[i][j] == udaljenost) brojac_parova += 1;      
        }
        brojac[i] = brojac_parova;
        brojac_parova = 0;
    }
     

    for (i = 0; i < m; i++) {
        printf("%d. redak, parova: %d\n", i + 1, brojac[i]);
    }



    return 0;
}