#include <stdio.h>
#include <math.h>
// Vitor Digenova Stoppa Lana
int main(){
 //T=triângulo, Q=Quadrado,L=Losango, C=Círculo, R=Trapézio
 float T, Q, L, C, R, figuras;
 float B, H, D, X, Y, Z, J, K;
 int numero;
 // B=Base, H=Altura, D=Lado, X=Diagonal maior, Y=Diagonal menor, Z=Raio, J=Base maior, K=Base menor
  printf("Por favor, coloque um algorismo de 1 a 5\n\n");
  scanf("%d", &numero);

  switch(numero){
      case 1:
  printf("Coloque os valores da base e da altura, respectivamente.\n\n");
  scanf("%f%f", &B, &H);
  T= B*H/2;
  printf("A area do triangulo e de %f", T);
  break;
      case 2:
  printf("Coloque o valor do lado\n\n");
  scanf("%f", &D);
  Q= D*D;
  printf("A area do quadrado e de %f", Q);
  break;
      case 3:
  printf("Coloque os valores da diagonal maior e da diagonal menor, respectivamente.\n\n");
  scanf("%f%f", &X, &Y);
  L= X*Y/2;
  printf("A area do losango e de %f", L);
  break;
      case 4:
  printf("Coloque o valor do raio do circulo\n\n");
  scanf("%f", &Z);
  C=3.14*Z;
  printf("A area do circlo e de %f", C);
  break;
    case 5:
  printf("Coloque os valores da base maior,da base menor e da altura respectivamente.\n\n");
  scanf("%f%f%f", &J, &K, &H);
  R=(J+K)*H/2;
  printf("A area do trapezio e de %f", R);
  break;
  }
 return 0;
}

