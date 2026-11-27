# Respostas 

# Exercício 01
```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```
---
# Exercício 02
### Enunciado:

Faça um programa que leia dois valores e exiba o maior valor lido.

### Código:
```c
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
```
---
# Exercício 03
### Enunciado:

Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.

### Código:
```c
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
```
---
# Exercício 04
### Enunciado:

Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.


### Código:
```c
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
```
---
# Exercício 05
### Enunciado:

Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir a soma de todos os números lidos.

### Código:
```c
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
```
---
# Exercício 06
### Enunciado:

Faça um programa que leia um número N e calcule o somatório de i²

### Código:
```c
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
```
---
# Exercício 07
### Enunciado:

O Campeonato Brasileiro está na reta final com 20 times na disputa.

Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome (ou um identificador numérico), número de vitórias, número de empates e número de derrotas.

Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.

### Código:
```c
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
//salvei com i para salvar o índice.
		} 
		else if (times[i].pontuação < menor_ponto){
			menor_ponto = times[i].pontuação;
			menor_nome = i;
		}
	}
	printf("O time com maior pontuação foi o:%s \nE sua pontuação foi de:%d\n", times[maior_nome].nome,maior_ponto);
	printf("O time com menor pontuação foi o:%s \nE sua pontuação foi de:%d\n", times[menor_nome].nome,menor_ponto);
}
		
```
---
# Exercício 08
### Enunciado:

Ler dois números n1 e n2
Exibir todos os números entre n1 e n2
Fazer em Python e em C

## Códigos:

### Código Em Python:
```py
#Pedido para o usuário escolher os números.
n1 = int(input("Digite o primeiro número (inteiro):\n"))
n2 = int(input("Digite o segundo número (inteiro):\n"))
int:tmp = 0
int:maior = 0

#verificar qual é o maior para não fazer o while errado.
if n1 >= n2:
	maior = n1
	tmp = n2

else:
	maior = n2
	tmp = n1
#deixar o usuário ciente do que está sendo mostrado.
print(f"Os números entre {tmp} e {maior} são/é:")
#Casos especiais-----
	
if tmp == maior:
	print("Os dois números são iguais, logo, não há número entre eles!")
	exit()	

if maior == tmp + 1:
	print("Um número é imediatamente sequência do outro, logo, não há numero inteiro entre eles!")
	exit()
#Caso geral----------
while tmp+1 != maior:
	tmp = tmp + 1
	print(tmp)
	


```
### Código Em C:
```c
#include <stdio.h>
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
```

---
