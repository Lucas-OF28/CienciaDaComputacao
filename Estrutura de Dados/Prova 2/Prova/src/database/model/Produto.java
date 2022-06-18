package database.model;

public class Produto {
	
	private int codigo;
	private String nome;
	private int quantidade_estoque;
	private int quantidade_minima;
	
	public Produto(final int codigo, final String nome, final int quantidade_estoque, final int quantidade_minima) {
		this.codigo = codigo;
		this.nome = nome;
		this.quantidade_estoque = quantidade_estoque;
		this.quantidade_minima = quantidade_minima;
	}

	public int getCodigo() {
		return codigo;
	}

	public String getNome() {
		return nome;
	}
	public int getQuantidade_estoque() {
		return quantidade_estoque;
	}
	public int getQuantidade_minima() {
		return quantidade_minima;
	}
	public void setQuantidade_estoque(int estoque) {
		quantidade_estoque = estoque;
	}
	
	@Override
	public String toString() {
		return "Código: "+codigo+" / Produto: "+nome+" / Quantidade Estoque: "+quantidade_estoque+" / Quantidade Mínima: "+quantidade_minima;
	}

}
