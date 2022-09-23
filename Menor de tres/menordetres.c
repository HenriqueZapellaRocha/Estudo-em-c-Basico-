#include <stdio.h>
#include <string.h>


int main () {

    int a, b ,c, maior; 

    maior = 0;


    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segudno valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);

    if (a <= b && a <= c) {
        maior = a;

    } else if (b <= a && b <= c) {
        maior = b;

    } else if (c <= a && c <= b) {
        maior = c;
    } 

    printf("\nmenor: %d", maior);










    return 0;
}