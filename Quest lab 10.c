#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 3
#define ALEA 100

int main() {
  
int matriz[TAM][TAM];
int num;
int cont = 0;

puts("digite o número desejável:");
scanf("%d", &num);
  
srand(time(NULL));

  
for (int i = 0; i < TAM; i++) {
  for (int j = 0; j < TAM; j++) {
   matriz[i][j] = rand() % ALEA;
    printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
    if(num == matriz[i][j]){
      cont++;
    }
  }
}
  printf("%d", cont);
}