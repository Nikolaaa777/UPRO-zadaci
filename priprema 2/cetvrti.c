#include <stdio.h>
#define donja_meda 1
#define gornja_meda 1000

int main(void) {

    int a, b, i, suma = 0;
    printf("Upisite dva prirodna broja iz intervala [1, 1000] > ");
    scanf("%d %d", &a, &b);

    if (a < donja_meda || a > gornja_meda ||
        b < donja_meda || b > gornja_meda)  printf("Brojevi moraju biti u intervalu [1, 1000].");
    
    else if (a >= b) printf("Prvi broj mora biti manji od drugog broja.");

    else {
        for (i = a + 2; i <= b; i = i + 3) suma = suma + i;
        
        printf("Zbroj svakog treceg broja iznosi: %d", suma);
    }



    return 0;
}