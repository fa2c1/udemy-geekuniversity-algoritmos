package br.com.geekuniversity.secao8;

import java.util.Scanner;

public class Exe03 {

	public static void main(String[] args) {
		
		int[] vetor = new int[10];
		Scanner teclado = new Scanner(System.in);
		
		for (int i = 0; i < vetor.length; i++) {
			System.out.print("Digite um numero: ");
			vetor[i] = teclado.nextInt();			
		}
		
		for (int i = (vetor.length -1); i >= 0; i--) {
			System.out.println("Ordem Inversa da digitada: " + vetor[i]);
		}
		
		teclado.close();

	}

}
