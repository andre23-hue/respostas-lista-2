#include <stdio.h>

void main (void) {
	int n; int soma;
	printf("Digite um número para fazermos o somatório dos quadrados:");
	scanf("%d",&n);
	while (n != 0) {
		soma = soma + (n*n);
		n--;
	}
	printf("A soma dos quadrados é de: %d\n", soma);
}