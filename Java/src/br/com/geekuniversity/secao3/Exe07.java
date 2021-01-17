package br.com.geekuniversity.secao3;

import java.util.Scanner;

public class Exe07 {

	public static void main(String[] args) {
		
		float altura, peso_ideal;		
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Digite sua altura: ");
		altura = teclado.nextFloat();
		
		peso_ideal = (float)(72.7 * altura) - 58;
		
		System.out.printf("O Peso ideal é: %.3f", peso_ideal);
		
		teclado.close();

	}

}
