#include<stdio.h>

   float main(){
   float IMC,KG,M;

   printf("Digite M: \n");
   scanf("%f", &M);
   printf("Digite KG: \n");
   scanf("%f", &KG);

   IMC=(M*M)/KG;

   if(18,5<=IMC<25)
   {
       printf("Situacao normal");
   }
   else if(25<=IMC<30)
   {
       printf("Situacao sobrepeso");
   }
   else if(30<=IMC<35)
   {
       printf("Situacao de obesidade grau 1");
   }
   else if(35<=IMC<40)
   {
       printf("Situacao de obesidade grau 2");
   }
   }
