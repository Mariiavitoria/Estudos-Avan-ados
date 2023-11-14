#include<stdio.h>

   int main(){
   int A,X,R=0,M,K;

   for(M=1;M<=15;M++)
   {
       printf("Escreva o valor %i: ", M);
       scanf("%i", &A);
       X=1;
       for(K=1;K<=A;K++);
       {
           X=X*K;
           printf("%i", X);
       }
       R=R+X;
   }
   printf("A soma e de:%i", R);
   }




