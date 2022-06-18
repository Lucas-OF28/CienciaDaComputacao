import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.Calendar;

import javax.swing.AbstractAction;
import javax.swing.Action;
import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.border.Border;

import database.model.Filial;
import database.model.Produto;
import database.model.Venda;

public class Tela extends JFrame{
	private JPanel pnlFilial, pnlFilialLegenda, pnlProdutos,pnlProdutosLegenda, pnlVendas, pnlVendasLegenda;
	private JButton btnAddProd, btnAddVendas, btnAddFilial, btnThread;
	private JTextField txfFilialCode, txfFilialName, txfProdutoCode, txfProdutoDescription, txfProdutoEstoque, txfProdutoQTD, txfVendasQTD;
	private JLabel lblFilial, lblProduto, lblVendas;
	private JLabel lblFilialCode, lblFilialName, lblProdutoCode, lblProdutoDescription, lblProdutoEstoque, lblProdutoQTD, lblVendasQTD;
	ArrayList<Filial> listaFiliais = new ArrayList<Filial>();
	ArrayList<Produto> listaProdutos = new ArrayList<Produto>();
	ArrayList<Venda> listaVendas = new ArrayList<Venda>();
	
	public Tela(){
		setSize(550,700);
		setLayout(null);
		criarBotao();
		criaCampos();
		criaPanel();
	}	
	private void criaPanel()
	{		
		pnlFilialLegenda = new JPanel();
		pnlFilialLegenda.setLayout(null);
		pnlFilialLegenda.setBounds(10,70,450,100);
		pnlFilialLegenda.setBackground(Color.gray);
		getContentPane().add(pnlFilialLegenda);
		
		pnlFilial = new JPanel();
		pnlFilial.setLayout(null);
		pnlFilial.setBounds(10,10,450,100);
		pnlFilial.setBackground(Color.BLUE);
		getContentPane().add(pnlFilial);
		
		pnlProdutosLegenda = new JPanel();
		pnlProdutosLegenda.setLayout(null);
		pnlProdutosLegenda.setBounds(10,240,480,150);
		pnlProdutosLegenda.setBackground(Color.gray);
		getContentPane().add(pnlProdutosLegenda);		
		
		pnlProdutos = new JPanel();
		pnlProdutos.setLayout(null);
		pnlProdutos.setBounds(10,180,480,200);
		pnlProdutos.setBackground(Color.BLUE);
		getContentPane().add(pnlProdutos);	
		
		pnlVendasLegenda = new JPanel();
		pnlVendasLegenda.setLayout(null);
		pnlVendasLegenda.setBounds(10,505,500,140);
		pnlVendasLegenda.setBackground(Color.gray);
		getContentPane().add(pnlVendasLegenda);		
		
		pnlVendas = new JPanel();
		pnlVendas.setLayout(null);
		pnlVendas.setBounds(10,440,500,140);
		pnlVendas.setBackground(Color.BLUE);
		getContentPane().add(pnlVendas);
	}
	
	private void criaCampos()
	{
		lblFilial = new JLabel("FILIAL");
		lblFilial.setFont(new Font(Font.MONOSPACED, Font.BOLD,40));
		lblFilial.setBounds(160,10,200,60);
		lblFilial.setForeground(Color.white);
		getContentPane().add(lblFilial);
		
		txfFilialCode = new JTextField();
		txfFilialCode.setBounds(60, 90, 80, 25);
		getContentPane().add(txfFilialCode);	

		lblFilialCode = new JLabel("Código: ");
		lblFilialCode.setBounds(15 , 90, 100, 25);
		getContentPane().add(lblFilialCode);
		
		txfFilialName = new JTextField();
		txfFilialName.setBounds(55, 130, 150, 25);
		getContentPane().add(txfFilialName);
		
		lblFilialName = new JLabel("Nome: ");
		lblFilialName.setBounds(15 ,130, 100, 25);
		getContentPane().add(lblFilialName);
		
		lblProduto = new JLabel("PRODUTOS");
		lblProduto.setFont(new Font(Font.MONOSPACED, Font.BOLD,40));
		lblProduto.setBounds(180,180,300,60);
		lblProduto.setForeground(Color.white);
		getContentPane().add(lblProduto);
		
		txfProdutoCode = new JTextField();
		txfProdutoCode.setBounds(60, 250, 120, 25);
		getContentPane().add(txfProdutoCode);	
		
		lblProdutoCode = new JLabel("Código: ");
		lblProdutoCode.setBounds(15 , 250, 100, 25);
		getContentPane().add(lblProdutoCode);
		
		txfProdutoDescription = new JTextField();
		txfProdutoDescription.setBounds(80, 280, 150, 25);
		getContentPane().add(txfProdutoDescription);
		
		lblProdutoDescription = new JLabel("Descrição: ");
		lblProdutoDescription.setBounds(15 ,280, 100, 25);
		getContentPane().add(lblProdutoDescription);
		
		txfProdutoEstoque = new JTextField();
		txfProdutoEstoque.setBounds(90, 310, 70, 25);
		getContentPane().add(txfProdutoEstoque);	
		
		lblProdutoEstoque = new JLabel("Qtd.Estoque: ");
		lblProdutoEstoque.setBounds(15 ,310, 100, 25);
		getContentPane().add(lblProdutoEstoque);
		
		txfProdutoQTD = new JTextField();
		txfProdutoQTD.setBounds(86, 340, 70, 25);
		getContentPane().add(txfProdutoQTD);
		
		lblProdutoQTD = new JLabel("Qtd.Mínima: ");
		lblProdutoQTD.setBounds(15 ,340, 100, 25);
		getContentPane().add(lblProdutoQTD);
		
		lblVendas = new JLabel("VENDAS");
		lblVendas.setFont(new Font(Font.MONOSPACED, Font.BOLD,40));
		lblVendas.setBounds(180,448,300,60);
		lblVendas.setForeground(Color.white);
		getContentPane().add(lblVendas);
		
		txfVendasQTD = new JTextField();
		txfVendasQTD.setBounds(86, 540, 80, 25);
		getContentPane().add(txfVendasQTD);		
		
		lblVendasQTD = new JLabel("Quantidade: ");
		lblVendasQTD.setBounds(15 ,540, 100, 25);
		getContentPane().add(lblVendasQTD);
	}
	
