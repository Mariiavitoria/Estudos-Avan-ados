#include<stdio.h>

   float main(){
   float L1,L2,L3;

   printf("Digite L1: \n");
   scanf("%f", &L1);
   printf("Digite L2: \n");
   scanf("%f", &L2);
   printf("Digite L3: \n");
   scanf("%f", &L3);

   if(L1+L2>L3&&L1+L3>L2&&L2+L3>L1)
   {
       if(L1==L2&&L1==L3)
       {
           printf("E um triangulo equilatero");
       }
       else if(L1==0&&L2==0&&L3==00)
       {
           printf("Triangulo invalido");
       }
       else if(L1==L2||L1==L3||L2==L3)
       {
           printf("E um triangulo isosceles");
       }
       else
       {
           printf("E um triangulo escaleno");
       }
   }

   else
   {
       printf("Nao e um triangulo");
   }
   }
