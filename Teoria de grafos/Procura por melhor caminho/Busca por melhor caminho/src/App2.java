import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class App2 {

    private JMenuBar barraMenu;
    private JMenu MenuSistema;
    private JMenu MenuRota;
    private JMenuItem itemSistemaSair;
    private JMenuItem itemSistemaConfiguracao;
    private JMenuItem itemRotaBusca;
    private JFrame frame;


    public App2() {
        criaMenu();
    }
    private void criaMenu() {
        barraMenu = new JMenuBar();

        MenuSistema = new JMenu("Sistema");
        itemSistemaConfiguracao = new JMenuItem("Configuração");
        itemSistemaConfiguracao.addActionListener(new ActionListener(){
            @Override
			public void actionPerformed(ActionEvent e) {
                new Configuracao().setVisible(true);
			}
        });

        itemSistemaSair = new JMenuItem("Sair");
        itemSistemaSair.addActionListener(new ActionListener() {
            @Override
			public void actionPerformed(ActionEvent e) {
                System.exit(0);
			}
        });

        MenuSistema.add(itemSistemaConfiguracao);
        MenuSistema.addSeparator();
        MenuSistema.add(itemSistemaSair);

        MenuRota = new JMenu("Rotas");
        itemRotaBusca = new JMenuItem("Busca menor caminho");
        MenuRota.add(itemRotaBusca);

        itemRotaBusca.addActionListener(new ActionListener() {
            @Override
			public void actionPerformed(ActionEvent e) {
                new MenorCaminho().setVisible(true);
			}
        });

        barraMenu.add(MenuSistema);
        barraMenu.add(MenuRota);

        frame = new JFrame("Sistema de rota");
        frame.setSize(1000, 600);
        frame.setJMenuBar(barraMenu);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        new App2();
    }
}
