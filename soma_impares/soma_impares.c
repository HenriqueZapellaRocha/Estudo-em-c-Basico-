#include <stdio.h>

    int main () {

        int x, y, i, j;
       i = 0;
        int troca = 0;

        printf("Digite dois numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > y) {
            troca = x;
            x = y;
            y = troca;
        }

        

        for (j=x + 1; j < y; j++) {
    
            if (j % 2 != 0){
            i = i + j;
            
            }
 
        
        }
        printf("Soma: %d", i);


            return 0;
    }