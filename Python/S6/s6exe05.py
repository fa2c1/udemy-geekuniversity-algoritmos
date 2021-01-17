print("\n Calculo de Multa \n")

e = 0
m = 0

p = float(input("Digite o peso: "))

if p > 50:
    e = p - 50
    m = e * 4

print(f"Peso:", p)
print(f"Peso em Ecesso:", e)
print(f"Valor da Multa:", m)