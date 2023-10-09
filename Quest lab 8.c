#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int compare(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

void bubbleSort(int num[], int n) {
  int temp;
  int swapped;
  
  do {
    swapped = 0;
    for (int i = 0; i < n - 1; i++) {
      if (num[i] > num[i + 1]) {
        temp = num[i];
        num[i] = num[i + 1];
        num[i + 1] = temp;
        swapped = 1;
      }
    }
  } while (swapped);

  //bubbleSort(num, TAM);
}

int main() {
  int num[TAM];
  int max, min;

  puts("Escreva o valor mínimo do intervalo");
    scanf("%d", &min);
  puts("Escreva o valor máximo do intervalo");
    scanf("%d", &max);
  

  for(int i = 0; i < TAM; i++){
    num[i] =  rand() % (max - min + 1) + min;;
  }
  
  srand(time(NULL));

  
  //bubbleSort(num, TAM);
  
  qsort(num, TAM, sizeof(int), compare);

  
  for (int k = 0; k < TAM; k++) {
    printf("%d\n ", num[k]);
  }
  return 0;
}