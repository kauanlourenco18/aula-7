#include <stdio.h>

int main(void)
{
  int num, soma = 0;

  printf("DIGITE UM NÚMERO: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i += 2)
  {
    soma += i;
  }
  printf("a soma dos impares de 1 até %d é: %d\n", num, soma);
  return 0;
}