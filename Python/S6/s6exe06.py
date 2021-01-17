print("\n Calculo de Salario \n")

hn = 0 # Horas Normais
he = 0 # Horas Extras
s = 0 # Vr salario
e = 0 # Vr hora extras
sr = 0 #Vr Salario a receber

ht = float(input("Qtd de Horas trabalhadas: "))

if ht > 240:
    he = ht - 240
    hn = ht - he
    s = hn * 10
    e = he * 20
    sr = s + e
else:
    sr = ht * 10

print(f"Total de Horas Extras:", he)
print(f"Valor das Horas Extras:", e)
print(f"\n Salario a Receber:", sr)