#include <stdio.h>
#include <string.h>


int main () {

    int a, b ,c, maior; 


    printf("Primeiro valor: ");
    scanf("%d", a);
    printf("Segudno valor: ");
    scanf("%d", b);
    printf("Terceiro valor: ");

    if (a < b && a < c) {
        maior = a;

    } if else (b < a && b < c) {
        maior = b;

    } if else (c < a && c < b) {
        maior = c;
    } 

    printf("menor: %d", maior);










    return 0;
}