#include <stdio.h>

int main(void) {

    int n;

    printf("Unesite prirodni broj > ");
    scanf("%d", &n);

    int brojac_jedinica = 0;
    printf("Rezultat: %d", n);
    if (n == 1) brojac_jedinica++;

    int clan_1 = n;
    int clan_2;


    do {
        if (clan_1 % 2 == 0) {
            clan_2 = clan_1 / 2;
            clan_1 = clan_2;
        } else {
            clan_2 = 3 * clan_1 + 1;
            clan_1 = clan_2;
        }
        printf(", %d", clan_1);

        if (clan_2 == 1) brojac_jedinica++;

    } while (brojac_jedinica != 3);


    return 0;
}