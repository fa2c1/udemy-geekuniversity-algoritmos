package br.com.geekuniversity.secao8;

import java.util.Scanner;

public class Exe02 {

	public static void main(String[] args) {
		
		int[] vetor1 = new int[10];
		int[] vetor2 = new int[10];
		int[] soma = new int[10];
		Scanner teclado = new Scanner(System.in);
		
		for (int i = 0; i < 10; i++) {
			System.out.printf("Informe o valor do Primeiro vetor na posi��o %d: ", i);
			vetor1[i] = teclado.nextInt();
			System.out.printf("Informe o valor do Segundo vetor na posi��o %d: ", i);
			vetor2[i] = teclado.nextInt();
			soma[i] = vetor1[i] + vetor2[i];
		}
		
		for (int i = 0; i < 10; i++) {
			System.out.printf("A soma dos vetores na posi��o %d �: %d \n", i, soma[i]);
		}
		
		teclado.close();

	}

}
