import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Configuracao extends JFrame{

    private JTextField campoPasta;
    private JTextField campoSucesso;
    private JTextField campoErro;
    private JLabel labelPasta;
    private JLabel labelSucesso;
    private JLabel labelErro;
    private JLabel labelrota;
    private JButton botaoSalvar;
    private JCheckBox rotaAutomatica;

    public Configuracao() {
        componentes();
        setLayout(null);
        setSize(250, 200);
        setVisible(true);
        setLocationRelativeTo(null);
    }

    public void componentes(){
        campoPasta = new JTextField();
        campoPasta.setBounds(90, 10, 120, 20);
        getContentPane().add(campoPasta);

        labelPasta = new JLabel();
        labelPasta.setBounds(10, 10, 80, 20);
        labelPasta.setText("Pasta:");
        getContentPane().add(labelPasta);

        campoSucesso = new JTextField();
        campoSucesso.setBounds(90, 40, 70, 20);
        getContentPane().add(campoSucesso);

        labelSucesso = new JLabel();
        labelSucesso.setBounds(10, 40, 80, 20);
        labelSucesso.setText("Sucesso:");
        getContentPane().add(labelSucesso);

        campoErro = new JTextField();
        campoErro.setBounds(90, 70, 70, 20);
        getContentPane().add(campoErro);

        labelErro = new JLabel();
        labelErro.setBounds(10, 70, 80, 20);
        labelErro.setText("Erro:");
        getContentPane().add(labelErro);

        rotaAutomatica = new JCheckBox();
        rotaAutomatica.setBounds(90, 100, 20, 20);
        getContentPane().add(rotaAutomatica);

        labelrota = new JLabel();
        labelrota.setBounds(120, 100, 100, 20);
        labelrota.setText("Rota automática");
        getContentPane().add(labelrota);

        botaoSalvar = new JButton("Salvar");
        botaoSalvar.setBounds(75, 130, 100, 20);
        getContentPane().add(botaoSalvar);
    }

    public static void main(String[] args) {
        new Configuracao();
    }
}
