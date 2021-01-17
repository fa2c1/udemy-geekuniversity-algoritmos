package br.com.geekuniversity.secao2;

import java.util.Scanner;

public class Exe02 {

	public static void main(String[] args) {

		int num1, num2, soma, mult;		
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Digite o numero 1: ");
		num1 = teclado.nextInt();
		System.out.println("Digite o numero 2: ");
		num2 = teclado.nextInt();
		
		soma = num1 + num2;
		mult = soma * num1;
		
		System.out.println("O resultado é " + mult);
		
		teclado.close();

	}

}
