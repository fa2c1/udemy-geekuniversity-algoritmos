print("\n Identificação do Numero (Positivo/Negativo) \n")

numero = int(input("Digite um numero: "))

if numero >= 1:
    a = numero
    print(f"\n {a} é um numero Positivo")
elif numero < 0:
    b = numero
    print(f"\n {b} é um numero Negativo")
else:
    c = numero
    print(f"\n {c} é um numero Neutro")