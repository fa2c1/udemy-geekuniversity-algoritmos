print("\n Encontre o resultado entre 10 numeros digitados \n")

maior = -999
menor = 999
soma = 0

for i in range(1, 11):
    valor = int(input("Digite um numero: "))
    if valor > 0:
        if valor > maior:
            maior = valor
        if valor < menor:
            menor = valor
        soma = soma + valor
    else:
        valor = int(input("Digite um numero: "))

media = soma / 10

print(f"O maior numero digitado é:", maior)
print(f"O menor numero digitado é:", menor)
print(f"A média dos numeros digitados é:", media)