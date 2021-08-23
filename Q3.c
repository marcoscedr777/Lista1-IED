#include <stdio.h>

int main() {
  int n = 0;

  printf("Digite um número: ");
  fflush(stdout);

  scanf(" %d", &n);

  printf("O sucessor de %d é %d e o seu antecessor é %d.\n", n, n + 1, n - 1);

  return 0;
}
