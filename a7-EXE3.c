#include <stdio.h>

int main(void)
{
  char ml;

   printf("Digite o modo de levagem [P para encerrar]:");
  ml = getchar();

  int quantidadeS = 0;
  int quantidadeE = 0;
  int quantidadeL = 0;

  while (ml != 'P')
  {
    switch (ml)
    {
    case 'S':
      quantidadeS++;
      break;

    case 'E':
      quantidadeS++;
      quantidadeE++;
      break;

    case 'L':
      quantidadeS++;
      quantidadeE++;
      quantidadeL++;
      break;
    }

    printf("Digite o o modo de lavagem [P para encerrar]:");
    scanf("%c", &ml);
    ml = getchar();
  }

  printf("SECOU: %d ENXUGOU: %d LAVOU: %d", quantidadeS, quantidadeE, quantidadeL);
  return 0;
}