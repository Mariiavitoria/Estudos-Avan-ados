#include<stdio.h>
int main (){
int C, B, A, D;

  C=0;
  X=0;

do
{

  printf("Escreva o valor numerico: ");
  scanf("%i", &A);

if(A>=0)
{
   B=B+A;
   D=D+1;

}
while(A>=0);
if(D>0)
{
    C=B/D;
    printf("A soma dos valores e de: %f\n", B);
    printf("A media e de: %f\n", C);
    printf("O numero de valores lidos e de: %f\n", D);
}
}
printf("O somatorio e de %i", X);
printf("O total de valores e de %i", C);


   X=X/C;

printf("A media e de %i", X);

}
