#include<stdio.h>

int main()
{
   int x,y; //Esta frase é comentário

printf ("digite x:/n");
scanf("%i",&x);
printf("digite y:/n");
scanf ("%i",&y);

if(x>y)
    printf("x é maior/n");
else{
if(y>x){
    printf("y é maior/n");
   }else{
    printf("x e y são iguais/n");
   }
 }
}
