#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a, i, znamenka, sumaparni, sumaneparni, rez;
    sumaparni = 0;
    sumaneparni = 0;
    i = 1;

    printf("Upisite troznamenkasti prirodni broj > ");
    scanf("%d", &a);

    for (i = 1; i <= 3; ++i) {
        znamenka = a % 10;
            if (znamenka % 2 == 0) {
                sumaparni = sumaparni + znamenka;
            } else {
                sumaneparni = sumaneparni + znamenka;
            }
        znamenka = 0;
        a = a / 10;
            
    }

    rez = sumaparni - sumaneparni;
    printf("Rezultat: %d", rez);

    return 0;
}