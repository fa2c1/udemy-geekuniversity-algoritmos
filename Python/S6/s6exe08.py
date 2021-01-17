print("\n Situação do numero \n")

num = int(input("Digite um numero: "))

if num > 0:
    if num % 2 == 0:
        print(f"\n{num} é um numero Positivo Par")
    else:
        print(f"\n{num} é um numero Positivo Impar")
elif num < 0:
    if num % 2 == 0:
        print(f"\n{num} é um numero Negativo Par")
    else:
        print(f"\n{num} é um numero Negativo Impar")
else:
    print(f"\n{num} é neutro")