#include <stdio.h>

int main(void) {

    int N, M, idxi, idxj;
    int i, j;
    printf("Upisite brojeve N, M, idxi i idxj > ");
    scanf("%d %d %d %d ", &N, &M, &idxi, &idxj);

    int polje[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) polje[i][j] = 0;
    }

    int brojac1 = 1, brojac2 = -1, broj_poteza = 0;  //U ZADATKU brojac1 = i_smjer, a brojac2 = j_smjer

    if (idxi == N - 1 && idxj == M - 1) {
        polje[idxi][idxj] = 1;
        brojac1 = brojac1 * - 1;
        idxi += brojac1;
        idxj += brojac2;
        broj_poteza += 1;  
    } else if (idxi == 0 && idxj == 0)  {
        polje[idxi][idxj] = 1;
        brojac2 = brojac2 * - 1;
        idxi += brojac1;
        idxj += brojac2;
        broj_poteza += 1; 
    } 
    else if (idxi == 0 || idxj == M - 1) {
        polje[idxi][idxj] = 1;
        idxi += brojac1;
        idxj += brojac2;
        broj_poteza += 1; 
    }


    while (polje[idxi][idxj] != 1) {
        polje[idxi][idxj] = 1;


        if (idxi == 0 || idxi == N - 1) brojac1 = -1 * brojac1;

        if (idxj == M - 1 || idxj == 0) brojac2 = -1 * brojac2;
        
        idxi += brojac1;
        idxj += brojac2;   
        broj_poteza += 1; 
    }
    

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d", polje[i][j]);
            if (j < M - 1) printf(" ");
        }
        printf("\n");
    } 
    printf("Duljina: %d\n", broj_poteza);
    return 0;
}