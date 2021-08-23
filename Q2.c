#include <stdio.h>

int main() {
  float salario_base = 0.00;

  printf("Digite o salário base: ");
  fflush(stdout);

  scanf("%f", &salario_base);

  printf("O salário a receber é: %f\n",
         salario_base - (10.0 / 100.0 * salario_base) + 50.00);

  return 0;
}
