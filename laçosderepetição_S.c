#include<stdio.h>

   int main (){
   int X,Y,Q;

   Q=0;
   printf("Digite o valor do dividendo: ");
   scanf("%I", &X);
   printf("Digite o valor do divisor: ");
   scanf("%i", &Y);

   while(X>=Y)
   {
       X=X-Y;
       Q=Q+1;
   }

   printf("O valor do quociente e de: %i", Q);

   }
