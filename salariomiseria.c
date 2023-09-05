#include<stdio.h>

  float main(){

  float V,Q,P,S,VD,SL;

   printf("digite o valor da hora aula: ");
   scanf("%f",  &V);
   printf("digite quantidade de horas trabalhadas: ");
   scanf("%f",   &Q);
   printf("digite porcentagem do desconto: ");
   scanf("%f",  &P);

    S=V*Q;
    VD=S*(P/100);
    SL=S-VD;
    printf("O valor do salario liquido e de: %f", SL);
    }
