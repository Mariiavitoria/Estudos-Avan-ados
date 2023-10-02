#include<stdio.h>
#include<math.h>

   float main (){
   float A, B, C, D, X1, X2;

   printf("Digite A: \n");
   scanf("%f", &A);
   printf("Digite B: \n");
   scanf("%f", &B);
   printf("Digite C: \n");
   scanf("%f", &C);

   D=(B*B)-4*A*C;

   if(D>0)
   {
       X1=(-(B)+sqrt(D))/2*A;
       printf("o valor de uma das solucoes reais e de: %f \n", X1);
       X2=((-B)-sqrt(D))/2*A;
       printf("o valor da outra solucao real e de: %f \n", X2);
   }
   else if(D=0)
   {
       X1=(-(B)+sqrt(D))/2*A;
       printf("ha apenas uma solucao real, e o valor e de: %f \n", X1);
   }
   else(D<0);
   {
       printf("nao ha solucao real para a equacao.");
   }

   }
