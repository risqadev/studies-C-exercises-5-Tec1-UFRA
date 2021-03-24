#include <stdio.h>

int idades(void) {
  int idade = 0, contaIdadeMenor21 = 0, contaIdadeMaior50 = 0;

  do {
    printf("Informe a idade\nou '-99' para sair:\n> ");
    scanf("%d", &idade);

    if (idade >= 0 && idade < 21) contaIdadeMenor21++;
    else if (idade > 50) contaIdadeMaior50++;

  } while (idade != -99);

  printf("\nPessoas com menos de 21 anos: %d\nPessoas com mais de 50 anos: %d\n", contaIdadeMenor21, contaIdadeMaior50);

  return 0;
}