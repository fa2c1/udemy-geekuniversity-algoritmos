print("\n Mostrar somente numeros pares maiores que 0 até 5\n")

vetor = []
pares = []

for i in range(1, 6):
    vetor.append(i)
    if i % 2 == 0:
        pares.append(i)
for p in pares:
    print(f"Numero Par:", p)