print("\n Gerador de Tabuada \n")

t = int(input("Digite o numero que deseja saber a tabuada: "))

while t < 0 or t > 10:
    print("\nDigite um numero entre 0 e 10 \n")
    t = int(input("Digite o numero que deseja saber a tabuada: "))
else:
    print(f"\n Tabuada do numero", t)
    for i in range(1, 11):
        valor = t * i
        print(f"{i} x {t} = ", valor)