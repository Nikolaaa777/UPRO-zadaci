#include <stdio.h>

int main(void) {
    int a;
    int godine;
    int tjedni;
    int dani;

    printf("Unesite broj dana > ");
    scanf("%d", &a);

    godine = a / 365;
    a = a % 365;
    tjedni = a / 7;
    dani = a % 7;

    printf("Unos odgovara razdoblju od %d godina %d tjedana i %d dana", godine, tjedni, dani);

    return 0;
}





