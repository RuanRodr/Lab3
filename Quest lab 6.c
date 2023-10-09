#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {
  char palavra[TAM];

  fgets(palavra, TAM, stdin);

   if (palavra[strlen(palavra) - 1] == '\n') {
    palavra[strlen(palavra) - 1] = '\0';
  }

  int pala = strlen(palavra);

  for(int i = pala - 1; i >= 0; i--){
    printf("%c", palavra[i]);
  }
  return 0;
}