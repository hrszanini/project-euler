/*
 * The sum of the squares of the first ten natural numbers is 1² + 2² + ... +
 * 10² = 385. The square of the sum of the first ten natural numbers is (1 + 2 +
 * ... + 10)² = 55² = 3025 Hence the difference between the sum of the squares
 * of the first ten natural numbers and the square of the sum is 3025 - 385 =
 * 2640. Find the difference between the sum of the squares of the first one
 * hundred natural numbers and the square of the sum.
 */

/*
 * A soma dos quadrados dos dez primeiros números naturais é 1² + 2² + ... + 10²
 * = 385. O quadrado da soma dos dez primeiros números naturais é (1 + 2 + ... +
 * 10)² = 55² = 3025 Portanto a diferença entre a soma dos quadrados dos dez
 * primeiros números naturais e o quadrado da soma é 3025 - 385 = 2640. Encontre
 * a diferença entre a soma dos quadrados dos cem primeiros números naturais e o
 * quadrado da soma.
 */

#include <stdio.h>
#define FINAL 100

int main() {

  long int i, soma = 0, somaQuadrado = 0, quadradoSoma = 0;

  for (i = 1; i <= FINAL; i++) {
    somaQuadrado += i * i;
    soma += i;
  }

  quadradoSoma = soma * soma;

  printf("%ld\n", quadradoSoma - somaQuadrado);

  return 0;
}
