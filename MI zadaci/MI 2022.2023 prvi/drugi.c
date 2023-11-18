#include <stdio.h>

int main(void) {

    int n, i, j; 

    do {
        printf("Unesite n > ");
        scanf("%d", &n);       
    } while (n <= 0);

    int a[n];

    //UCITAVANJE CLANOVA
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    //ZAMJENA VARIJABLI
    int pomocna;
    int ostatak = n % 2;
    for (i = 0; i < n - 1 - ostatak; i = i + 2) {
        pomocna = a[i];
        a[i] = a[i + 1];
        a[i + 1] = pomocna;
    }

    for (i = 0; i < n; i = i + 1) {
      printf("%d ", a[i]);
   }

    return 0;
}