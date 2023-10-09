#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

int main() {
  
  char palavra1[TAM];
  char palavra2[TAM];
  
  puts("Digite a primeira palavra");
    fgets(palavra1 , TAM , stdin);
  puts("Digite a segunda palavra");
    fgets(palavra2 , TAM , stdin);
  
  int Resultado = strcmp(palavra1, palavra2);

  puts("Com strcmp():");
  
  if(Resultado == 0)
    puts("As palavras são iguais\n");
  else 
    puts("Elas não são iguais\n");

  puts("Sem strcmp():");

  for(int i = 0; i < strlen(palavra1); i++){
    
  if (palavra1[i] != palavra2[i]) {
    puts("Elas não são iguais");
  return 0;
  }
  }
    puts("Elas são iguais");
  
  return 0;
}