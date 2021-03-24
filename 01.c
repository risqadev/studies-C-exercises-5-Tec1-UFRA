#include <stdio.h>

int divisiveis_por_ate( int divisor, int max ) {
  for(int i = divisor ; i <= max; i++) {
    if (i % divisor == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}