#include<stdio.h>

   float main() {
   float cotacao, valoremdolar, real;

   printf("Digite cotacao: ");
   scanf("%f", &cotacao);
   printf("Digite valor em dolar: ");
   scanf("%f", &valoremdolar);

   real=cotacao*valoremdolar;

   printf("O valor em real e de: %f", real);

   }
