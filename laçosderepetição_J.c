#include<stdio.h>

   float main(){
   float C,F;

   C=10;
   while(C<=100)
   {
    F=(9*C+160)/5;
    printf("O valor em celsius e de: %2.f\n", C);
    printf("O valor em fahrenheit e de: %2.f\n", F);
    C=C+10;
   }
   }
