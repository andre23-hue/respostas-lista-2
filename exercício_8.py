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
	

