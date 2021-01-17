package br.com.geekuniversity.secao8;

import java.util.Scanner;

public class Exe05 {

	public static void main(String[] args) {
		
		int[] vetor = new int[10];
		boolean maior50 = false;
		Scanner teclado = new Scanner(System.in);
		
		for (int i = 0; i < vetor.length; i++) {
			System.out.printf("Digite um valor para o vetor %d/10: ", i + 1);
			vetor[i] = teclado.nextInt();
		}
		
		for (int i = 0; i < vetor.length; i++) {
			if (vetor[i] > 50) {
				System.out.printf("O numero %d esta na posição %d \n", vetor[i], i);
				maior50 = true;
		}
		} if (!maior50) {
			System.out.println("Não existe nenhum numero maior que 50");
		}
		
		teclado.close();

	}

}
