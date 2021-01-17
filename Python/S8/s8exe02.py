print("\n Leia 2 Vetores de 10 posições e faça a soma dos valores digitados \n")

vetor1 = []
vetor2 = []
soma = []

for i in range(1, 11):
    num1 = int(input("Digite um numero pro vetor 1: "))
    vetor1.append(num1)
    num2 = int(input("Digite um numero pro vetor 2: "))
    vetor2.append(num2)
    soma.append(num1 + num2)
for i in soma:
    print(f"A soma dos vetores é", i)