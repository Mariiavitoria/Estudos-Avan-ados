#include<stdio.h>

   float main (){
   float V,T,D;

   printf("Digite D: ");
   scanf("%f", &D);
   printf("Digite T: ");
   scanf("%f", &T);

   V=(D*100)/(T*60);

   printf("O valor da velocidade do projetil e de: %f", V);

   }
