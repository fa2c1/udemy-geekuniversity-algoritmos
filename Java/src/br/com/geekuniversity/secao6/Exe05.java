package br.com.geekuniversity.secao6;

import java.util.Scanner;

public class Exe05 {

	public static void main(String[] args) {
		
		float e = 0, m = 0, p;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Calculo de Multa");
		System.out.println("=============================");
		System.out.print("Peso Pescado: ");
		p = teclado.nextFloat();
		
		if (p > 50) {
			e = p - 50;
			m = e * 4;
			System.out.println("=============================");
			System.out.println("Peso Pescado: " + p);
			System.out.println("Peso Excedente: " + e);
			System.out.println("Valor da Multa: " + m);
		}else {
			System.out.println("=============================");
			System.out.println("Peso Pescado: " + p);
			System.out.println("Peso Excedente: " + e);
			System.out.println("Valor da Multa: " + m);
		}
		
		teclado.close();

	}

}
