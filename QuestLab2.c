#include <stdio.h>
#define TAM 100


typedef struct{
char nomePeca[TAM];
int numeroPeca;
float preco;
int pedido;
} estoque;

int main() {
  estoque estoque;

  scanf("%s", estoque.nomePeca);
  scanf("%d", &estoque.numeroPeca);
  scanf("%f", &estoque.preco);
  scanf("%d", &estoque.pedido);

  printf("\n");

  printf("Nome da Peça: %s\n", estoque.nomePeca);
  printf("Número da Peça: %d\n", estoque.numeroPeca);
  printf("Preço: %.2f\n", estoque.preco);
  printf("Pedido: %d\n", estoque.pedido);

  return 0;
}