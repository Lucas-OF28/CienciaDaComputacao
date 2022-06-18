import java.util.ArrayList;
import java.util.Calendar;

import database.model.Filial;
import database.model.Produto;
import database.model.Venda;

public class Principal {

	public static void main(String[] args) {
		
		
		ArrayList<Produto> listaProdutos = new ArrayList<Produto>();
		for (int i = 1; i <= 10; i++) {
			listaProdutos.add(new Produto(i, "Produto "+i, 10, 50));
		}
		
		System.out.println("Lista de Produtos");
		for (Produto prod : listaProdutos) {
			System.out.println(prod);
		}
		
		System.out.println("Vendas Efetuadas");
		
		//for (Filial filial : listaFiliais) {			
		//	AtualizaProduto atualizaProduto = new AtualizaProduto(listaVendas, listaProdutos, filial);
		/*
		 * Thread thr = new Thread(atualizaProduto); 
		 * thr.start(); 
		 * }
		 */
		System.out.println("Lista de Produtos Atualizada");
		for (Produto prod : listaProdutos) {
			System.out.println(prod);
		}
	}

}















