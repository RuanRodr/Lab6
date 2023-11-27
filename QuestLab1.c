#include <stdio.h>

typedef struct{
float nota1;
float nota2;
float media;
} aluno;

int main() {
  
  float x, y;

  puts("Digite o valor da primeira nota:");
  scanf("%f", &x);
  puts("Digite o valor da segunda nota:");
  scanf("%f", &y);
  
  aluno Aluno1;

  Aluno1.nota1 = x;
  Aluno1.nota2 = y;

  Aluno1.media = (x + y) / 2;

  printf("A média é: %.2f", Aluno1.media);
    
  return 0;
}