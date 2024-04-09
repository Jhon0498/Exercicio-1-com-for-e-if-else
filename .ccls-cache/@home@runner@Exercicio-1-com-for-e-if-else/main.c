// Escreva um algoritmo que leia 10 números inteiros, com valores positivos ou
// negativos, e ao final exiba os seguintes resultados:

// Quantidade de números digitados maiores ou igual a 0;
// Quantidade de números digitados menores que 0;
// Soma de todos os números digitados maiores que zero;
// Soma dos números digitados menores que zero.

#include <stdio.h>

int main(void) {

  int num = 0, nPositvos = 0, nNegativos = 0, somaPositivos = 0,
      somaNegativos = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) {
      nPositvos++;
      somaPositivos += num;

    } else if (num < 0) {
      nNegativos++;
      somaNegativos += num;
    }
  }

  printf("Numeros maiores ou igual a 0: %d\n", nPositvos);
  printf("Números digitados menores que 0: %d\n", nNegativos);
  printf("Soma dos numeros maiores que 0: %d\n", somaPositivos);
  printf("Soma dos numeros menores que 0: %d\n", somaNegativos);
  return 0;
}
