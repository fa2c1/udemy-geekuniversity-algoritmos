package br.com.geekuniversity.secao8;

import java.util.Scanner;

public class Exe04 {

	public static void main(String[] args) {
		
		int[] vetor = new int[20];
		int soma = 0;
		Scanner teclado = new Scanner(System.in);
		
		for (int i = 0; i < vetor.length; i++) {
			System.out.print("Digite um valor: ");
			vetor[i] = teclado.nextInt();
			soma = soma + vetor[i];
		}
		
		System.out.println("A soma dos valores digitados é: " + soma);
		
		teclado.close();

	}

}
