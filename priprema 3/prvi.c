#include <stdio.h>

int main(void) {

    int n, i;
    printf("Unesite broj clanova polja:\n");
    scanf("%d", &n);

    int polje [n];
    printf("Unesite clanove polja (%d):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &polje[i]);
    }
    int vrijednost, indeks;
    printf("Unesite vrijednost novog clana te indeks:\n");
    scanf("%d %d", &vrijednost, &indeks);

    printf("Pocetno polje\n");
    for (i = 0; i < n; i++) printf("%d ", polje[i]);
    
    int pamti, zapamti;
    pamti = polje[indeks];
    for (i = indeks; i < n - 1; i++) {
        zapamti = polje[i + 1];
        polje[i + 1] = pamti;
        pamti = zapamti;
    }
    polje[indeks] = vrijednost;

    printf("\nNovodobiveno polje\n");
    for (i = 0; i < n; i++) printf("%d ", polje[i]);

    return 0;
}
