#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int length) { 
    
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n");

}

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {} 
}


int main () {

double base, altura;
double area, peri, diagonal = 0;

printf ("Qual a base do retangulo: ");
scanf("%lf", &base);
printf("Qual a altura do retangulo: ");
scanf ("%lf", &altura);

area = base * altura;
peri = 2 *( base + altura);  

diagonal = sqrt(altura*altura + base*base);

printf ("Valor area: %.4lf\n", area);
printf("Valor perimetro: %.4lf\n", peri);
printf("Valor diagonal: %.4lf\n", diagonal);






}