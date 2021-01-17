package br.com.geekuniversity.secao3;

import java.util.Scanner;

public class Exe02 {

	public static void main(String[] args) {
		
		int qtd_min, qtd_max;
		float estq_medio;		
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Qtd Minima: ");
		qtd_min = teclado.nextInt();
		
		System.out.print("Qtd Maxima: ");
		qtd_max = teclado.nextInt();
		
		estq_medio = (qtd_max + qtd_min) / 2;
		
		System.out.println("O estoque medio é " + estq_medio);
		
		teclado.close();

	}

}
