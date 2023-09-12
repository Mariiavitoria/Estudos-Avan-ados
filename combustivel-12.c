#include<stdio.h>
  float main  () {

  float tempo, velocidade, distancia, litrosusados;

  printf ("digite tempo:");
  scanf ("%f", &tempo);

  printf ("digite velocidade: ");
  scanf ("%f", &velocidade);

  distancia=velocidade*tempo;
  printf("o valor da distancia percorrida e de: %f\n", distancia);

  litrosusados=distancia/12;
  printf ("o valor dos litros usados e de: %f", litrosusados);



}
