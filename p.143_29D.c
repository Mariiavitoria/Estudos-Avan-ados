#include<stdio.h>

  float main(){
  float L1,L2,L3,L4;

  printf("Digite L1: \n");
  scanf("%f", &L1);
  printf("Digite L2: \n");
  scanf("%f", &L2);
  printf("Digite L3: \n");
  scanf("%f", &L3);
  printf("Digite L4: \n");
  scanf("%f", &L4);

  if(L1==L2&&L2==L3&&L3==L4)
  {
      printf("O retangulo e tambem um quadrado.");
  }
  else
  {
      printf("nao e um quadrado");
  }
  }


