#include <stdio.h>
#include <string.h>
#include <math.h>



    int main () {

        double a, b, c;
        double delta, x1, x2 = 0;
        printf("Coeficiente a: ");
        scanf("%lf", &a);
        printf("Coeficiente B: ");
        scanf("%lf", &b);
        printf("Coeficiente C: ");
        scanf("%lf", &c);

        delta = pow(b, 2) - (4*a*c);

            if(delta < 0) {
                printf("Nao possui raizes reais: ");
                return 0;
            }

        x1 = ((-b) + sqrt(delta)) / (2*a);
        x2 = ((-b) - sqrt(delta)) / (2*a);

        printf("\nValor de x1: %.4lf", x1);
        printf("\nValor de x2: %.4lf",x2);





        return 0;
    }
