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

char nome1[50];
char nome2[50];
int idade1, idade2, media;

printf("Qaul o nome da primeira pessoa: ");
ler_texto(nome1, 50);
printf("Qual idade da primeira pessoa: ");
scanf("%d", &idade1);
printf("Qaul o nome da segunda pessoa: ");
limpar_entrada ();
ler_texto(nome2, 50);
printf("Qual idade da segunda pessoa: ");
scanf("%d", &idade2);

media = (idade1 + idade2) / 2;


printf("\nA meida de  idade de %s e %s e de %d ", nome1, nome2, media);

     
}