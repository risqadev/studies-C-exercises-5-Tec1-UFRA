#include <stdio.h>

float potencia(float base, int expoente) {
  float resultado = 1;

  if (base == 0 && expoente == 0) {
    printf("Resultado indeterminado\n");
    return base/base;
  }
  else if (expoente > 0)
    for (int i = 0; i < expoente; i++) {
      resultado *= base;
    }
  else
    for (int i = 0; i > expoente; i--) {
      resultado /= base;
    }

  // printf("Resultado: %f\n", resultado);

  return resultado;
}

int questao6() {
  printf("\n#### QUESTÃO 6 - Potenciação\n");

  float base, resultado; int expoente;

  printf("Informe um valor (real) para a base da potenciação:\n> ");
  scanf("%f", &base);

  printf("Informe um valor (inteiro) para o expoente da potenciação:\n> ");
  scanf("%d", &expoente);
  
  resultado = potencia(base, expoente);

  printf("\nResultado: %f\n", resultado);

  return 0;
}