#include <stdio.h>

struct Professor {
  char nome[50];
  int idade;
  char departamento[50];
};

struct Disciplina {
  char nomeDisciplina[50];
  int codigoDisciplina;
  struct Professor professorResponsavel; 
};

int main() {
   
  struct Disciplina disciplina;

    
  printf("Digite o nome da disciplina: ");
  scanf("%s", disciplina.nomeDisciplina);

  printf("Digite o código da disciplina: ");
  scanf("%d", &disciplina.codigoDisciplina);
   
  printf("Digite o nome do professor responsável: ");
  scanf("%s", disciplina.professorResponsavel.nome);

  printf("Digite a idade do professor responsável: ");
  scanf("%d", &disciplina.professorResponsavel.idade);

  printf("Digite o departamento do professor responsável: ");
  scanf("%s", disciplina.professorResponsavel.departamento);

    
  printf("\nInformacoes da Disciplina:\n");
  printf("Nome da Disciplina: %s\n", disciplina.nomeDisciplina);
  printf("Código da Disciplina: %d\n", disciplina.codigoDisciplina);
  printf("Professor Responsável:\n");
  printf("  Nome: %s\n", disciplina.professorResponsavel.nome);
  printf("  Idade: %d\n", disciplina.professorResponsavel.idade);
  printf("  Departamento: %s\n", disciplina.professorResponsavel.departamento);

  return 0;
}