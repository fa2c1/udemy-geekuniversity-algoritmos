print("\t\t\tSecretaria do Meio Hambiente")
print("\n Controle de indice de Poluição \n")

ip = float(input("Indice de Poluição: "))

if ip >= 0.3 and ip < 0.4:
    print("\n Atenção Grupo 1 suspender atividades")
elif ip >= 0.4 and ip < 0.5:
    print("\n Atenção Grupo 1 e 2 suspender atividades")
elif ip >= 0.5:
    print("\n Atenção todos os Grupos suspender atividades")
else:
    print("\n Nenhum Grupo com atividade suspensa")