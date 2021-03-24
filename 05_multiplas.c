#include <stdio.h>

int modas(void) {
  int valor = -2, // armazena o último valor inserido
      contador[12] = {0,0,0,0,0,0,0,0,0,0,0,0}, // as posições de 0-10 contam os valores inseridos. A última posição (11) totaliza tudo.
      qtdModas = 0, // quantas modas existem na amostra informada
      listaModas[11] = {0,0,0,0,0,0,0,0,0,0,0}; // armazena as modas encontradas (pode haver mais de uma)

  // Solicita os valores de um por um, até que '-1' seja digitado
  do {
    printf("Informe um valor entre 0 e 10\nou '-1' para sair:\n> ");
    scanf("%d", &valor);

    if (valor >= 0 && valor <= 10) {
      contador[valor]++;
      contador[11]++;
    };
  } while(valor != -1);

  // quadro: cabeçalho
  printf("\nVALOR  OCORRÊNCIAS\n------------------\n");

  // calcula a(s) moda(s) e escreve os valores e ocorrências no quadro
  for(int i=0; i<=10; i++) {
    // quando há pelo menos uma moda e é encontrado outra quantidade de ocorrências igual, uma nova moda é guardada
    if (qtdModas > 0 && (contador[i] == contador[listaModas[0]])) {
      listaModas[qtdModas] = i;
      qtdModas++;
    }

    // quando é encontrada uma quantidade de ocorrências maior que a maior até então, uma nova moda é guardada na primeira posição da lista de modas e a quantidade de modas é 'reiniciada' para 1.
    if ( (i==0 && (contador[i] > 0)) ||
          contador[i] > contador[listaModas[0]] ) {
      listaModas[0] = i;
      qtdModas = 1;
    }

    // quadro: valores e suas ocorrências
    printf("%5d  %d\n", i, contador[i]);
  }

  // quadro: rodapé (totalização)
  printf("TOTAL  %d\n", contador[11]);

  // Apresentação final do resultado
  if (qtdModas == contador[11]) {
    printf("\nModa = { }\nNão há moda na amostra.\n");
  }
  else {
    printf("\nModa = { ");
    for (int i=0; i<qtdModas; i++) {
      if (i == qtdModas-1) {
        printf("%d", listaModas[i]);
      } else {
        printf("%d, ", listaModas[i]);
      }
    }
    printf(" }\nOcorrências: %d\n", contador[listaModas[0]]);
  }

  return 0;
}