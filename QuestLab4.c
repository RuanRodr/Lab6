#include <stdio.h>
#define TAM 3

typedef struct{
float nota1;
float nota2;
float media;
} aluno;

void media(float nota1, float nota2){
  float media = (nota1 + nota2) / 2;
  printf("A media é: %.2f\n", media);
}

int main() {

  float x, y;
  aluno Aluno[TAM];

  for(int i = 0; i < TAM; i++){
  printf("Digite o valor da primeira nota do aluno[%d]:", i);
  scanf("%f", &x);
  printf("Digite o valor da segunda nota do aluno[%d]:", i);
  scanf("%f", &y);

  Aluno[i].nota1 = x;
  Aluno[i].nota2 = y;
  }

 for(int i = 0 ; i < TAM; i++){
   media(Aluno[i].nota1, Aluno[i].nota2);
 }

  return 0;
}