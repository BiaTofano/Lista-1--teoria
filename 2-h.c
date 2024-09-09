#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n;
    float al;
    float an;
    float r;

        printf("\tProgressão aritimetica - PA\n");
        printf("\nEntre com o valor do primeiro termo: ");
        scanf("%f", &al);
        printf("\nEntre com o valor da razao: ");
        scanf("%f", &r);
        printf("\nEntre com o numero de termos: ");
        scanf("%d", &n);

    an = (al+(n-1)*r);

        printf("\n\nE-nesimo termo da P.A. - an: %f\n\n", an);

return 0;

}
