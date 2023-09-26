#include<stdio.h>

   int main(){
   int N, X;

    printf("digite N:\n");
    scanf("%i", &N);

    if(N>0)
    {

     printf("o valor de N e de:%i\n", N);

    }

    if(N<0)
    {
        X=N*(-1);
        printf("o valor de N e de:%i\n", X);
    }


   }
