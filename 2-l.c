#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int total;

        while ( total != 0) {
    printf("\nDigite o total do caixa no dia de hoje: ");
    scanf("%d", &total);

    if ( total == 0 ) return 0;

    int aux = total;
    int x,y = 0;


        x = aux / 100;
        y = aux % 100;
        printf("\nNotas de 100 %d", x);

        aux = aux - (x * 100);
        x = aux / 50;
        y = aux % 50;
        printf("\nNotas de 50 %d", x);

        aux = aux - (x * 50);
        x = aux / 10;
        y = aux % 10;
        printf("\nNotas de 10 %d", x);

        aux = aux - (x * 10);
        printf("\nNotas de 1 %d", aux);




    }


}
