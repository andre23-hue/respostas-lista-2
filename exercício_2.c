#include <stdio.h>

void main (void){
	printf("digite um número:");
	int d; int f;
	scanf ("%d", &d);
	printf("agora, digite outro número:");
	scanf("%d", &f);
	if (d < f) {
		printf("%d é maior que %d", f,d);
	} else {
		printf("%d é maior que %d",d,f);
	}
}
