import java.util.Scanner;

public class Exe08 {

	public static void main(String[] args) {

		int n;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Tipo de numero");
		System.out.println("=============================");
		System.out.print("Digite um numero: ");
		n = teclado.nextInt();
		System.out.println("=============================");

		if (n % 2 == 0) {
			if (n >= 0) {
				System.out.printf("%d e um numero Par Positivo", n);
			} else {
				System.out.printf("%d e um numero Par Negativo", n);
			}
		} else {
			if (n >= 0) {
				System.out.printf("%d e um numero Impar Positivo", n);
			} else {
				System.out.printf("%d e um numero Impar Negativo", n);
			}
		}

		teclado.close();

	}

}
