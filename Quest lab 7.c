#include <stdio.h>
#include <math.h>
#include <string.h>
#define TAM 3

int main() {
  int num[TAM];
  int resul = 0;
  int resul1 = 1;
  
  for(int i = 0; i < TAM; i++){
    scanf("%d", &num[i]);
    resul += num[i];
    resul1 *= num[i];
  }

  float numero1 = pow(resul, 1.0 / TAM);
  float numero2 = resul / TAM;
  
  printf("Media geométrica: %.2f, Media aritmética: %.2f", numero1, numero2);
  return 0;
}