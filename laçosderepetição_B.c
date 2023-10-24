#include<stdio.h>
int main (){
int A, B, C;

printf("digite um valor de 0 ate 10:");
scanf("%i", &A);

B=0;

while (B<=10)
{
    C=A*B;
    printf("%i x %i = %i\n",A, B, C);

    B=B+1;
}



}
