import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.table.DefaultTableModel;
import javax.swing.AbstractAction;
import java.awt.event.ActionEvent;
import java.security.InvalidAlgorithmParameterException;

public class MenorCaminho extends JFrame {

    private JTextField campoBuscar;
    private JTextField campoCodigoOrigem;
    private JTextField campoCidadeOrigem;
    private JTextField campoCodigoDestino;
    private JTextField campoCidadeDestino;
    private JTextField campoKM;
    private JLabel labelBuscar;
    private JLabel labelCodigoOrigem;
    private JLabel labelCidadeOrigem;
    private JLabel labelCodigoDestino;
    private JLabel labelCidadeDestino;
    private JLabel labelKM;
    private JButton botaoBuscar;
    private JButton botaoSalvar;
    private JButton botaoAdicionar;
    private JButton botaoProcessar;
    private JTable table;
    private JScrollPane barraRolagem;
    private DefaultTableModel modelo;

    public MenorCaminho() {
        setSize(500, 500);
        setLayout(null);
        componentes();
        setVisible(true);
        setLocationRelativeTo(null);
    }

    private void componentes() {
        campoBuscar = new JTextField();
        campoBuscar.setBounds(120, 10, 200, 20);
        getContentPane().add(campoBuscar);

        labelBuscar = new JLabel();
        labelBuscar.setBounds(10, 10, 100, 20);
        labelBuscar.setText("Buscar:");
        getContentPane().add(labelBuscar);

        campoCodigoOrigem = new JTextField();
        campoCodigoOrigem.setBounds(120, 40, 100, 20);
        getContentPane().add(campoCodigoOrigem);

        labelCodigoOrigem = new JLabel();
        labelCodigoOrigem.setBounds(10, 40, 100, 20);
        labelCodigoOrigem.setText("Código origem:");
        getContentPane().add(labelCodigoOrigem);

        campoCidadeOrigem = new JTextField();
        campoCidadeOrigem.setBounds(340, 40, 100, 20);
        getContentPane().add(campoCidadeOrigem);

        labelCidadeOrigem = new JLabel();
        labelCidadeOrigem.setBounds(230, 40, 100, 20);
        labelCidadeOrigem.setText("Cidade origem:");
        getContentPane().add(labelCidadeOrigem);

        campoCodigoDestino = new JTextField();
        campoCodigoDestino.setBounds(120, 70, 100, 20);
        getContentPane().add(campoCodigoDestino);

        labelCodigoDestino = new JLabel();
        labelCodigoDestino.setBounds(10, 70, 100, 20);
        labelCodigoDestino.setText("Código destino:");
        getContentPane().add(labelCodigoDestino);

        campoCidadeDestino = new JTextField();
        campoCidadeDestino.setBounds(340, 70, 100, 20);
        getContentPane().add(campoCidadeDestino);

        labelCidadeDestino = new JLabel();
        labelCidadeDestino.setBounds(230, 70, 100, 20);
        labelCidadeDestino.setText("Cidade destino");
        getContentPane().add(labelCidadeDestino);

        campoKM = new JTextField();
        campoKM.setBounds(120, 100, 50, 20);
        getContentPane().add(campoKM);

        labelKM = new JLabel();
        labelKM.setBounds(10, 100, 100, 20);
        labelKM.setText("KM:");
        getContentPane().add(labelKM);

        botaoSalvar = new JButton("Salvar");
        botaoSalvar.setBounds(260, 430, 100, 20);
        getContentPane().add(botaoSalvar);

        
        botaoBuscar = new JButton("Buscar");
        botaoBuscar.setBounds(330, 10, 100, 20);
        getContentPane().add(botaoBuscar);
        
        botaoAdicionar = new JButton(new AbstractAction("+") {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (campoCodigoOrigem.getText().isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Campo codigo origem obrigatorio");
                } else if (campoCidadeOrigem.getText().isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Campo cidade origem obrigatorio");
                } else if (campoCodigoDestino.getText().isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Campo codigo destino obrigatorio");
                } else if (campoCidadeDestino.getText().isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Campo cidade destino obrigatorio");
                } else if (campoKM.getText().isEmpty()) {
                    JOptionPane.showMessageDialog(null, "Campo KM obrigatorio");
                } else {
                    modelo.addRow(new String[] { campoCodigoOrigem.getText(), campoCidadeOrigem.getText(),
                        campoCodigoDestino.getText(), campoCidadeDestino.getText(), campoKM.getText() });
                    }
                    
                }
            });
            botaoAdicionar.setBounds(400, 100, 50, 20);
            getContentPane().add(botaoAdicionar);
            
            modelo = new DefaultTableModel();
            modelo.addColumn("Código Origem");
            modelo.addColumn("Cidade Origem");
            modelo.addColumn("Código Destino");
            modelo.addColumn("Cidade Destino");
            modelo.addColumn("Distância");
            
            table = new JTable(modelo);
            barraRolagem = new JScrollPane(table);
            barraRolagem.setBounds(10, 130, 470, 280);
            getContentPane().add(barraRolagem);

            botaoProcessar = new JButton(new AbstractAction("Processar") {
                
                public void actionPerformed(ActionEvent e) {
                    principal g = new principal(table.getRowCount() + 2);
    
                    for (int i = 0; i < table.getRowCount(); i++) {
                        try{
                            g.criaAresta(Integer.parseInt(table.getValueAt(i, 0).toString()), Integer.parseInt(table.getValueAt(i, 2).toString()), Integer.parseInt(table.getValueAt(i, 4).toString()));
                        } catch (NumberFormatException e1) {
                            e1.printStackTrace();
                        } catch (InvalidAlgorithmParameterException e1) {
                            e1.printStackTrace();
                        }
                    }
                    System.out.println(g.caminhoMinimo(1, 2));
                }
            });
            botaoProcessar.setBounds(370, 430, 100, 20);
            getContentPane().add(botaoProcessar);
    }

    public static void main(String[] args) {
        new MenorCaminho();
    }
}
