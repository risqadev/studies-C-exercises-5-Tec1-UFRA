#include <stdio.h>

int moda(void) {
  int valor = -2,
      moda = 0,
      contador[11] = {0,0,0,0,0,0,0,0,0,0,0};

  do {
    printf("Informe um valor entre 0 e 10\nou '-1' para sair:\n> ");
    scanf("%d", &valor);

    if (valor >= 0 && valor <= 10) contador[valor]++;
  } while(valor != -1);

  printf("\nVALOR  OCORRÊNCIAS\n");

  for(int i=0; i<=10; i++) {
    if (contador[i] > contador[moda]) moda = i;
    printf("%5d  %d\n", i, contador[i]);
  }

  printf("\nModa: %d\nOcorrências: %d\n", moda, contador[moda]);

  return 0;
}