import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
import java.beans.PropertyVetoException;
import java.sql.Connection;
import java.util.HashMap;

import javax.swing.AbstractAction;
import javax.swing.ImageIcon;
import javax.swing.JDesktopPane;
import javax.swing.JFrame;
import javax.swing.JInternalFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

public class MenuWindow {
	
	private JMenuBar barraMenu;	
	private JMenu menuSistema;
	private JMenu menuCadastro;
	private JMenuItem itemSistemaSair;
	private JMenuItem itemCadastroAluno;	
	private JMenuItem itemCadastroModalidade;
	private JMenuItem itemSistemaUsuario;
	private JFrame frame;
	private JDesktopPane desktop;
	private CadastroAluno cadAlu;
	private CadastroModalidade cadMod;
	private SistemaUsuario sisUsua;
	
	public static HashMap<Integer, String> hmpPerfil = new HashMap<Integer, String>();
	{
		hmpPerfil.put(0, "Administrador");
		hmpPerfil.put(1, "Cadastral");
		hmpPerfil.put(2, "Financeiro");		
	};
	
	public MenuWindow(final Connection conexao, final String nm_usuario, final int tp_perfil) {
		
		barraMenu = new JMenuBar();
		
		menuSistema = new JMenu("Sistema");
		
		itemSistemaUsuario = new JMenuItem(new AbstractAction("Usuario") {
			@Override
			public void actionPerformed(ActionEvent e) {
				if (janelaVerificar("SistemaUsuario")) {
					try {
						sisUsua.setSelected(true);
					} catch (PropertyVetoException e1) {
						e1.printStackTrace();
					}
				}
				else {					
					sisUsua = new SistemaUsuario(conexao);
					sisUsua.setName("SistemaUsuario");					
					desktop.add(sisUsua);
				}					
			}
		});
		menuSistema.add(itemSistemaUsuario);
		menuSistema.addSeparator();
		
		itemSistemaSair = new JMenuItem(new AbstractAction("Sair") {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				System.exit(0);
			}
		});
		menuSistema.add(itemSistemaSair);
		
		menuCadastro = new JMenu("Cadastro");
		itemCadastroAluno = new JMenuItem(new AbstractAction("Aluno") {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				
				if (janelaVerificar("CadastroAluno")) {
					try {
						cadAlu.setSelected(true);
					} catch (PropertyVetoException e1) {
						e1.printStackTrace();
					}
				}
				else {					
					cadAlu = new CadastroAluno(conexao);
					cadAlu.setName("CadastroAluno");					
					desktop.add(cadAlu);
				}					
			}
		});
		menuCadastro.add(itemCadastroAluno);
		
		itemCadastroModalidade = new JMenuItem(new AbstractAction("Modalidade") {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				
				if (janelaVerificar("CadastroModalidade")) {
					try {
						cadMod.setSelected(true);
					} catch (PropertyVetoException e1) {
						e1.printStackTrace();
					}
				}
				else {					
					cadMod = new CadastroModalidade(conexao);
					cadMod.setName("CadastroModalidade");					
					desktop.add(cadMod);
				}					
			}
		});
		if(tp_perfil != 2) {
			menuCadastro.add(itemCadastroModalidade);
		}
		
		barraMenu.add(menuSistema);
		barraMenu.add(menuCadastro);
		
		frame = new JFrame("Sistema para controle de Alunos - v.2021-05-18 - Conectado com usuario "+nm_usuario+" de perfil "+hmpPerfil.get(tp_perfil));
		frame.setSize(1000,600);
		frame.setJMenuBar(barraMenu);		
		frame.getContentPane().add(criaDesktop());
		frame.setLocationRelativeTo(null);
		frame.addWindowListener(new WindowAdapter() {
			
			@Override
			public void windowClosing(WindowEvent e) {
				
				int opcao = JOptionPane.showConfirmDialog(null, "Deseja realmente sair do programa?", "Fechar o Programa?", JOptionPane.YES_NO_OPTION);
				if (opcao == JOptionPane.YES_OPTION) {
					System.exit(0);
				}
				else {
					frame.setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
				}
			}
			
		});
		frame.setVisible(true);		
	}
	
	private Container criaDesktop() {		
		desktop = new JDesktopPane()
		{
			Image img = new ImageIcon("background.jpg").getImage();
			
			@Override
			protected void paintComponent(Graphics g) {
				g.drawImage(img, 0, 0, this);
			}
		};
		
		JPanel panel = new JPanel(new BorderLayout());
		panel.setOpaque(true);		
		panel.add(desktop);
		
		return panel;
	}
	
	private boolean janelaVerificar(final String nome) {
		
		JInternalFrame[] janelas = desktop.getAllFrames();
		for (JInternalFrame janela : janelas) {
			if (janela.getName().equalsIgnoreCase(nome)) {
				return true;
			}
		}
		
		return false;
	}
}