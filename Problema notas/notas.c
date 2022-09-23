#include <stdio.h>
#include <string.h>


int main () {

double n1, n2;
double media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    media = (n1 + n2) / 2;

    if (media >= 6) {
        printf("Notal final: %.1lf", media);

    } else {
        printf("Nota final: %.1lf", media);
        printf("\n REPROVADO!!!");

    }



    return 0;
}