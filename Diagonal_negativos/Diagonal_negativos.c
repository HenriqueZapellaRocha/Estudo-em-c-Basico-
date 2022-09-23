#include <stdio.h>
#include <string.h>


int main () {

int n, i;
int soma = 0;

printf("Escreva uma matriz quadrada de ordem n: ");
scanf("%d", &n);

int mat [n] [n];

for (i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("Elemento [%d, %d]: ", i, j );
        scanf("%d", &mat[i] [j]);
    }
}

printf("\nDiagonal principal: ");

for (i = 0; i < n; i++) {
 printf("%d ", mat[i] [i]);
}    


   


for (i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (mat[i] [j] < 0 ) {
        soma = soma + 1;
        } 
        }    


    }

printf("Qauntidade de negativos: %d", soma);
    return 0;
}







