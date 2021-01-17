package br.com.geekuniversity.secao6;

import java.util.Scanner;

public class Exe02 {

	public static void main(String[] args) {
		
		int n, a = 0, b = 0;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Digite um numero:");
		n = teclado.nextInt();
		
		if (n >= 0) {
			a = n;
		} else {
			b = n;
		}
		
		System.out.println("Valor Positivo " + a);
		System.out.println("Valor Positivo " + b);
		
		teclado.close();

	}

}
