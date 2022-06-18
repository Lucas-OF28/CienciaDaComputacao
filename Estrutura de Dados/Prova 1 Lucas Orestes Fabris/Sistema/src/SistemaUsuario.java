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

import database.dao.UsuarioDAO;
import database.model.USUARIO;

public class SistemaUsuario extends JInternalFrame {

	private JButton btnBuscar, btnAdicionar, btnRemover, btnSalvar;
	private JTextField txfUsuario;
	private JPasswordField txfSenha, txfConfirmaSenha;
	private JLabel lblUsuario, lblSenha, lblConfirmaSenha, lblTipoPerfil;
	private JComboBox<String> cbxTipoPerfil;
	private JTable tblUsuarios;
	private JScrollPane spnUsuario;
	private DefaultTableModel modelo;
	private Connection conexao;
	private UsuarioDAO dao;
	private boolean isInsert = false;
	private int cdUsuario = -99;
	
	public SistemaUsuario(final Connection conexao) {
		
		this.conexao = conexao;
		try {
			dao = new UsuarioDAO(conexao);
		} 
		catch (SQLException e) {
			e.printStackTrace();
		}
		
		  setSize(700, 500);
		setLayout(null);
		setTitle("Cadastro de Usuarios");
		setClosable(true);
		setIconifiable(true);
		componentesCriar(); 
		
		camposHabilitar(false);
		
		setVisible(true);
		
	}
	
	private void componentesCriar() {
		btnBuscar = new JButton(actionBuscar);
		btnBuscar.setBounds(10,10,100,25);
		getContentPane().add(btnBuscar);
		
		btnAdicionar = new JButton(actionAdicionar	);
		btnAdicionar.setBounds(115,10,100,25);
		getContentPane().add(btnAdicionar);
		
		btnRemover = new JButton(actionRemover);
		btnRemover.setBounds(215,10,100,25);
		btnRemover.setEnabled(false);
		getContentPane().add(btnRemover);
		
		btnSalvar = new JButton(actionSalvar);
		btnSalvar.setBounds(315,10,100,25);
		btnSalvar.setEnabled(false);
		getContentPane().add(btnSalvar);
		
		lblUsuario = new JLabel("Usuario: ");
		lblUsuario.setBounds(10 , 60, 100, 25);
		getContentPane().add(lblUsuario);
		
		txfUsuario = new JTextField();
		txfUsuario.setBounds(70, 60, 200, 25);
		getContentPane().add(txfUsuario);
		
		lblSenha = new JLabel("Senha: ");
		lblSenha.setBounds(10 , 90, 100, 25);
		getContentPane().add(lblSenha);
		
		txfSenha = new JPasswordField();
		txfSenha.setBounds(70, 90, 200, 25);
		getContentPane().add(txfSenha);
		
		lblTipoPerfil = new JLabel("Perfil: ");
		lblTipoPerfil.setBounds(290, 60, 100, 25);
		getContentPane().add(lblTipoPerfil);
		
		cbxTipoPerfil = new JComboBox<String>();
		cbxTipoPerfil.addItem("- Selecione -");
		cbxTipoPerfil.addItem("- Administrador -");
		cbxTipoPerfil.addItem("- Cadastral -");
		cbxTipoPerfil.addItem("- Financeiro -");
		cbxTipoPerfil.setBounds(400, 60 ,200, 25);	
		getContentPane().add(cbxTipoPerfil);
		
		lblConfirmaSenha = new JLabel("Confirma senha: ");
		lblConfirmaSenha.setBounds(290, 90, 100, 25);
		getContentPane().add(lblConfirmaSenha);
		
		txfConfirmaSenha = new JPasswordField();
		txfConfirmaSenha.setBounds(400, 90, 200, 25);
		getContentPane().add(txfConfirmaSenha);
		
	
		modelo = new DefaultTableModel();
		modelo.addColumn("Codigo");
		modelo.addColumn("Usuario");
		modelo.addColumn("Perfil");
		
		tblUsuarios = new JTable(modelo) { 
			public boolean editCellAt(int row, int column) {
				return false;
			}
		}; 
		tblUsuarios.setDefaultEditor(Object.class, null);
		tblUsuarios.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		tblUsuarios.addMouseListener(new MouseAdapter() {
			
			@Override
			 public void mouseClicked(MouseEvent e) {
				 if(e.getClickCount() == 2) {
					 btnRemover.setEnabled(true);
					 btnSalvar.setEnabled(true);
					 camposHabilitar(true);
					 
					 int cd_usuario = Integer.parseInt(tblUsuarios.getValueAt(tblUsuarios.getSelectedRow(), 0).toString());
					 cdUsuario = cd_usuario;
					 try 
					 {
						USUARIO usuario = dao.SelectCd(cd_usuario);
						txfUsuario.setEnabled(false);
						txfSenha.setText(usuario.getDs_senha());
						txfConfirmaSenha.setText(usuario.getDs_senha());
						cbxTipoPerfil.setSelectedIndex(usuario.getTp_perfil()+1);
					} 
					 catch (Exception e1) {
						e1.printStackTrace();
					}
				 }
			}
		});
		spnUsuario = new JScrollPane(tblUsuarios);
		spnUsuario.setBounds(10, 130, 595, 300);
		getContentPane().add(spnUsuario);
	}
	
