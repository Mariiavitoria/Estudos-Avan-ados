#include<stdio.h>
float main(){
    float prestacao,taxa,valor,tempo;

    printf("digite taxa: ");
    scanf("%f", &taxa);

    printf("digite valor: ");
    scanf("%f", &valor);

    printf("digite tempo: ");
    scanf("%f", &tempo);

    prestacao=valor+(valor*taxa/100)*tempo;
    printf("o valor do tempo e de: %f",prestacao);








}
