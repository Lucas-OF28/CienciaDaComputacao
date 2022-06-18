
import java.sql.Connection;
import java.sql.Statement;
import java.util.Scanner;

public class Deletar extends Conexao{
    Scanner cin = new Scanner(System.in);
    String op;
    
    public void deletar(Connection connection){
        String sql = "";
        int id;
        System.out.println("Deseja deletar em qual tabela?");
        System.out.println("1.Compra");
        System.out.println("2.Pedido");
        int opcao = cin.nextInt();
        
        switch(opcao){
            case 1: op = "Compra";break;
            case 2: op = "Pedido";break;
            default: System.out.println("Opcao invalida!");
        }
        
        try{
            if(opcao == 1){
                System.out.println("Informe o id a ser excluido: ");
                id = cin.nextInt();
                String qry = "DELETE FROM `mercado`.`compra` WHERE (`id` = '"+id+"');";
                Statement st = connection.createStatement();
                int delete = st.executeUpdate(qry);
            }
            else if(opcao == 2){
                System.out.println("Informe o id do pedido a ser excluido: ");
                id = cin.nextInt();
                String qry = "DELETE FROM `mercado`.`pedido` WHERE (`id` = '"+id+"');";
                Statement st = connection.createStatement();
                int delete = st.executeUpdate(qry);
            }
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
}
