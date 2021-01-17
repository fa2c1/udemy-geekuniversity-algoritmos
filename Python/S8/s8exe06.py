print("\n Digite 5 numeros escolha um codigo e veja o que acontece \n")

vetor = []

codigo = int(input("Infomre Codigo 1 ou 2: "))

if codigo != 0:
    for i in range(0, 5):
        n = float(input("informe um numero real: "))
        vetor.append(n)
    if codigo == 1:
        for i in vetor:
            print(i)
    if codigo == 2:
        vetor.reverse()
        for i in vetor:
            print(i)