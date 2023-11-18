#include <stdio.h>

int main(void) {

    int m, n, redak, stupac;
    printf("Unesi dimenzije: ");
    scanf("%d %d", &m, &n);

    if (m != n) {
        printf("Dimenzije ne odgovaraju kvadratnoj matrici!");
        return 0;
    }
    int polje[n][m];
    printf("Unesi clanove polja:\n");
    for (redak = 0; redak < n; redak++) {
        for(stupac = 0; stupac < m; stupac++) scanf("%d ", &polje[redak][stupac]);
    }

    printf("Odabrana je matrica: \n");
    for (redak = 0; redak < n; redak++) {
        for(stupac = 0; stupac < m; stupac++) printf(" %d", polje[redak][stupac]);
        printf("\n");
    }

    int kvadrat1 = 0, kvadrat2 = 0, razlika;        //INCICIJALIZACIJA ZA KVADRATE BROJEVA PO DIJAGONALI

    for (redak = 0; redak < n; redak++) {
        for (stupac = redak; stupac < m; stupac = stupac + m) {
            kvadrat1 = kvadrat1 + polje[redak][stupac] * polje[redak][stupac];
        }

    }

    stupac = 0;
    for (redak = n - 1; redak >= 0; redak--) {
            kvadrat2 = kvadrat2 + polje[redak][stupac] * polje[redak][stupac];
            stupac = stupac + 1;
        }
    

    razlika = kvadrat1 - kvadrat2;
    printf("Razlika zbrojeva je %d.", razlika);
    

    return 0;
}
