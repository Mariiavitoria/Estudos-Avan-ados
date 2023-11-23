#include<stdio.h>

   int main () {
   int A,B,C;

  for(A=1;A<=10;A=A+2)
    {
        B=1;
        for(C=1;C<=A;C++)
        {
            B=B*C;
        }

        printf("O fatorial de %i: %i\n",A,B);
    }
   }
