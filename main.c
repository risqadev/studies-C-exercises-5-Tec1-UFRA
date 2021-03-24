#include <stdio.h>
#include "functions.h"

int main(void) {
  char select = 'n';

  do {
    printf("\nInforme o programa (nº questão) a ser executado (1-8):\n1 - Números divisíveis por 4 menores que 200\n2 - Série de Fibonacci, 100 termos\n3 - Somatório e média\n4 - Contagem de idades\n5 - Moda (estatística)\n6 - Potenciação\n7 - Série de Fibonacci, N termos\n8 - Números primos\n0 - Sair:\n> ");
    scanf(" %c", &select);

    switch (select) {
      case '0' :
        break;
      case '1' :
        printf("\n#### QUESTÃO 1 - Números divisíveis por 4 menores que 200\n");
        divisiveis_por_ate(4,200);
        break;
      case '2' :
        questao2();
        break;
      case '3' :
        printf("\n#### QUESTÃO 3 - Somatório e média\n");
        registrar();
        break;
      case '4' :
        printf("\n#### QUESTÃO 4 - Idades\n");
        idades();
        break;
      case '5' :
        printf("\n#### QUESTÃO 5 - Moda (estatística)\n");
        // moda();
        modas();
        break;
      case '6' :
        questao6();      
        break;
      case '7' :
        questao7();
        break;
      case '8' :
        questao8();      
        break;
    }
  } while (select != '0');

  printf("Saindo.\n");

  return 0;
}