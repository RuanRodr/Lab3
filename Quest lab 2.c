#include <stdio.h>
#include <string.h>
#define TAM 10

int main() {
  char nome[TAM];
  char letra;
  int a = 0;

  puts("Digite a string");
  fgets(nome, TAM, stdin);

  puts("Digite a letra");
  scanf("%c", &letra);
  
for(int i = 0; i < TAM; i++){
  
  if(nome[i] == letra){
    a = 1;
    break;
  }
}
  
  if(a == 1){
    puts("A letra existe na palavra");
  } else{
    puts("A letra não existe na palavra");
  }
  
  return 0;
}