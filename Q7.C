#include <stdio.h>

int main() {
  int idade = 0, tempo_de_servico = 0;

  printf("Digite a idade: ");
  fflush(stdout);

  scanf(" %d", &idade);

  printf("Digite o tempo de serviço: ");
  fflush(stdout);

  scanf(" %d", &tempo_de_servico);

  if (idade >= 65 || tempo_de_servico >= 30 ||
      (idade >= 60 && tempo_de_servico >= 25)) {
    printf("O trabalhador pode se aposentar.\n");
  } else {
    printf("O trabalhador não pode se aposentar.\n");
  }

  return 0;
}
