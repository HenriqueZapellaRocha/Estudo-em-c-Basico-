#include <stdio.h>
#include <string.h>



    int main (){
  
int l, c,i ,j;

printf("Quantas linhas tera a matriz? ");
scanf("%d", &l);
printf("Qauntas colunas tera a matriz? ");
scanf("%d", &c);

int mat[l] [c];

for (i = 0; i < l; i++){
    for(j = 0; j < c; j++) {
        printf("Escreva matriz [%d]%d, ", i, j);
        scanf("%d", &mat [i] [j]);
    }
}

for (i = 0; i < l; i++){
    for (j = 0; j < c; j++) {
    printf("Matrizes digitadas mat[%d,%d]: %d\n",i , j,  mat [i] [j]);


    }
}
      return 0;
    
    }