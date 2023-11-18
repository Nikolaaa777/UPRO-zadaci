#include <stdio.h>

int main() {
    
    int broj, i;

    printf("Unesite broj > ");
    scanf("%d", &broj);
    printf("\n");

    if (broj % 2 == 0) {
        printf("Neispravan unos!");
        return 0;
    }

    int pola = (broj / 2) + 1;
    int j = 1;
    int razmak1 = (broj / 2);
    int konst2 = razmak1;
    int zvjezdice = 1;


    for (i = 1; i <= pola; i = i + 1 ) {                       // zvjezdice do pola + 1. retka
        for (razmak1; razmak1 > 0; razmak1 = razmak1 - 1) printf(" ");
        for (j; j > 0; j = j - 1) printf("*"); 
        zvjezdice = zvjezdice + 2;   
        j = zvjezdice;
        konst2 = konst2 - 1;
        razmak1 = konst2;
        printf("\n");
    }
  
    zvjezdice = broj - 2;
    int razmak2 = 1;
    j = zvjezdice;
    int konst1 = razmak2;

    for (i = pola + 1; i <= broj; i = i + 1) {             // zvjezdice od pola + 1. retka
        for (razmak2; razmak2 > 0; razmak2 = razmak2 - 1) printf(" ");
        for (j; j > 0; j = j - 1) printf("*"); 
        zvjezdice = zvjezdice - 2;   
        j = zvjezdice;
        konst1 = konst1 + 1;
        razmak2 = konst1;
        printf("\n");
    }

    



        
    return 0;
}