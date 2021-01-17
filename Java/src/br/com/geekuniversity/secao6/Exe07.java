package br.com.geekuniversity.secao6;

import java.util.Scanner;

public class Exe07 {

	public static void main(String[] args) {
		
		int n1, n2, n3, n4, qn1, qn2, qn3, qn4;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Calculando o numero ao quadrado");
		System.out.println("=============================");
		System.out.print("Digite o primeiro numero: ");
		n1 = teclado.nextInt();
		System.out.print("Digite o segundo numero: ");
		n2 = teclado.nextInt();
		System.out.print("Digite o terceiro numero: ");
		n3 = teclado.nextInt();
		System.out.print("Digite o quarto numero: ");
		n4 = teclado.nextInt();
		System.out.println("=============================");
		
		qn1 = n1 * n1;
		qn2 = n2 * n2;
		qn3 = n3 * n3;
		qn4 = n4 * n4;
		
		if (qn3 > 1000) {
			System.out.printf("O quadrado de %d é %d", n3, qn3);
		} else {
			System.out.printf("\n O quadrado de %d é %d", n1, qn1);
			System.out.printf("\n O quadrado de %d é %d", n2, qn2);
			System.out.printf("\n O quadrado de %d é %d", n3, qn3);
			System.out.printf("\n O quadrado de %d é %d", n4, qn4);
		}
		
		teclado.close();

	}

}
