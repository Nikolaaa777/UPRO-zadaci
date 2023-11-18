#include <stdio.h>

int main(void) {

    int m, i, j;

    printf("Upisite velicinu polja m > ");
    scanf("%d", &m);

    printf("Upisite %d clanova polja m > ", m);
    int polje[m];

    for (i = 0; i < m; i++) {
        scanf("%d", &polje[i]);
    }

    int max = 0;
    int pocetak = 0, kraj = 0, suma = 0; 

    for (i = 0; i < m; i++) {
        if (i < 0) continue;
        for (j = i; j < m; j++) {
            suma += polje[j];
            if (suma > max) {
                max = suma;
                pocetak = i;
                kraj = j;
                  }
     }
     suma = 0;
    }

    printf("Pronadjeno pod-polje:");
    for(i = pocetak; i <= kraj; i++) {
        printf(" %d", polje[i]);
    } printf("\n");

    printf("Najveca suma kontinuiranog pod-polja je: %d", max);





    return 0;
}