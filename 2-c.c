#include <stdio.h>
#include <stdlib.h>

int main (){

char nome[1][100];
char idade;
int expectativa;
int resultado;

expectativa = 76;

printf("Digite o seu nome e a sua idade:\n");
gets(nome);
scanf("%d", &idade);

 //adotando a expectativa de vida como aproximadamente 76 anos, de acordo com o jornal usp.

 resultado = expectativa-idade;
 printf("Sua expectativa de vida é : %d anos", resultado);

return 0;

}
