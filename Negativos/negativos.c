#include <stdio.h>
#include <string.h>

int main () {

int i, x, d;

printf("Qauntos numeiors vai digitar: ");
scanf("%d", &x);

int vet[x];

for (i=0; i < x; i++) {

    printf("digite um numero: ");
    scanf("%d", &d);
    vet[i] = d;

}
printf("\nNumeros negativos: ");
for (i=0; i < x; i++) {

    if (vet[i] < 0) {
        
        printf("%d", vet[i]);
    }

}






    return 0;
}