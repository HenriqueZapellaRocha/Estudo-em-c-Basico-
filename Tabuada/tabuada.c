#include <stdio.h>


int main () {

int a, i;
int resultado = 0;


    printf("Qual tabuada desejada? ");
    scanf("%d", &a);

    for (i = 1; i <= 10; i++) {
    resultado = a * i;
    printf("Valor da tabuada %d x %d: %d\n",a, i, resultado);
    }







    return 0;
}