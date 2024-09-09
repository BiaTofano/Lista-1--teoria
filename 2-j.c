#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int total;
int umreal;
int dezreais;
int cinquentareais;
int cemreais;

    printf("Digite a quantidade de notas de 1 real utilizadas: ");
    scanf("%d", &umreal);
    printf("Digite a quantidade de notas de 10 reais: ");
    scanf("%d", &dezreais);
    printf("Digite a quantidade de notas de 50 reais utilizadas: ");
    scanf("%d", &cinquentareais);
    printf("Digite a quantidade de notas de 100 reais utilizadas: ");
    scanf("%d", &cemreais);

    total = 1*umreal+ 10*dezreais+ 50*cinquentareais+100*cemreais;

    printf("Seu valor total é de : %d", total);


return 0;
}
