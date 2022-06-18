

import java.awt.event.ActionEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.sql.Connection;
import java.sql.SQLException;
import java.util.List;
import javax.swing.AbstractAction;
import javax.swing.Action;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JInternalFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPasswordField;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.ListSelectionModel;
import javax.swing.table.DefaultTableModel;
import javax.swing.tree.DefaultTreeCellEditor.EditorContainer;

import database.dao.ModalidadeDAO;
import database.model.Modalidade;

public class CadastroModalidade extends JInternalFrame {

	private JButton btnBuscar, btnAdicionar, btnRemover, btnOK;
	private JTextField txfModalidade, txfGraduacao;
	private JLabel  lblModalidade;
	private JLabel lblGraduacao;
	private JTable tblModalidade;
	private int cdModalidade = -99;
	private JScrollPane spnModalidade;
	private DefaultTableModel tabMod;
	private Connection conexao;
	private ModalidadeDAO dao;
	private boolean isInsert = false;	
	public String nm_modalidade;
	
	
	public CadastroModalidade(final Connection conexao) {
		
		this.conexao = conexao;
		try {
			dao = new ModalidadeDAO(conexao);
		}
		catch (SQLException e) {
			e.printStackTrace();
		}		
		 setSize(700, 500);
		setLayout(null);
		setTitle("Modalidade ------- Graduacao");		
		setIconifiable(true);
		setClosable(true);
		componentesCriar(); 		
		camposHabilitar(false);		
		setVisible(true);		
	}
	
	private void componentesCriar() {
		
		btnBuscar = new JButton(actionBuscar);
		btnBuscar.setBounds(30,10,100,25);
		getContentPane().add(btnBuscar);
		
		btnAdicionar = new JButton(actionAdicionar	);
		btnAdicionar.setBounds(140,10,100,25);
		getContentPane().add(btnAdicionar);
			
		btnRemover = new JButton(actionRemover);
		btnRemover.setBounds(250,10,100,25);
		btnRemover.setEnabled(false);
		getContentPane().add(btnRemover);	
		
		btnOK = new JButton(actionSalvar);
		btnOK.setBounds(500,80,100,25);
		btnOK.setEnabled(false);
		getContentPane().add(btnOK);
			
		lblModalidade = new JLabel("Modalidade: ");
		lblModalidade.setBounds(10 , 60, 100, 25);
		getContentPane().add(lblModalidade);		
		
		txfModalidade = new JTextField();
		txfModalidade .setBounds(80, 60, 400, 25);
		getContentPane().add(txfModalidade);
		
		lblGraduacao = new JLabel("Graduacao: ");
		lblGraduacao.setBounds(10 , 90, 100, 25);
		getContentPane().add(lblGraduacao);		
		
		txfGraduacao = new JTextField();
		txfGraduacao.setBounds(80, 90, 400, 25);
		getContentPane().add(txfGraduacao);	
		
		tabMod = new DefaultTableModel();
		tabMod.addColumn("Modalidade");
		tabMod.addColumn("Graduacao");
		tblModalidade = new JTable(tabMod) { 
			public boolean editCellAt(int row, int column) {
				return false;
			}
		}; 
		tblModalidade.setDefaultEditor(Object.class, null);
		tblModalidade.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		tblModalidade.addMouseListener(new MouseAdapter() 
		{		
			
			 public void mouseClicked(MouseEvent e) {
				 if(e.getClickCount() == 2) {					 
					 btnRemover.setEnabled(true);
					 btnOK.setEnabled(true);
					 camposHabilitar(true);
					 
					 String nm_modalidade = tblModalidade.getValueAt(tblModalidade.getSelectedRow(), 1).toString();
					 
					 try {
						dao.DeleteModalidade(nm_modalidade);
						btnBuscar.doClick();
					} 
					 catch (Exception e1) {
						e1.printStackTrace();
					}
				 }
			}
		});
		spnModalidade = new JScrollPane(tblModalidade);
		spnModalidade.setBounds(10, 130, 600, 300);
		getContentPane().add(spnModalidade);	
	}
	private void camposHabilitar(final boolean habilitado) {
		txfModalidade.setEnabled(habilitado);
		txfGraduacao.setEnabled(habilitado);	
	}
	private void camposLimpar() {
		txfModalidade.setText(null);
		txfGraduacao.setText(null);
	}
	
	Action actionRemover= new AbstractAction("Remover") {
		
		public void actionPerformed(ActionEvent e) {
			try {
				nm_modalidade = txfModalidade.getText().toString();
				dao.DeleteModalidade(nm_modalidade);
			}
			catch (SQLException e1){
				e1.printStackTrace();
			}
			isInsert = false;
			cdModalidade = -99;
			camposLimpar();
			while(tabMod.getRowCount() > 0){				
				tabMod.removeRow(0);
			}
			btnOK.setEnabled(false);
			
		}
	};
	
	
	Action actionAdicionar = new AbstractAction("Adicionar") {
		
		
		public void actionPerformed(ActionEvent e) {
			camposHabilitar(true);
			btnOK.setEnabled(true);
			isInsert = true;
		}
	};
	
	
	
	Action actionBuscar = new AbstractAction("Buscar") {
		
			public void actionPerformed(ActionEvent e) {
			try {
				txfModalidade.setEnabled(true);
				btnRemover.setEnabled(true);
				while(tabMod.getRowCount() > 0) {
				tabMod.removeRow(0);
				}
				
				
				nm_modalidade = txfModalidade.getText().toString();
				List<Object> listaModalidade = dao.SelectModalidade(nm_modalidade);
				
				for (Object obj : listaModalidade) {
					
					Modalidade modalidade = (Modalidade)obj;
					if(listaModalidade == null){
						JOptionPane	.showMessageDialog(null, "Modalidade nao indentificada");
					}
					
					else
					{
						tabMod.addRow(new String[] {String.valueOf(modalidade.getId()), modalidade.getModalidade(), modalidade.getGraduacao()});
					}
				}
			} 
			catch (Exception e1) {
			e1.printStackTrace();
			} 
			camposLimpar();
		}
	};
	
	Action actionSalvar = new AbstractAction("OK")
	{		
		public void actionPerformed(ActionEvent e)
		{
			if (txfModalidade.getText().isEmpty()) {
				JOptionPane.showMessageDialog(null, "Insira a Modalidade ");
			}
			else if (txfGraduacao.getText().isEmpty()) {
				JOptionPane.showMessageDialog(null, "Insira a Graduacao");	
			}
			else {
				Modalidade modalidade = new Modalidade();
				modalidade.set_modalidade(txfModalidade.getText());
				modalidade.set_graduacao(txfGraduacao.getText());
	
				if(isInsert) {
				try {
					dao.Insert(modalidade);
					JOptionPane.showMessageDialog(null, "Modalidade Salva");
				}
				
				catch (Exception e1) {
					e1.printStackTrace();
					JOptionPane.showMessageDialog(null, "Falha no INSERT");
					}
				}
				else 
				{
					modalidade.setId(cdModalidade);
					try {
						dao.Update(modalidade);
						JOptionPane.showMessageDialog(null, "Modalidade foi atualizada");
					} 
					catch (Exception e1) {
						e1.printStackTrace();
						JOptionPane.showMessageDialog(null, "UPDATE Falhou");
					}
				}
				isInsert = false;
				cdModalidade = -99;
				camposLimpar();
				while(tabMod.getRowCount() > 0){
					tabMod.removeRow(0);
				}
				btnOK.setEnabled(false);
			}
		}
	};
			
}