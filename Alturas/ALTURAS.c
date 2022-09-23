#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) { 
    
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n");

}

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {} 
}
  



int main () {

int n, i, p ;

printf("Quantidade de pessoas que serão digitadas: ");
scanf("%d", &n);

char vetn [n] [50];
double vetal[n], vetid [n];
double somaal, somaid, mediaal, porc = 0;


for (i=0; i<n; i++) {
    printf("\nDados da %da pessoa: ", i + 1);
    printf("\nNome da pessoa: ");
    limpar_entrada();
    ler_texto (vetn[i], 50);
    printf("Idade: ");
    scanf("%lf", &vetid[i]);
    printf("Altura: "); 
    scanf("%lf", &vetal[i]);
        
}

for (i=0; i<n; i++) {
        somaal = somaal + vetal[i];
}


mediaal = (somaal / (double)n);

printf("\nmedia das alturas: %.2lf\n", mediaal);

for (i=0; i < n; i++) {

    if (vetid[i] < 16 ) {
      printf("Pessoas com menos de 16 anos: %s\n", vetn[i]);  
      somaid = somaid + 1;
    }
}

porc = (somaid*100) / n;

printf("Porcetgaem de pessoas com menos de 16 anos: %.0lf%", porc);




    return 0;
}