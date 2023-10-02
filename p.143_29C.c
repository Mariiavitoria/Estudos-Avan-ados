#include<stdio.h>

   int main(){
   int N1,N2,D;

   printf("Digite N1: \n");
   scanf("%i", &N1);
   printf("Digite N2: \n");
   scanf("%i", &N2);

   D=N1-N2;

   if(D<0)
   {
       printf("O valor da diferenca entre o primeiro e segundo numero digitado e menor que zero.");
   }
   if(D>=0)
      {
          printf("O valor da diferenca entre o primeiro e segundo numero digitado e maior ou igual a zero.");
      }

   }
