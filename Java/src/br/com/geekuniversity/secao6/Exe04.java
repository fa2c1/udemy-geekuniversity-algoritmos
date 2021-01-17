package br.com.geekuniversity.secao6;

import java.util.Scanner;

public class Exe04 {

	public static void main(String[] args) {
		
		char sexo;
		float altura, peso_ideal;
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Digite o seu Sexo:");
		sexo = teclado.next().charAt(0);
		System.out.println("Digite a sua Altura:");
		altura = teclado.nextFloat();
		
		if (sexo == 'm' || sexo == 'M') {
			peso_ideal = (float)(72.7 * altura) - 58;
			System.out.println("Seu peso ideal é" + peso_ideal);
		}else if (sexo == 'f' || sexo == 'F') {
			peso_ideal = (float)(62.1 * altura) - (float)44.7;
			System.out.println("Seu peso ideal é" + peso_ideal);
		}else{
			System.out.println("Digite um Sexo valido!!!");
		}
		
		teclado.close();

	}

}
