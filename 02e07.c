#include <stdio.h>

int fibonacci(int n) {
  unsigned long t0 = 0, t1 = 1, t2;

  printf("\n  N                 SÉRIE\n--------------------------\n");

  for (int i = 1; i <= n; i++) {
    if(i==94)
      printf("------------------------- tipo 'unsigned long' insuficiente a partir daqui\n");

    printf("%3d  %20lu\n", i, t1);

    t2 = t0 + t1;
    t0 = t1;
    t1 = t2;
  }

  return 1;
}

int questao2(void) {
  printf("\n#### QUESTÃO 2 - Série de Fibonacci, 100 termos\n");

  fibonacci(100);

  return 0;
}

int questao7(void) {
  printf("\n#### QUESTÃO 7 - Série de Fibonacci, n termos \n");

  unsigned int n;
  printf("Informe quantos termos da Série de Fibonacci você quer obter:\n> ");
  scanf("%u", &n);

  fibonacci(n);

  return 0;
}

// OUTROS TESTES:

// int fibonacci(int n) {
//   unsigned long lista[n];
//   int i;
//
//   lista[0] = 0;
//   lista[1] = 1;
//
//   for (i=2; i<n; i++) {
//     lista[i] = lista[i-1] + lista[i-2];
//   }
//
//   for (i=0; i<n; i++) {
//     if(i==94)
//       printf("-------------------------- tipo 'unsigned long' insuficiente a partir daqui\n");
//
//     printf("%3d     %lu\n", i+1, lista[i]);
//   }
//
//   return 0;
// }

// unsigned long fibonacci(int n) {
//   if (n == 1)
//     return 0;
//   else if (n == 2)
//     return 1;
//   else
//     return fibonacci(n-1) + fibonacci(n-2);
// }