	private void criarBotao()
	{     
		btnAddFilial = new JButton(actionFilial);
		btnAddFilial.setBounds(300,110,100,50);
		getContentPane().add(btnAddFilial);
		
		btnAddProd = new JButton(actionProduto);
		btnAddProd.setBounds(350,320,100,50);
		getContentPane().add(btnAddProd);
		
		btnAddVendas = new JButton(actionVenda);
		btnAddVendas.setBounds(350,590,120,50);
		getContentPane().add(btnAddVendas);
		
		btnThread = new JButton(actionThread);
		btnThread.setBounds(200,590,120,50);
		getContentPane().add(btnThread);
	}

	Action actionFilial= new AbstractAction("Adicionar")
	{		
		public void actionPerformed(ActionEvent e)
		{
			
			 if(txfFilialCode.getText().isEmpty())
			 {
				 JOptionPane.showMessageDialog(null, "Digite o código!");
			 }
			 else if(txfFilialName.getText().isEmpty()) {
				 JOptionPane.showMessageDialog(null, "Digite o nome!");
			 }
			 else {
				 listaFiliais.add(new Filial(Integer.parseInt(txfFilialCode.getText()), txfFilialName.getText().toString()));
				 for (Filial fil : listaFiliais)
				 {
						System.out.println(fil.getCodigo()+fil.getNome());
				 }
			 }			 		
	    }
	};
	
	Action actionProduto = new AbstractAction("Adicionar") 
	{		
		public void actionPerformed(ActionEvent e)
		{
			
			 if(txfProdutoCode.getText().isEmpty()) {
				 JOptionPane.showMessageDialog(null, "Digite o código!");
			 }
			 else if(txfProdutoDescription.getText().isEmpty()) {
				 JOptionPane.showMessageDialog(null, "Digite a descrição!");
			 }
			 else if(txfProdutoEstoque.getText().isEmpty()) {
				 JOptionPane.showMessageDialog(null, "Digite o quantidade em estoque!");
			 }
			 else if(txfProdutoQTD.getText().isEmpty()) {
				 JOptionPane.showMessageDialog(null, "Digite a quantidade mínima!");
			 }
			 else 
			 {
				 listaProdutos.add(new Produto(Integer.parseInt(txfProdutoCode.getText()), txfProdutoDescription.getText().toString(),
						 Integer.parseInt(txfProdutoEstoque.getText()), Integer.parseInt(txfProdutoQTD.getText())));
				 for (Produto prod : listaProdutos) {
						System.out.println(prod.getCodigo()+prod.getNome()+prod.getQuantidade_estoque()+prod.getQuantidade_minima());
						
				 }
			 }			 		
	    }
	};
	
	Action actionVenda = new AbstractAction("Vender 1 -> 1")
	
	{
		
		public void actionPerformed(ActionEvent e) 
		
		{			
			for (int i = 1; i <= listaProdutos.size(); i++) 
			
			{				
				Filial filial;
				Produto produto;
				
					filial = listaFiliais.get(i);
					produto = listaProdutos.get(i);
				
				
				listaVendas.add(new Venda(i, filial, Calendar.getInstance().getTime(), produto, Integer.parseInt(txfVendasQTD.getText()), (float)20.00));
			}
			
			System.out.println("Venda Efetuada");
			for (Venda v : listaVendas) {
				System.out.println("Filial: "+v.getFilial().getNome()+" / Produto: "+v.getProduto().getNome()+" / Quantidade Vendida: "+v.getQuantidade());
			}			
		}
	};	
	Action actionThread = new AbstractAction("Vender Thread") 
	{		
		public void actionPerformed(ActionEvent e)
		{		
			for (Filial filial : listaFiliais)
				
			{			
				AtualizaProduto atualizaProduto = new AtualizaProduto(listaVendas, listaProdutos, filial);				
				 Thread thr = new Thread(atualizaProduto); 
				 thr.start(); 
			}			
		}
	};	
	public static void main(String[] args) throws Exception 
	{
		new Tela().setVisible(true);		
	}	
}