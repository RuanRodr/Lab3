#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {
  char c[TAM];
  int a = 0;

  puts("Digite uma palavra");
  fgets(c, TAM, stdin);

 while (c[a] != '\n') {
   a++;
 }
  printf("A quantidade de letras é %d\n", a);
  return 0;
}