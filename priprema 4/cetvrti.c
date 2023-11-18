#include <stdio.h>
#define meda 200

int main(void) {



    char tekst[meda];
    int brojac = 0, i = 0;
    printf("Upisite znakovni niz > ");
    fgets(tekst, meda + 1, stdin);

    while (tekst[i] != '\0') {
        if (tekst[i] >= 'a' && tekst[i] <= 'z') {
            tekst[i] -= ('a' - 'A');
    } else if (tekst[i] == '\n') {
        tekst[i] = '\0';
        }
        brojac += 1;
        i += 1;
    }
    printf("Obrnuti niz: ");
    for (i = brojac - 1; i >= 0; i--) {
        printf("%c", tekst[i]);
    }
    printf("\n");


    return 0;
}