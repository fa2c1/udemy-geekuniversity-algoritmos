import java.util.Scanner;

public class Exe06 {

	public static void main(String[] args) {

		float vr_horas, hr_trabalhada, salario;
		Scanner teclado = new Scanner(System.in);

		System.out.println("Valor da Hora: ");
		vr_horas = teclado.nextFloat();

		System.out.println("Qtd Horas: ");
		hr_trabalhada = teclado.nextFloat();

		salario = vr_horas * hr_trabalhada;

		System.out.println("Saldo do salario: " + salario);

		teclado.close();

	}

}
