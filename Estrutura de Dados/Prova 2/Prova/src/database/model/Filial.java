package database.model;

import java.util.ArrayList;

public class Filial { 
	
	private int codigo;
	private String nome;
	
	public Filial(final int codigo, final String nome) {
		this.codigo = codigo;
		this.nome = nome;
	}
	public int getCodigo() {
		return codigo;
	}
	public String getNome() {
		return nome;
	}
	
}
