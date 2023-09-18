#include<stdio.h>

   float main (){
   float SM,PR,NS;

   printf("Digite SM: ");
   scanf("%f", &SM);
   printf("Digite PR: ");
   scanf("%f", &PR);

   NS=SM+(PR/100)*SM;

   printf("O valor do novo salario e de: %f", NS);

   }
