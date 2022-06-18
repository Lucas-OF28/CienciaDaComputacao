import java.awt.Font;
import java.awt.Menu;
import java.awt.event.ActionEvent;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.sql.Connection;
import java.util.ArrayList;
import java.util.HashMap;

import javax.swing.AbstractAction;
import javax.swing.Action;
import javax.swing.JButton;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

import database.ConnectionFactory;
import database.dao.UsuarioDAO;
import database.model.USUARIO;

public class LoginWindow extends JFrame {
	
	private JLabel lblSistema;
	private JTextField txfUsuario;
	private JPasswordField txfSenha;
	private JButton btnEntrar;
	
	public LoginWindow() throws Exception {
		setSize(600, 300);
		setLayout(null);
		setResizable(false);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		windowCriar();
	}
	
	private void windowCriar() {
	
		lblSistema = new JLabel("Sistema-Info");
		lblSistema.setFont(new Font(Font.MONOSPACED, Font.BOLD, 32));
		lblSistema.setBounds(200, 50, 400, 50);
		getContentPane().add(lblSistema);
		
		txfUsuario = new JTextField();
		txfUsuario.setBounds(100, 105, 400, 30);
		getContentPane().add(txfUsuario);
		
		txfSenha = new JPasswordField();
		txfSenha.addKeyListener(new KeyListener() {
			
			@Override
			public void keyTyped(KeyEvent e) {
				
			}
			
			@Override
			public void keyReleased(KeyEvent e) {
				
			}
			
			@Override
			public void keyPressed(KeyEvent e) {
				if (e.getKeyCode() == KeyEvent.VK_ENTER) {
					btnEntrar.doClick();
				}
			}
		});
		txfSenha.setBounds(100, 145, 400, 30);
		getContentPane().add(txfSenha);
		
		btnEntrar = new JButton(actionEntrar);
		btnEntrar.setBounds(100, 185, 400, 30);
		getContentPane().add(btnEntrar);		
	}	
	
	/*==================================================================
	 * 
	 * A��O E TRATAMENTO DA TELA (BOT�O ENTRAR) ...
	 * 
	 *=================================================================*/
	
	Action actionEntrar = new AbstractAction("ENTRAR") {
		
		@Override
		public void actionPerformed(ActionEvent e) {
			usuarioValidar();			
		}
	};
	
	private void usuarioValidar() {
		
		final String usuarioDigitado = txfUsuario.getText();
		final String senhaDigitada =  txfSenha.getText();
		
		if (usuarioDigitado.isEmpty()) {
			JOptionPane.showMessageDialog(null, "Campo usuario obrigatorio");
		}
		else if (senhaDigitada.isEmpty()) {
			JOptionPane.showMessageDialog(null, "Campo senha obrigatorio");
		}
		else {				
			
			try {
				
				Connection conexao = ConnectionFactory.getConnection("localhost", 3306, "estrutura", "root", "luuufabris");
				if (conexao != null) {
					
					UsuarioDAO dao = new UsuarioDAO(conexao);
					USUARIO user = dao.SelectWhere(usuarioDigitado, senhaDigitada);
					
					// Se encontrou o usu�rio ...
					if (user != null) {
						dispose(); // Fecha a janela atual sem encerrar o programa.
						new MenuWindow(conexao, user.getNm_usuario(), user.getTp_perfil());
					}
					else {
						JOptionPane.showMessageDialog(null, "Usuario ou senha invalida!");
					}
				}
			}
			catch (Exception ex) {
				ex.printStackTrace();
			}
		}
	}
	public static void main(String[] args) throws Exception {
		new LoginWindow().setVisible(true);		
	}
}