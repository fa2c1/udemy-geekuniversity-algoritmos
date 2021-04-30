import java.util.Scanner;

public class Exe05 {

	public static void main(String[] args) {

		String nome, senha;
		Scanner teclado = new Scanner(System.in);

		System.out.print("Usuario: ");
		nome = teclado.next();

		System.out.print("Senha: ");
		senha = teclado.next();

		while (nome.equals(senha)) {
			System.out.println("Nome de usuario neo pode ser igual a senha!");
			System.out.print("Usuario: ");
			nome = teclado.next();
			System.out.print("Senha: ");
			senha = teclado.next();
		}

		teclado.close();

	}

}
