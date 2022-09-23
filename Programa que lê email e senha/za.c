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



char senha[50];
char email[50];
char senha2[50] ;
char email2[50] ;
char ins;
int i = 1;
int d, f, retu, retu1;

printf("Deseja criar uma conta? s/n ");
scanf("%c", &ins);

if (ins =='s') {
    printf("Digite o email: ");
    limpar_entrada();
    ler_texto(email, 50);
    printf("Escreva uma senha: ");
    ler_texto(senha, 50);
} else  {
    return 0;
}

for (d = 1; d < 5; d++) {
  printf("Digite o email: ");
  ler_texto(email2, 50);
  printf("digite sua senha: ");
  ler_texto(senha2, 50);
  
  retu = strcmp(email, email2);
  retu1 = strcmp(senha, senha2);

 if (retu == 0 && retu1 == 0) {

printf("Bem vindo!!!");
    return 0;
} else if (retu == 0 ) {
    printf("senha errada\n");
    
} else if (retu1 == 0) {
    printf ("email errado\n"); 
}

 

}
  return 0;
}
