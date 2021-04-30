import java.util.Scanner;

public class Exe03 {

	public static void main(String[] args) {

		int n, p = 0, i = 0;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Digite um numero:");
		n = teclado.nextInt();

		if (n % 2 == 0) {
			p = n;
		} else {
			i = n;
		}

		System.out.println("Numero Par: " + p);
		System.out.println("Numero Impar: " + i);

		teclado.close();

	}

}
