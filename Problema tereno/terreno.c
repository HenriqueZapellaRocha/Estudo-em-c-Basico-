#include <stdio.h>
#include <string.h>

int main () {

double lar, comp, val;
double area = 0;
double preco = 0;

printf("Digite a largura do terreno: ");
scanf("%lf", &lar);
printf("Digite o comprimento do terreno: ");
scanf("%lf", &comp);
printf("Digite o preço do metro quadrado: ");
scanf("%lf", &val);

area = lar * comp;
preco = area * val;

printf("area do terreno: %.2lf\n", area);
printf("Valor do terreno: %.2lf\n", preco);















}