#include<stdio.h>
#include<math.h>

   float main (){
   float B,I;
   double R;

   printf("Digite B: ");
   scanf("%f", &B);
   printf("Digite I: ");
   scanf("%f", &I);

   R=pow(B,(1/I));

   printf("O valor da raiz e de: %2.f", R);

   }
