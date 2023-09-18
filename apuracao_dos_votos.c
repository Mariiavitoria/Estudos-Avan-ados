#include<stdio.h>

   int main(){
   int A,B,C,N,BR;
   float T,PA,PB,PC,PN,PBR;

   printf("Digite A: ");
   scanf("%i", &A);
   printf("Digite B: ");
   scanf("%i", &B);
   printf("Digite C: ");
   scanf("%i", &C);
   printf("Digite N: ");
   scanf("%i", &N);
   printf("Digite BR: ");
   scanf("%i", &BR);

   T=A+B+C+N+BR;
   PA=(A*100)/T;
   PB=(B*100)/T;
   PC=(C*100)/T;
   PN=(N*100)/T;
   PBR=(BR*100)/T;

   printf("O valor da porcentagem de a e de: %f \n", PA);
   printf("O valor da porcentagem de b e de: %f \n", PB);
   printf("O valor da porcentagem de c e de: %f \n", PC);
   printf("O valor da porcentagem de n e de: %f \n", PN);
   printf("O valor da porcentagem de br e de: %f \n", PBR);

   }
