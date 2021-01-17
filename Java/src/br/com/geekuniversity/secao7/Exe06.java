package br.com.geekuniversity.secao7;

import java.util.Scanner;

public class Exe06 {

	public static void main(String[] args) {
		
		int n, t;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("=============================");
		System.out.println("Gerador de Tabuadas");
		System.out.println("=============================");
		System.out.print("Digite um numero entre 0 e 10 para obter a tabuada: ");
		n = teclado.nextInt();
		
		while (n < 0 || n > 10) {
			System.out.print("Digite um numero entre 0 e 10 para obter a tabuada: ");
			n = teclado.nextInt();
		}
		
		System.out.println("=============================");
		System.out.println("Tabuada do Numero: " + n);
		System.out.println("=============================");
		
		for (int i = 1; i <= 10; i++) {
			t = n * i;
			System.out.printf("%d X %d = %d \n", n, i, t);
		}
		
		teclado.close();

	}

}
