#include <stdio.h>

void main (void) {
	printf("Digite a velocidade do aluno em milhas por hora:");
	float k; float m;
	scanf("%f",&m);
	k = m*1.6;
	if (k<80) {
		printf("A velocidade do aluno em quilometros por hora é de:%f \nSendo assim, ACELERE", k);
	} else if (80<=k && k<=100) {
		printf("A velocidade do aluno em quilometros por hora é de:%f \nSendo assim, MANTENHA", k);
	} else {
		printf("A velocidade do aluno em quilometros por hora é de:%f \nSendo assim, DESACELERE", k);
	}
}
