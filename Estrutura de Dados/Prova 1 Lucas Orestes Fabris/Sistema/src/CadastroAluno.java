import java.awt.event.ActionEvent;
import java.sql.Connection;
import java.sql.SQLException;

import javax.swing.AbstractAction;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JInternalFrame;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

import database.ConnectionFactory;
import database.dao.AlunoDAO;
import database.model.ALUNO;

public class CadastroAluno extends JInternalFrame {
	
	private JTextField txfNome;
	private JTextField txfCpf;
	private JTextField txfIdade;
	private JButton btnSalvar;
	private Connection conexao;
	
	public CadastroAluno(final Connection conexao) {
		
		this.conexao = conexao;		
		setSize(500, 500);
		setTitle("Cadastro de Aluno");
		setDefaultCloseOperation(DISPOSE_ON_CLOSE);
		setLayout(null);
		setClosable(true);
		setIconifiable(true);		
		componentesCriar();
		setVisible(true);
	}
	private void componentesCriar() {		
		txfNome = new JTextField();
		txfNome.setBounds(10, 10, 300, 25);
		getContentPane().add(txfNome);
		
		txfCpf = new JTextField();
		txfCpf.setBounds(10, 40, 300, 25);
		getContentPane().add(txfCpf);
		
		txfIdade = new JTextField();
		txfIdade.setBounds(10, 75, 300, 25);
		getContentPane().add(txfIdade);	
		
		btnSalvar = new JButton(new AbstractAction("Salvar") {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				
				try {
					conexao = ConnectionFactory.getConnection("localhost", 3306, "estrutura", "root", "luuufabris");
					
					if (conexao != null) {
						ALUNO aluno = new ALUNO(txfNome.getText(), txfCpf.getText());
						aluno.setIdade(Integer.valueOf(txfIdade.getText()));
						new AlunoDAO(conexao).Insert(aluno);
						JOptionPane.showMessageDialog(null, "Aluno Salvo!");
					}
				} 
				catch (SQLException e1) {
					e1.printStackTrace();
					JOptionPane.showMessageDialog(null, "Erro ao salvar o aluno: "+e1.getMessage());
				}	
			}
		});
		btnSalvar.setBounds(10, 105, 300, 25);
		getContentPane().add(btnSalvar);
	}
}