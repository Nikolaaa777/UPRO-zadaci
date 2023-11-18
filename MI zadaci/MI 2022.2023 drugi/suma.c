#include <stdio.h>

int main(void) {

    int n, i, j;
    printf("Unesite n > ");
    scanf("%d", &n);

    double suma1 = 0;
    float suma2 = 0;

    for (i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            suma2 += j;
        }
        suma1 += 1.f / suma2;
        suma2 = 0;
    }  

    printf("Rezultat je %.9f", suma1);

    return 0;
}