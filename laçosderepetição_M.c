#include<stdio.h>
int main (){

int A, B, C, K;
K=0;
for (A=1;A<=10;A++)
{
    printf("Escreva o valor %i:\n", A);
    scanf("%i",&C);


    K=C+K;


}
printf("a soma e de %i", K);
   K=K/10;
    printf("a media e de %i", K);





}
