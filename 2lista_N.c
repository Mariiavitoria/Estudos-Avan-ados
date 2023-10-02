#include<stdio.h>

   int main(){
   int A,B,C,D;

    printf("Digite A: \n");
    scanf("%i", &A);
    printf("Digite B: \n");
    scanf("%i", &B);
    printf("Digite C: \n");
    scanf("%i", &C);

    D=A+B+C;

    if(D>=100)
    {
        printf("O valor da soma e maior ou igual a 100, e de: %i", D);
    }
    }

