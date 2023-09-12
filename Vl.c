#include<stdio.h>
#include<math.h>
  int main (){

  float V, R, A;

  printf ("digite R: ");
  scanf ( "%f", &R);

  printf("digite A: ");
  scanf ("%f", &A);

  V = 3.14 * pow(R,2) *A;

  printf("o volume da lata de oleo e de: %f", V);
 }
