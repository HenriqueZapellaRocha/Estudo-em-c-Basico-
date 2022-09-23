#include <stdio.h>
#include <string.h>

    int main () {

        int a, b;

        printf("Digite dois valores: \n");
        scanf("%d", &a);
        scanf("%d", &b);

        if (a == b) {
            return 0;
        } else if (a < b) {
            printf("Crescente!!!!");
        } else {
            printf("Decrescente!!!!");
        }











        return 0;
    }