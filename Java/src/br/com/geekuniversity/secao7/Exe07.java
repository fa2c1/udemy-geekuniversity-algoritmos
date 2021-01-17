package br.com.geekuniversity.secao7;

import java.util.Scanner;

public class Exe07 {

	public static void main(String[] args) {
	
	int opcao, op1 = 0, op2 = 0, op3 = 0, op4 = 0, soma = 0;
	float pop1, pop2, pop3, pop4;
	Scanner teclado = new Scanner(System.in);
	
	System.out.println("=====================================================================");
	System.out.println("\t\tMouses com Defeito - Contagem");
	System.out.println("=====================================================================");
	System.out.print("Escolha uma opção abaixo \n");
	System.out.println("1 Necessidade de esfera");
	System.out.println("2 Necessidade de limpesa");
	System.out.println("3 Troca do cabo ou conector");
	System.out.println("4 Quebrado ou inutilizado");
	System.out.println("0 Sair");
	System.out.print("Digite uma opção: ");
	opcao = teclado.nextInt();
		
	while (opcao != 0) {
		if (opcao == 1) {
			op1 = op1 + 1;
		} else if (opcao == 2) {
			op2 = op2 + 1;
		} else if (opcao == 3) {
			op3 = op3 + 1;
		} else if (opcao == 4) {
			op4 = op4 + 1;
		} else {
			System.out.print("Digite uma opção valida! \n");
			soma = soma - 1;
		}
		
		System.out.println("=====================================================================");
		System.out.println("\t\tMouses com defeito - Contagem");
		System.out.println("=====================================================================");
		System.out.print("Escolha uma opção abaixo \n");
		System.out.println("1 Necessidade de esfera");
		System.out.println("2 Necessidade de limpesa");
		System.out.println("3 Troca do cabo ou conector");
		System.out.println("4 Quebrado ou inutilizado");
		System.out.println("0 Sair");
		System.out.print("Digite uma opção: ");
		opcao = teclado.nextInt();
		
		soma = soma + 1;
	}
	
	pop1 = (op1 * 100) / soma;
	pop2 = (op2 * 100) / soma;
	pop3 = (op3 * 100) / soma;
	pop4 = (op4 * 100) / soma;
	
	System.out.println("=====================================================================");
	System.out.println("\t\t\t\tRelatorio");
	System.out.println("=====================================================================");
	System.out.println("=====================================================================");
	System.out.println("Quantidade de Mouses: " + soma);
	System.out.println("=====================================================================");
	System.out.println("Situação\t\t\t\t |  Quantidade  | Porcentagem");
	System.out.printf("1 Necessidade de esfera\t\t\t |\t %d \t|   %.2f%% \n", op1, pop1);
	System.out.printf("2 Necessidade de limpesa\t\t |\t %d \t|   %.2f%% \n", op2, pop2);
	System.out.printf("3 Troca do cabo ou conector\t\t |\t %d \t|   %.2f%% \n", op3, pop3);
	System.out.printf("4 Quebrado ou inutilizado\t\t |\t %d \t|   %.2f%% \n", op4, pop4);
	System.out.println("=====================================================================");
	
	teclado.close();

	}

}
