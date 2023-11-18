#include <stdio.h>

int main(void) {

    int n, i;

    printf("Unesite broj rijeci brojalice > ");
    scanf("%d", &n);

    if (n <= 0) printf("KRIVI UNOS");
    else {
        for (i = 1; i <= n; i = i + 1) {
            int p = i % 3;
            if (p ==  1) printf("eci ");
            else if (p == 2) printf("peci ");
            else printf("pec ");
               }

    }
    return 0;
}