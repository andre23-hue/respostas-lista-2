#include <stdio.h>

int main (void) {
	float d; float r;
	printf("digite o valor do celular em dólares:");
	scanf("%f", &d);
	r = d*3.17;
	if (r >= 1000) {
		printf("O valor em dólares é: %f, e em Reais é:%f\n",d,r);
		printf("MAU NEGÓCIO\n");
	} else {
		printf("O valor em dólares é: %f, e em Reais é:%f\n",d,r);
		printf("BOM NEGÓCIO\n");
	}
}
