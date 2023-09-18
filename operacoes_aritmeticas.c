#include<stdio.h>

   float main () {
   float A,B,C,D,E,F,G,H;

   printf("Digite A: ");
   scanf("%f", &A);
   printf("Digite B: ");
   scanf("%f", &B);

   C=A+B;
   D=A-B;
   E=B-A;
   F=A*B;
   G=A/B;
   H=B/A;

   printf("A soma de a e b e de: %f \n", C);
   printf("A diferenca de a e b e de: %f \n", D);
   printf("A diferenca de b e a e de: %f \n", E);
   printf("O produto de a e b e de: %f \n", F);
   printf("O resultado da divisao de a por b e de: %f \n", G);
   printf("O resultado da divisao de b por a e de: %f \n", H);

   }
