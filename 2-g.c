#include <stdio.h>
#include <stdlib.h>

int main(){

    float temperatura;
    float pressao;
    float massa_ar;
    float volume;

    printf("Software para calculo da massa de ar de um pneu \n\n");
    printf("Informe a pressão do pneu: " );
    scanf("%f", &pressao);
    printf("Informe o volume do pneu: ");
    scanf("%f", &volume);
    printf("Informe a temperatura do pneu: ");
    scanf("%f", &temperatura);

    massa_ar = ((pressao*volume)/(0.37*(temperatura*460)));

    printf("A massa de ar do pneu eh de: %.3f", massa_ar);

    return 0;
}
