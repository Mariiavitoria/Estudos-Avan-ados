#include<stdio.h>

   int main (){
   int A,B,C,X;

   printf("Digite A: \n");
   scanf("%i", &A);
   printf("Digite B: \n");
   scanf("%i", &B);
   printf("Digite C: \n");
   scanf("%i", &C);

   if(A>B)
   {
       X=A;
       A=B;
       B=X;
   }
   if(B>C)
   {
      X=B;
      B=C;
      C=X;
   }
   if(A>B)
   {
       X=A;
       A=B;
       B=X;
   }

   printf("%i %i %i", A,B,C);
   }
