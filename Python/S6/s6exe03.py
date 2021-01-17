print("\n Identificação do numero (Par/Impar) \n")

p = 0
i = 0

numero = int(input("Digite um numero: "))

if numero % 2 == 0:
    p = numero
else:
    i = numero

print(f"Numero Par digitado:", p)
print(f"Numero Impar digitado:", i)