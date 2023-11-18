#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a, t, d, s, j, razlika;
    
    printf("Unesite cetveroznamenkasti broj > ");
    scanf("%d", &a);
    t = a % 10;
    a = a / 10;
    s = a % 10;
    a = a / 10;
    d = a % 10;
    a = a / 10;
    j = a % 10;
    razlika = abs((t + d) - (s + j)); 
    if (razlika == 0) {
        printf("Provjera je uspjesna!");
    } else {
        printf("Apsolutna razlika suma je %d", razlika);
    }
    return 0;
    
}