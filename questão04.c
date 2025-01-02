#include <stdio.h>

int main() {
  int opcao, numero1, numero2, resultado;
  
  printf("Digite a opção desejada:\n1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\n");
  scanf("%d", &opcao);
  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);
  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  switch (opcao) {
    case 1:
    resultado = numero1 + numero2;
    printf("O resultado da soma é: %d\n", resultado);
    break;
    case 2:
    resultado = numero1 - numero2;
    printf("O resultado da subtração é: %d\n", resultado);
    break;
    case 3:
    resultado = numero1 * numero2;
    printf("O resultado da multiplicação é: %d\n", resultado);
    break;  
    case 4:
    if(numero2 == 0) {
      printf("Não é possível dividir por zero\n");
      break;
    } else {
    resultado = numero1 / numero2;
    printf("O resultado da divisão é: %d\n", resultado);
    break;
    }
    default:
    printf("Opção inválida\n");
    }
  return 0;
}