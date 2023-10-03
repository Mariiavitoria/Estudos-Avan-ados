#include<stdio.h>

   float main(){
   float N1,N2,N3,M;

   printf("Digite N1: \n");
   scanf("%f", &N1);
   printf("Digite N2: \n");
   scanf("%f", &N2);
   printf("Digite N3: \n");
   scanf("%f", &N3);

   M=(N1*2+N2*3+N3*5)/10;

   if(M>=7)
   {
       printf("APROVADO");
   }
   else
   {
       printf("REPROVADO");
   }
   }
