import java.util.Scanner;

public class Exe04 {

	public static void main(String[] args) {

		int maior = -999, menor = 999, n = 0, s = 0;
		float media;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Maior Menor e Media");
		System.out.println("=============================");

		for (int i = 0; i < 10; i++) {
			System.out.print("Digite um numero:");
			n = teclado.nextInt();
			if (n > maior) {
				maior = n;
			} else {
				menor = n;

			}
			s = s + n;
		}

		media = s / 10;

		System.out.println("=============================");
		System.out.println("Maior numero digitado: " + maior);
		System.out.println("Menor numero digitado: " + menor);
		System.out.println("M�dia dos numeros digitados: " + media);

		teclado.close();

	}

}
