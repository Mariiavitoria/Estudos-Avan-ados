#include<stdio.h>

  float main(){

  float N1, N2, N3, N4, MD1, MD2, NE;

  printf("digite o valor de N1: \n");
  scanf("%f", &N1);
  printf("digite o valor de N2: \n");
  scanf("%f", &N2);
  printf("digite o valor de N3: \n");
  scanf("%f", &N3);
  printf("digite o valor de N4: \n");
  scanf("%f", &N4);

  MD1=(N1+N2+N3+N4)/4;

  if(MD1>=7)
  {
      printf("Aprovado, com a media de:%.2f\n", MD1);

  }
  else if(MD1<7)
  {
      printf("digite a quinta nota: \n");
      scanf("%f", &NE);
      MD2=(MD1+NE)/2;
      if(MD2>=5)
      {
          printf("Aprovado em exame, com a media de:%.2f\n", MD2);
      }
      else {
        printf("Reprovado");
      }
  }










}
