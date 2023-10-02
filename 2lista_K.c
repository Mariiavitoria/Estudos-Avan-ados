#include<stdio.h>

   int main(){
   int X;

   printf("Digite X: ");
   scanf("%i", &X);

   if((X>=1)&&(X<=9))
   {
       printf("O valor esta na faixa permitida");
   }
   else
   {
       printf("O valor esta fora da faixa permitida");
   }

   }
