#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a, petice, dvojke, jedinice;
    printf ("Upisite iznos u kn > ");
    scanf ("%d", &a);
    petice = a / 5;
    a = a % 5;
    dvojke = a / 2, 
    a = a % 2;
    jedinice = a % 2; 
    
    printf ("Kovanice:");
    if (petice != 0) {
        printf("\n%d x 5 kn", petice);
    }
    if (dvojke != 0) { 
        printf("\n%d x 2 kn", dvojke);
    }
    if (jedinice != 0) {
        printf("\n%d x 1 kn", jedinice);
    }

    return 0;

}