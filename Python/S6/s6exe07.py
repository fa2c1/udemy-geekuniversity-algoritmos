print("\n Calcule o quadrado dos numeros \n")

n1 = int(input("Digite o numero 1: "))
n2 = int(input("Digite o numero 2: "))
n3 = int(input("Digite o numero 3: "))
n4 = int(input("Digite o numero 4: "))

q1 = n1 ** 2
q2 = n2 ** 2
q3 = n3 ** 2
q4 = n4 ** 2

if q3 >= 1000:
    print("\n Resultado:")
    print(f"O Quadrado do Numero 3 é maior que 1000:", q3)
else:
    print("\n Resultado:")
    print(f"O Quadrado do Numero 1 é:", q1)
    print(f"O Quadrado do Numero 2 é:", q2)
    print(f"O Quadrado do Numero 3 é:", q3)
    print(f"O Quadrado do Numero 4 é:", q4)