	private void camposHabilitar(final boolean habilitado) {
		txfUsuario.setEnabled(habilitado);
		txfSenha.setEnabled(habilitado);
		txfConfirmaSenha.setEnabled(habilitado);
		cbxTipoPerfil.setEnabled(habilitado);
	}
	
	private void camposLimpar() {
		
		txfUsuario.setText(null);
		txfSenha.setText(null);
		txfConfirmaSenha.setText(null);
		cbxTipoPerfil.setSelectedIndex(0);
	}
	
	// -------------- Funcoes do Botoes --------------\\
	
	Action actionRemover= new AbstractAction("Remover") {
		
		@Override
		public void actionPerformed(ActionEvent e) {
			
			USUARIO usuario = new USUARIO();
			usuario.setCd_usuario(cdUsuario);
			try {
				dao.Delete(usuario);
			} catch (SQLException e1) {
				e1.printStackTrace();
			}
			isInsert = false;
			cdUsuario = -99;
			camposLimpar();
			btnBuscar.doClick();
			btnSalvar.setEnabled(false);
			btnRemover.setEnabled(false);
		}
	}; 
	
	Action actionAdicionar = new AbstractAction("Adicionar") {
		
		@Override
		public void actionPerformed(ActionEvent e) {
			camposHabilitar(true);
			btnSalvar.setEnabled(true);
			isInsert = true;
		}
	};
	
	Action actionBuscar = new AbstractAction("Buscar") {
		
		@Override
		public void actionPerformed(ActionEvent e) {
			try 
			{
				while(modelo.getRowCount() > 0) {
					modelo.removeRow(0);
				}
				
				List<Object> listaUsuarios = dao.Select();
				for (Object obj : listaUsuarios) {
					USUARIO usuario = (USUARIO)obj;			
					String tipoPerfil = usuario.getTp_perfil() == 0 ? "Administador" :	usuario.getTp_perfil() == 1 ? "Cadastral" : "Financeiro";		
					modelo.addRow(new String[] {String.valueOf(usuario.getCd_usuario()), usuario.getNm_usuario(), tipoPerfil});
				}	
			} 
			catch (Exception e1) {
				e1.printStackTrace();
			} 
			
		}
	};
	
	Action actionSalvar = new AbstractAction("Salvar") {
		
		@Override
		public void actionPerformed(ActionEvent e) {
			if (txfUsuario.getText().isEmpty()) {
				JOptionPane.showMessageDialog(null, "Campo <usuario> obrigatorio!");
				
			}
			else if(txfSenha.getText().isEmpty()) {
				JOptionPane	.showMessageDialog(null, "Campo <senha> obrigatorio!");
				
			}
			else if(txfConfirmaSenha.getText().isEmpty()) {
				JOptionPane	.showMessageDialog(null, "Campo <confirma senha>  obrigatorio!");
				
			}
			else if(cbxTipoPerfil.getSelectedIndex() ==  0) {
				JOptionPane	.showMessageDialog(null, "Campo <perfil>  obrigatorio!");
				
			}
			else if(txfSenha.getPassword().toString().equals(txfConfirmaSenha.getPassword().toString())) {
				JOptionPane	.showMessageDialog(null, "As senhas nao sao iguais!");
				
			}
			else {
				USUARIO usuario = new USUARIO();
				usuario.setNm_usuario(txfUsuario.getText());
				usuario.setDs_usuario(txfSenha.getText().toString());
				usuario.setTp_perfil(cbxTipoPerfil.getSelectedIndex()-1);
				
				if(isInsert)  {
				try {
					dao.Insert(usuario);
					JOptionPane.showMessageDialog(null, "Usuario inserido!");
				} catch (Exception e1) {
					e1.printStackTrace();
					JOptionPane.showMessageDialog(null, "Falha durante a operacao do INSERT");
				}
				}
				else {
					usuario.setCd_usuario(cdUsuario);
					try {
						dao.Update(usuario);
						JOptionPane.showMessageDialog(null, "Usuario atualizado!");
					} catch (Exception e1) {
						e1.printStackTrace();
						JOptionPane.showMessageDialog(null, "Falha durante a operacao de UPDATE");
					}
				}
				
				isInsert = false;
				cdUsuario = -99;
				camposLimpar();
				btnBuscar.doClick();
				btnSalvar.setEnabled(false);
				
			}
		}
	};
			
}