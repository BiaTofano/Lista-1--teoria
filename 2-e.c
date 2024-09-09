#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float altura;
float largura;
float calculo;
float latas;

double arredonda_pcima;
double quantidade_de_latas;

printf("\tOi, seja bem-vindo(a) ao software que calcula a quantidade de tintas para pintar a sua parede");
printf("Para iniciar, por favor, informe a altura e a largura da parede em metros (m)\n");
printf("informe a altura da parede: ");
scanf("%f", &altura);
printf("Informe a largura da parede: ");
scanf("%f", &largura);

calculo = (altura*largura);
latas = calculo*300.0; //correspondendo ao valor de 300 ml por metro quadrado
quantidade_de_latas = latas/2000.0;
arredonda_pcima = ceil(quantidade_de_latas); // floor - arredonda p baixo
printf("A sua parede tem %.1f m^2, logo: precisa de %.1f lata(s) para pintar sua parede\n", calculo, latas);

return 0;

}
