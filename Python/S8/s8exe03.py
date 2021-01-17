print("\n Exiba os valores na ordem contraria do que foi recebido \n")

vetor = []

for i in range(1, 11):
    n = int(input(f"Digite o {i}º numero: "))
    vetor.append(n)
vetor.reverse()
for i in vetor:
    print(f"O numero digitado foi", i)