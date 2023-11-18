#include <stdio.h>

int main(void) {

    int n, redak, stupac;
    printf("Unesite dimenzije polja: ");
    scanf("%d", &n);
    int polje[n][n];

    printf("Unesite elemente polja:\n");
    for (redak = 0; redak < n; redak++) {
        for (stupac = 0; stupac < n; stupac++) {
            scanf("%d ", &polje[redak][stupac]);            
        }
    }
    printf("Izracunato polje:\n");
    
    //IZRAČUN ZAROTIRANOG POLJA
    for (stupac = 0; stupac < n; stupac++) {
        for (redak = n - 1; redak >= 0; redak--) {
            printf("%d ", polje[redak][stupac]);
        }
        printf("\n");
    }

    return 0;
}