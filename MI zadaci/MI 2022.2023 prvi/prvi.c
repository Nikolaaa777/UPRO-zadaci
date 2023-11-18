#include <stdio.h>

int main(void) {

    int n, i;
    int broj = 2;

    do {
        printf("Upisite N > ");
        scanf("%d", &n);
    } while (n > 50 || n <= 0);

    int brojac_prostih = 0;
    int ostatak; 

    //trazenje prostih brojeva do N
    while (brojac_prostih < n) {
        int prost = 1;
        //PROVJERA JE LI PROST
        for (i = 2; i < broj; i++) {
            if (broj % i == 0) {
                prost = 0;
                break;
            }
        }

        //AKO JE PROST DODATI MU BROJ
        if (prost == 1) {
            ostatak = broj % 3;
            if (ostatak == 0) {
                printf("%d ", broj);
            } else if (ostatak == 1) {
                printf("%d ", broj - 1);
            } else printf("%d ", broj + 1);

            //DODATI BROJAC +1 ZA PROSTE BROJEVE
            brojac_prostih += 1;
        }

        //NA KRAJU POVEĆATI BROJ
        broj += 1;

    }
       

    return 0;
}