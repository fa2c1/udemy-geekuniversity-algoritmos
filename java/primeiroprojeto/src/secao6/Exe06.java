import java.util.Scanner;

public class Exe06 {

	public static void main(String[] args) {

		float ht = 0, he = 0, sr = 0, vhe = 0, s = 0;
		int c;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Calculo de horas Extras");
		System.out.println("=============================");
		System.out.print("Digite o codigo: ");
		c = teclado.nextInt();
		System.out.print("Qtd Horas: ");
		ht = teclado.nextFloat();
		System.out.println("=============================");

		if (ht > 240) {
			he = ht - 240;
			ht = ht - he;
			vhe = he * 20;
			s = ht * 10;
			sr = vhe + s;
		} else {
			sr = ht * 10;
		}

		System.out.println("Codigo Funcionario: " + c);
		System.out.println("Horas trabalhadas: " + ht);
		System.out.println("Horas Extras: " + he);
		System.out.println("Valor das Hpra Extra: " + vhe);
		System.out.println("Total a Receber: " + sr);

		teclado.close();

	}

}
