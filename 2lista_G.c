#include<stdio.h>
#include<math.h>

   int main(){
   int A,B,C,D;

   printf("Digite A: \n");
   scanf("%i", &A);
   printf("Digite B: \n");
   scanf("%i", &B);
   printf("Digite C: \n");
   scanf("%i", &C);
   printf("Digite D: \n");
   scanf("%i", &D);

   if(A%2==0&&A%3==0)
   {
       printf("%i e divisivel por 2 e por 3 \n", A);
   }

   if(B%2==0&&B%3==0)
   {
       printf("%i e divisivel por 2 e 3", B);
   }

   if(C%2==0&&C%3==0);
   {
       printf("%i e divisivel por 2 e por 3", C);
   }

   if(D%2==0&&D%3==0);
   {
       printf("%i e divisivel por 2 e por 3", D);
   }

   printf("Oa valores nao apresentados nao sao divisiveis por 2 e 3 ao mesmo tempo");

   }
