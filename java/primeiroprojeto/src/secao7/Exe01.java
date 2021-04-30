import java.util.Scanner;

public class Exe01 {

	public static void main(String[] args) {

		int n, maior = 0;
		Scanner teclado = new Scanner(System.in);

		System.out.print("Digite um numero:");
		n = teclado.nextInt();

		while (n != 0) {
			if (n > maior) {
				maior = n;
			}
			System.out.print("Digite um numero: ");
			n = teclado.nextInt();
		}

		System.out.println("Maior valor digitado: " + maior);

		teclado.close();

	}

}
