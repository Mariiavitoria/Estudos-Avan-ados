#include<stdio.h>
#include<string.h>
#include<stdlib.h>

   void main(){
   char NOME,SEXO;

   printf("Digite seu NOME: \n");
   scanf("%s", &NOME);
   printf("Digite seu SEXO, com M para masculino e F para feminino: \n");
   scanf("%s", &SEXO);

   switch(SEXO)
   {
   case 'M':
   printf("NOME:%s, SEXO:masculino", NOME);
   break;

   case'F':
   printf("NOME:%s, SEXO:feminino", NOME);
   break;

   default:
   printf("NOME:%s, SEXO:sexo informado invalido", NOME);
   }

   }
