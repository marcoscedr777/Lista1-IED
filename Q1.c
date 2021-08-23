#include <stdio.h>

int main() {
  float n1, n2, n3, media;

  printf("Digite três notas:\n");

  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);

  media = (n1 + n2 + n3) / 3;

  printf("A média aritimética das notas é %f.\n", media);

  return 0;
}
