#include <stdio.h>

int main(void) {

    int n;
    printf("Unesite broj > ");
    scanf("%d", &n);

    if (n == 0) {
        printf ("Unesen je pogresan broj!");
        return 0;
    }

    if ((n % 2) == 0) printf("Broj je djeljiv s brojem 2.\n");
    if ((n % 3) == 0) printf("Broj je djeljiv s brojem 3.\n");
    if ((n % 5) == 0) printf("Broj je djeljiv s brojem 5.\n");
    if ((n % 7) == 0) printf("Broj je djeljiv s brojem 7.\n");
    if (((n % 2) != 0) && ((n % 3) != 0) && ((n % 5) != 0) && ((n % 7) != 0)) printf("Broj nije djeljiv s brojevima 2, 3, 5, 7.");


    return 0;
}