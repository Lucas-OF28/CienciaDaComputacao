import java.util.ArrayList;

import database.model.Filial;
import database.model.Produto;
import database.model.Venda;

public class AtualizaProduto implements Runnable {

	private ArrayList<Venda> listaVenda;
	private ArrayList<Produto> listaProduto;
	private Filial filial;
	
	public AtualizaProduto(ArrayList<Venda> listaVenda, ArrayList<Produto> listaProduto, Filial filial) {
		this.listaVenda = listaVenda;
		this.listaProduto = listaProduto;
		this.filial = filial;
	}
	@Override
	public void run() {
		for (Venda venda : listaVenda) {
			if (venda.getFilial().getCodigo() == filial.getCodigo()) {
				for (Produto produto : listaProduto) {
					if (venda.getProduto().getCodigo() == produto.getCodigo()) {
						synchronized (this) {
							produto.setQuantidade_estoque(produto.getQuantidade_estoque() - venda.getQuantidade());	
						}
					}
				}
			}
		}
	}
}
