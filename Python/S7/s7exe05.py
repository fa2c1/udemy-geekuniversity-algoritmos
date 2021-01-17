print("\n Exemplo de login \n")

nome = input("Usuario: ")
senha = input("Senha: ")

while nome == senha:
    print("\nO nome de usuario não pode ser igual a senha")
    print("\nExemplo de login \n")
    nome = input("Usuario: ")
    senha = input("Senha: ")