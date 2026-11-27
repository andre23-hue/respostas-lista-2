#include <stdio.h>

int main () {
	int n1; int n2; int maior;int tmp;
//Pedido para o usuário escolher os números.
	printf("Digite o primeiro número (inteiro):\n");
	scanf("%d", &n1);
	printf("Digite o segundo número (inteiro):\n");
	scanf("%d", &n2);


//verificar qual é o maior para não fazer o while errado.
	if (n1 >= n2){
		maior = n1;
		tmp = n2;
	}
	else {
		maior = n2;
		tmp = n1;
	}
//deixar o usuário ciente do que está sendo mostrado.
	printf("Os números entre %d e %d são/é:\n",tmp,maior);
//Casos especiais-----
	
	
	if (tmp == maior){
		printf("Os dois números são iguais, logo, não há número entre eles!\n");
		return 0;
	}
	if (maior == tmp + 1) {
		printf("Um número é imediatamente sequência do outro, logo, não há numero inteiro entre eles!\n");
		return 0;
	}
//Caso geral----------
	while (tmp+1 != maior) {
		tmp = tmp + 1;
		printf("%d\n",tmp);
	}
	return 0;
}