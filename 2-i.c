#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a;
    float b;
    float c;
    float x1;
    float x2;
    float delta;


    printf("\nDigite os coeficientes a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b - 4*a*c;

    if(delta>0){
    x1= (-b+sqrt(delta))/2*a;
    x2= (-b-sqrt(delta))/2*a;
    printf("\nAs raizes da equa��o s�o : %f  %f", x1,x2);
}
    else if(delta == 0){
    x1= -b/2*a;
    printf("\nA equa��o possui uma raiz: %f", x1);
}
else {
    printf("\nA equa��o n�o possui raizes reais");
}
return 0;
}
