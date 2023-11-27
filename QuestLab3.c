#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct InfoVetor {
  int *ponteiroVetor;
  int quantidadeElementos;
  float media;
};


void preencherVetor(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 100; 
  }
}


float calcularMedia(int *vetor, int tamanho) {
  float soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }
  return soma / tamanho;
}

int main() {
   
  srand(time(NULL));

   
  struct InfoVetor info;

   
  printf("Digite a quantidade de elementos no vetor: ");
  scanf("%d", &info.quantidadeElementos);

   
  info.ponteiroVetor = (int *)malloc(info.quantidadeElementos * sizeof(int));

   
  if (info.ponteiroVetor == NULL) {
    printf("Erro ao alocar memória.\n");
    return 1;
  }
  
  preencherVetor(info.ponteiroVetor, info.quantidadeElementos);

  info.media = calcularMedia(info.ponteiroVetor, info.quantidadeElementos);

  printf("\nInformacoes do vetor:\n");
  printf("Quantidade de elementos: %d\n", info.quantidadeElementos);
  printf("Media do vetor: %.2f\n", info.media);

  free(info.ponteiroVetor);

  return 0;
}