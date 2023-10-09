#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int comstrcat(){
  char palavra1[TAM];
  char palavra2[TAM];
  char pala[2 * TAM];
  int i, j;
  
  fgets(palavra1, TAM, stdin);
  fgets(palavra2, TAM, stdin);
 
  strcat(palavra1, palavra2);
  
  printf("%s", palavra1);
}


int main() {
  char palavra1[TAM];
  char palavra2[TAM];
  char pala[2*TAM];
  
  
  fgets(palavra1, TAM, stdin);
  fgets(palavra2, TAM, stdin);

  
int i, j;
  
  for (i = 0; i < strlen(palavra1); i++) {
    pala[i] = palavra1[i];
  }

  for (j = 0; palavra2[j] != '\0'; j++) {
    pala[i + j] = palavra2[j];
  }
  
   pala[i + j] = '\0';
  
  printf("%s", pala);
  return 0;
}