print("\n Verificar o maior numero digitado \n")

maior = 0

numero = int(input("Digite um numero: "))

while numero != 0:
    if numero > maior:
        maior = numero
    numero = int(input("Digite um numero: "))
print(f"\n Maior numero digitado foi:", maior)    