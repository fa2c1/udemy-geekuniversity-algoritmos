import java.util.Scanner;

public class Exe10 {

	public static void main(String[] args) {

		int idade;
		Scanner teclado = new Scanner(System.in);

		System.out.println("=============================");
		System.out.println("Tabela de Categorias");
		System.out.println("=============================");

		System.out.print("Idade: ");
		idade = teclado.nextInt();

		if (idade >= 5 && idade <= 7) {
			System.out.println("Categoria Infantil A");
		} else if (idade >= 8 && idade <= 11) {
			System.out.println("Categoria Infantil B");
		} else if (idade >= 12 && idade <= 13) {
			System.out.println("Categoria Juvenil A");
		} else if (idade >= 14 && idade <= 17) {
			System.out.println("Categoria Juvenil B");
		} else if (idade >= 18) {
			System.out.println("Categoria Adulta");
		} else {
			System.out.println("Idade n�o permitida para participar");
		}

		teclado.close();

	}

}
