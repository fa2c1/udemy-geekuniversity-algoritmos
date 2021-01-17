print("\n Peso Ideal \n")

peso_ideal = 0

altura = float(input("Digite a Altua: "))
sexo = input("Digite o Sexo (M ou F): ")

if sexo.lower() == 'm':
    peso_ideal = (72.7 * altura) - 58
    print(f"O seu peso ideal é", peso_ideal)
elif sexo.lower() == 'f':
    peso_ideal = (62.1 * altura) - 44.7
    print(f"O seu peso ideal é", peso_ideal)
else:
    print("\n Digite uma opção valida!!!")