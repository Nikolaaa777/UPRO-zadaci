#include <stdio.h>

int main() {

    int kiselost;

    printf("Unesite pH vrijednost otopine > ");
    scanf("%d", &kiselost);
   
    if (kiselost < 7 && kiselost >= 0) printf(" Otopina je kisela.");
    else if (kiselost > 7 && kiselost <= 14) printf(" Otopina je luznata.");
    else if (kiselost == 7) printf(" Otopina je neutralna.");
    else printf(" KRIVI UNOS");




    return 0;
}
