#include<stdio.h>
int main (){
int A, B;
B=0;
for (A=2; A<=500; A=A+2)
{
    B=B+A;
    printf("%i %i\n", A, B);
}
printf("O somatorio dos pares de 0 ate 500 e de: %i \n", B);

}
