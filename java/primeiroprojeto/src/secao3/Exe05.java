import java.util.Scanner;

public class Exe05 {

	public static void main(String[] args) {

		float metros, centimetros;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Digite o valor em Metros: ");
		metros = teclado.nextFloat();

		centimetros = metros * 100;

		System.out.println(metros + " em centimetros e " + centimetros);

		teclado.close();

	}

}
