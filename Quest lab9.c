#include <stdio.h>
#define TAM 3

int main() {
  
int matriz[TAM][TAM];
  
printf("Digite os elementos da matriz\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Elemento [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
  }
  
printf("Elementos da diagonal principal:\n");
  for (int i = 0; i < 3; i++) {
    printf("%d ", matriz[i][i]);
  }
printf("\n");

return 0;
}