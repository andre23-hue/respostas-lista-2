#include <stdio.h>

struct time {
	char nome[21];
	int vitória;
	int empate;
	int derrota;
	int pontuação;
};
void main(void) {
	int maior_nome; int maior_ponto;
	int menor_nome; int menor_ponto;
	maior_ponto = 0;
	menor_ponto = 100;
	struct time times[20];
	for (int i = 0; i<sizeof(times)/sizeof(times[0]); i++){
		//nome
		printf("Digite o nome do time:\n");
		scanf(" %20[^\n]",times[i].nome);
		//vitória
		printf("Digite os valores de Vitória:\n");
		scanf("%d",&times[i].vitória);
		//empate
		printf("Digite os valores de Empate:\n");
		scanf("%d",&times[i].empate);
		//Derrota
		printf("Digite os valores de Derrota:\n");
		scanf("%d",&times[i].derrota);
		//calcula pontuação
		times[i].pontuação = times[i].vitória*3 + times[i].empate;
		printf("Seu nome é: %s \nSua pontação foi de: %d \n",times[i].nome, times[i].pontuação);
		if (times[i].pontuação > maior_ponto){
			maior_ponto = times[i].pontuação;
			maior_nome = i;
			//salvei com i para salvar o índice
		} 
		else if (times[i].pontuação < menor_ponto){
			menor_ponto = times[i].pontuação;
			menor_nome = i;
		}
	}
	printf("O time com maior pontuação foi o:%s \nE sua pontuação foi de:%d\n", times[maior_nome].nome,maior_ponto);
	printf("O time com menor pontuação foi o:%s \nE sua pontuação foi de:%d\n", times[menor_nome].nome,menor_ponto);
}
		