#include<stdio.h>

   float main (){
   float N1, N2, N3, N4, MD, X, Y;


  printf("digite o valor de N1: \n");
  scanf("%f", &N1);
  printf("digite o valor de N2: \n");
  scanf("%f", &N2);
  printf("digite o valor de N3: \n");
  scanf("%f", &N3);
  printf("digite o valor de N4: \n");
  scanf("%f", &N4);

  MD=(N1+N2+N3+N4)/4;

  if(MD>=5)
  {
      printf("APROVADO, com a media:%.2f\n", MD);

  }

  if(MD<5)
  {
      printf("REPROVADO,com a media de:%.2f\n", MD);
  }

   }


