#include <stdio.h>
#include <string.h>


int main () {


int cont, a, soma;
cont = 0;
double  media = 0;
soma = 0;

printf("Digite as idades: \n");
scanf("%d", &a);
if (a < 0) {
    printf("Impossivel calcular: ");
    return 0;
}
 
 while(a >= 0) {

soma = soma + a;
cont = cont + 1;
scanf("%d", &a);
 }

media = (double)soma / cont;

printf("\nmedia: %.2lf", media);

printf("\n%d", cont);

    return 0;
}
