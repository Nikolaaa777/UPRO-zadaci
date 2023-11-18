#include <stdio.h>
#define D_MEDA 1
#define G_MEDA 10

int main(void) {

    int n, i, j;

    printf("Unesite n > ");
    scanf("%d", &n);

    int polje[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) scanf("%d ", &polje[i][j]); 
    }


    int sume[n];
    int brojac1 = 0;
    int brojac2 = 0;

    for (j = 0; j < n; j++) {
        if (j < n - 1) {
            for (i = 0; i < n; i++) {
                brojac1 = brojac1 +  polje[i][j];
                brojac2 = brojac2 + polje[i][j + 1];
            }
        } else {
            for (i = 0; i < n; i++) {
                brojac1 = brojac1 + polje[i][j];
                brojac2 = brojac2 + polje[i][0];
            }
        }
        sume[j] = brojac1 - brojac2;
        brojac1 = 0;
        brojac2 = 0;
    }

    printf("Rezultat >");
    for (i = 0; i < n; i++) {
        printf(" %d", sume[i]);
    } printf("\n");

    return 0;
}