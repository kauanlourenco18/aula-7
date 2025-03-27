#include <stdio.h>

int main(void)
{
  char produto;

  printf("Digite o seu pedido[F para encerrar]:");
  produto = getchar();

  int quantidadeB = 0;
  int quantidadeH = 0;  
  int quantidadeS = 0;
  int quantidadeC = 0;
 
  float valor_total = 0;

  while (produto != 'F')
  {
    switch (produto)
    {
    case 'B':
      quantidadeB++;
      valor_total += 10.00;
      break;
    case 'H':
      quantidadeH++;
      valor_total += 15.00;
      break;
    case 'S':
      quantidadeS++;
      valor_total += 9.00;
      break;
      case 'C':
      quantidadeC++;
      valor_total += 30.0;
      break;
      
    }
  produto = getchar();
 
    printf("Digite o seu pedido.[F para encerrar]:");
    scanf("%c", &produto);
  }

  printf(" Batata: %d vendidas\n Hamburguer: %d vendidos\n Suco: %d vendidos\n Combo: %d vendidos\n " , quantidadeB, quantidadeH, quantidadeS, quantidadeC);
  
    int total_itens = quantidadeB + quantidadeH + quantidadeS + quantidadeC; 
  
  printf("Total: %d Itens\n", total_itens);
  
  printf(" Valor total: R$ %.2f", valor_total);
  return 0;
}