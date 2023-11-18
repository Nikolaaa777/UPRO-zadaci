#include <stdio.h>

int main(void) {

    char ulaz[31];
    int i;

    printf("Upisite ulazni niz > ");
    fgets(ulaz, 31, stdin);

    int polje[128] = {0};
    int brojac = 0;
    char izlaz[31];

    for (i = 0; ulaz[i] != '\0'; i++) {
        if (ulaz[i] == '\n') {
            ulaz[i] = '\0';
            break;
        } else if (ulaz[i] >= 'a' && ulaz[i] <= 'z' && polje[ulaz[i]] == 0) {
            izlaz[brojac] = ulaz[i];
            polje[ulaz[i]] = 1;
            brojac += 1;
        }
    }


 
    for (i = 0; izlaz[i] != '\0'; i++) {
        if (izlaz[i] == '\n') {
            izlaz[i] = '\0';
            break;
        }
    }
	izlaz[brojac] = '\0';

    printf("Izlaz: %s\n", izlaz);
    printf(" Ulaz: %s", ulaz);
    return 0;
}