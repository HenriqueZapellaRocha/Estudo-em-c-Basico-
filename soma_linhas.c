#include <stdio.h>
#include <string.h>


int main () {


int x, y, i, j;

printf("Qual a quantidade de linhas da matriz: ");
scanf ("%d", &x);
printf("Quantidade de colunas: ");
scanf("%d", &y);

int mat[x][y];
double vet[x];


  
for (i=0; i < x; i++) {
    printf("Digite os valores da %d linha:\n", i+1);
    for (j=0; j < y; j++) {
      scanf("%d", &mat[i][j]);
      vet[i] = vet[i] + mat [i] [j];
    }

}



printf("Vetor gerado: \n");

for (i=0; i < x; i++) {
    printf("%.1lf\n", vet[i]);
}



    return 0;
}