#include<stdio.h>

   int main(){
   int A,B,C,D,E,MAIOR,MENOR;

   printf("Digite A: \n");
   scanf("%i", &A);
   printf("Digite B: \n");
   scanf("%i", &B);
   printf("Digite C: \n");
   scanf("%i", &C);
   printf("Digite D: \n");
   scanf("%i", &D);
   printf("Digite E: \n");
   scanf("%i", &E);

   MAIOR=A;
   MENOR=A;

   if(B>MAIOR)
   {
       MAIOR=B;
   }
   else if(B<MENOR)
   {
       MENOR=B;
   }

   if(C>MAIOR)
   {
       MAIOR=C;
   }
   else if(C<MENOR)
   {
       MENOR=C;
   }

   if(D>MAIOR)
   {
       MAIOR=D;
   }
   else if(D<MENOR)
   {
       MENOR=D;
   }

   if(E>MAIOR)
   {
       MAIOR=E;
   }
   else if(E<MENOR)
   {
       MENOR=E;
   }

   printf("O menor valor e: %i\n", MENOR);
   printf("O maior valor e: %i\n", MAIOR);

   }
