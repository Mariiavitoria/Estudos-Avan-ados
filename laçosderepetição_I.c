#include<stdio.h>

   int main(){
   int ATUAL,PROXIMO,ANTERIOR,X;

   ATUAL=1;
   PROXIMO=0;
   ANTERIOR=0;

   while(X<=15)
   {
       PROXIMO=ANTERIOR+ATUAL;
       printf("O valor do proximo numero e de: %i \n", PROXIMO);
       ANTERIOR=ATUAL;
       ATUAL=PROXIMO;
       X=X+1;
   }
   }
