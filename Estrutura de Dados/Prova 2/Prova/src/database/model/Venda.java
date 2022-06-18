package database.model;
import java.util.Date;

public class Venda {
	
	private int codigo;
	private Filial filial;
	private Date data_venda;
	private Produto produto;
	private int quantidade;
	private float valor_venda;
	
	public Venda(final int codigo, final Filial filial, final Date data_venda, final Produto produto, final int quantidade, final float valor_venda) {
		
		this.codigo = codigo;
		this.filial = filial;
		this.data_venda = data_venda;
		this.produto = produto;
		this.quantidade = quantidade;
		this.valor_venda = valor_venda;
	}

	public int getCodigo() {
		return codigo;
	}

	public Filial getFilial() {
		return filial;
	}

	public Date getData_venda() {
		return data_venda;
	}

	public Produto getProduto() {
		return produto;
	}

	public int getQuantidade() {
		return quantidade;
	}

	public float getValor_venda() {
		return valor_venda;
	}
}
