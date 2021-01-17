print("\n Campeonato de Natação")
print("\n Classificação de Categorias")

idade = int(input("\n Digite a idade: "))

if idade >= 5 and idade <= 7:
    print("Categoria Infantil A\n")
elif idade >= 8 and idade <= 11:
    print("Categoria Infantil B\n")
elif idade >= 12 and idade <= 13:
    print("Categoria Juvenil A\n")
elif idade >= 14 and idade <= 17:
    print("Categoria Juvenil B\n")
elif idade >= 18:
    print("Categoria Adulta\n")
else:
    print("Desculpa mais o candidato não tem idade suficiente para participar do campeonato\n ")