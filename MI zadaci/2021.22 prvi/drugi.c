#include <stdio.h>

int main(void) {

    int m, i;

    do {
        printf("Unesite duljinu polja > ");
        scanf("%d", &m);
    } while (m < 5 || m > 10);

    int polje[m];

    for (i = 0; i < m; i++) scanf("%d", &polje[i]);

    int min = polje[0], max = polje[0];
    int index_min = 0, index_max = 0; 

    for (i = 1; i < m; i++) {
        if (polje[i] > max) {
            max = polje[i];
            index_max = i;
        } else if (polje[i] < min) {
            min = polje[i];
            index_min = i;
        }
    }

    //ZAMJENA najveci - najmanji
    int pomocna = polje[index_min];
    polje[index_min] = polje[index_max];
    polje[index_max] = pomocna;

    printf("Rezultat:");
    for (i = 0; i < m; i++) {
        printf(" %d", polje[i]);
        if (i < m - 1) printf(",");
    }


    return 0;
}
