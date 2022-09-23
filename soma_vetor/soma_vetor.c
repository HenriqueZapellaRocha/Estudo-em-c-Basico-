#include <stdio.h>
#include <string.h>

int main () {

int x, i;
double soma, media = 0;


printf("Quantos numeros serão digitados? ");
scanf("%d", &x);

double vet[x];

for (i=0; i < x; i++) {

    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);
}
printf("Valores: ");

for (i=0; i < x; i++) {
printf("%.1lf ", vet[i]);
}

for (i=0; i < x; i++) {

    soma = soma + vet[i];
}
printf("\nSoma: %.2lf", soma);

for (i=0; i < x; i++) {
    media = soma / x;
}

printf("\nMedia: %.2lf", media);





    return 0;
}