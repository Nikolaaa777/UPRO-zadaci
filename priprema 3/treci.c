#include <stdio.h>

int main(void) {

    int n, i, j, zbroj = 0;
    printf("Unesite duljinu polja:");
    scanf("%d", &n);

    int polje[n];
    printf(" Unesite elemente polja:\n");
    for (i = 0; i < n; i++) {
        scanf("%d ", &polje[i]);
    }

    printf("Izracunato polje: ");
    for (i = 0; i < n; i++) {
        for ( j = i; j < n; j++) zbroj = zbroj + polje[j];
        printf("%d ", zbroj);
        zbroj = 0;
    }

    return 0;
}