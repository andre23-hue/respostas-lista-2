#include <stdio.h>

void main (void) {
	printf("Digite um número para começarmos a soma (inteiro)\n");
	int n; int soma;
	soma = 0;
	scanf("%d", &n);
	while (n != 0) {
		soma = soma + n;
		printf("Digite outro número para continuarmos\nOu digite '0', para fechar\n");
		scanf("%d", &n);
	}
	printf("Sua soma foi de: %d\n", soma);
}