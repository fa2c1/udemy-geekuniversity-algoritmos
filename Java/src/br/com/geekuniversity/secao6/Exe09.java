package br.com.geekuniversity.secao6;

import java.util.Scanner;

public class Exe09 {

	public static void main(String[] args) {
		
		float ip;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("=============================");
		System.out.println("Calculo Indice de Poluição");
		System.out.println("=============================");
		
		System.out.print("Indice Medido: ");
		ip = teclado.nextFloat();
		System.out.println("=============================");
		
		if (ip >= 0.3 && ip < 0.4) {
			System.out.println("Grupo 1 suspender atividades");
		} else if (ip >= 0.4 && ip < 0.5) {
			System.out.println("Grupo 1 e 2 suspender atividades");
		} else if (ip >= 0.5) {
			System.out.println("Todos os Grupos suspender atividades");
		} else {
			System.out.println("Niveis Aceitaveis");
		}
		
		teclado.close();

	}

}
