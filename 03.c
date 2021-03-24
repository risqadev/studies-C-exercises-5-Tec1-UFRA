#include <stdio.h>

int registrar() {
  float valor = 0, soma = 0, media = 0;
  int i = -1;

  while (valor >= 0) {
    soma += valor;
    i++;

    printf("Informe um valor maior ou igual a 0 para registrar\nou um valor negativo para encerrar.\n> ");
    scanf("%f", &valor);
  }

  media = soma/i;

  printf("\nSomatório: %.2f\nMédia: %.2f\nQuantidade: %d\n", soma, media, i);
  return 0;
}

// usando do ... while

  // int i = 0;

  // do {
  //   printf("Informe um valor maior ou igual a 0 para registrar\nou um valor negativo para encerrar.\n");
  //   scanf("%f", &valor);

  //   if (valor >= 0) {
  //     soma += valor;
  //     i++;
  //   }
  // } while (valor >= 0);