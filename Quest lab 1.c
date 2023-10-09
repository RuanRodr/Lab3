#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

int main() {
  
  float v[TAM];
  srand(time(NULL));
  
  for(int i = 0; i < TAM; i++){
  v[i] = rand() % 100;
  }
  
float maior = v[0];
float menor = v[0];
  
    for (int i = 1; i < TAM; i++) {
      if (v[i] < menor) {
         menor = v[i];
      }
      if (v[i] > maior) {
         maior = v[i];
      }
}
  
float soma = menor + maior;
  
  printf("Menor número: %.2f\n", menor);
  printf("Maior número: %.2f\n", maior);
  printf("Soma do menor e do maior número: %.2f\n", soma);
  
return 0;
}