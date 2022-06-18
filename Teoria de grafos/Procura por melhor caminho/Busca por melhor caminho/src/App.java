import java.awt.AWTException;
import java.awt.MenuItem;
import java.awt.PopupMenu;
import java.awt.SystemTray;
import java.awt.TrayIcon;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;

public class App {
    public App() {
        createTrayIcon();
    }

    private void createTrayIcon() {
        PopupMenu popupMenu = new PopupMenu();

        TrayIcon tray = new TrayIcon(new ImageIcon("Icon.jpg").getImage());

        MenuItem Configuracao = new MenuItem("Configuração");
        MenuItem Visivel = new MenuItem("Visível");
        MenuItem Sair = new MenuItem("Sair");

        Configuracao.addActionListener(new ActionListener(){
            @Override
			public void actionPerformed(ActionEvent e) {
                new Configuracao().setVisible(true);
			}
        });

        Visivel.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
                new MenorCaminho().setVisible(true);
			}
		});

        Sair.addActionListener(new ActionListener() {
            @Override
			public void actionPerformed(ActionEvent e) {
                System.exit(0);
			}
        });

        popupMenu.add(Configuracao);
        popupMenu.add(Visivel);
        popupMenu.add(Sair);

        tray.setPopupMenu(popupMenu);
        tray.setToolTip("Macaco");

        SystemTray systemTray = SystemTray.getSystemTray();

        try {
            systemTray.add(tray);
        } catch (AWTException e) {
            JOptionPane.showMessageDialog(null, "Problemas ao criar o tray no sistema operacional");
        }
    }

    public static void main(String[] args) throws Exception {
        new App();
    }
}
