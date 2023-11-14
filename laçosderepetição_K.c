#include<stdio.h>

   int main (){
   unsigned long long X=1ULL,Z=0ULL,Y=1ULL;

       Y=1;

   while(Y<=64)
   {
       X=X*2;
       Z=Z+X;
       Y=Y+1;

   printf("O somatorio e de: %i\n", Z);
   }

   }
