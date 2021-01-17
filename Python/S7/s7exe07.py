defeito = int
op1 = 0
op2 = 0
op3 = 0
op4 = 0
soma = 0

while defeito != 0:
    print("================================================================================")
    print("\t\t\tControle de Reparos - Modulo Mouse")
    print("================================================================================")
    print("\t\t\t\t Escolha uma opção:")
    print("1 Necessita de esfera")
    print("2 Necessita de limpesa")
    print("3 Troca de cano ou conector")
    print("4 Quebrado ou inutilizado")
    defeito = int(input("\n Digite o codigo do defeito :"))
    if defeito == 1:
        op1 = op1 + 1
    elif defeito == 2:
        op2 = op2 + 1
    elif defeito == 3:
        op3 = op3 + 1
    elif defeito == 4:
        op4 = op4 + 1
    else:
        soma = soma - 1
else:
    print("\n")
    print("================================================================================")
    print("|\t\t  Relatorio da Situação dos Mouses Verificados  \t\t|")
    print("================================================================================")

soma = op1 + op2 + op3 + op4

if soma == 0:
    print("\n \t\t\tNão foram verificados nenhum mouse \n")
else:
    porc_op1 = (op1 * 100) / soma
    porc_op2 = (op2 * 100) / soma
    porc_op3 = (op3 * 100) / soma
    porc_op4 = (op4 * 100) / soma
    print(f"|Total de Mouses Verificados: {soma}\t\t\t\t\t\t\t|")
    print("================================================================================")
    print("|Situação\t\t\t\t\t|\tQtd\t|\t%\t|")
    print("================================================================================")
    print(f"|1 Necessita de esfera\t\t\t\t|\t{op1}\t|\t{porc_op1}\t|")
    print(f"|2 Necessita de limpesa\t\t\t\t|\t{op2}\t|\t{porc_op2}\t|")
    print(f"|3 Troca de cabo ou conector\t\t\t|\t{op3}\t|\t{porc_op3}\t|")
    print(f"|4 Quebrado ou inutilizado\t\t\t|\t{op4}\t|\t{porc_op4}\t|")
    print("================================================================================")