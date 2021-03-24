#include <stdio.h>

int primo(unsigned int n) {
  int i, divisor = 1;
  
  for (i=2; i <= n/2; i++) {
    if ( n % i == 0 ) {
      divisor = i;
      break;
    }
  }

  if ( n >= 2 && divisor == 1 ) {
    printf("\nÉ número primo? SIM\n");
    return 1;
  }

  printf("\nÉ número primo? NÃO\nDivisor: %d\n", divisor);
  return 0;
}

int questao8(void) {
  printf("\n#### QUESTÃO 8 - Números primos\n");

  unsigned int p;
  printf("Informe um número natural:\n> ");
  scanf("%u", &p);

  primo(p);
  
  return 0;
}