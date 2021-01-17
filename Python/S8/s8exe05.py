print("\n Digite 10 vetores e os numeros maiores que 50 informa a posição deles dento do vetor \n")

vetor = []
tem_maior_50 = False

for i in range(0, 10):
    n = int(input(f"Informa o valor para o vetor na posição {i}: "))
    vetor.append(n)
for i in vetor:
    if i > 50:
        print(f"\n O numero {i} esta na posição", vetor.index(i))
        tem_maior_50 = True
if tem_maior_50 == False:
    print("\n Não tem numeros maiores que 50")