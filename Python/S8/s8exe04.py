print("\n Faça a soma de 20 elemento digitado no Vetor \n")

vetor = []

for i in range(1, 21):
    n = int(input(f"Digite o {i}/20 para o vetor: "))
    vetor.append(n)

print(f"A soma dos 20 elemento dos vetores é:", sum(vetor))    