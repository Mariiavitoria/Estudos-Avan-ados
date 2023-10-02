#include<stdio.h>

   float main(){
   float N;

   printf("Digite N: ");
   scanf("%f", &N);

   if(N==0)
   {
       printf("Nao valido, numero nulo\n");
   }
   if(N>0)
   {
       printf("O numero e positivo\n");
   }
   else if(N<0)
   {
       printf("O numero e negativo");
   }
   }
