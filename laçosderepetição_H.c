#include<stdio.h>
int main (){

int B,E, M, W;
printf("Digite a base: ");
scanf("%i", &B);


printf("Digite o expoente: ");
scanf("%i", &E);
M=1;
W=1;
while(M<=E)
{

    W=B*W;
    M=M+1;
}





}
