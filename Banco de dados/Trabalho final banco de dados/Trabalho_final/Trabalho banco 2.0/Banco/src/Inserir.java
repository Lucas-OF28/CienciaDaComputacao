import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;
import java.sql.Date;

public class Inserir extends Conexao {
    Scanner cin = new Scanner(System.in);
    String op;
    public void inserir(Connection connection){
        String sql = "";
        System.out.println("Deseja inserir em qual tabela?");
        System.out.println("1.Compra");
        System.out.println("2.Pedido");
        int opcao = cin.nextInt();
        switch(opcao){
            case 1: op = "compra";
            sql = "INSERT INTO `mercado`.`"+op+"` (`id`,`formaDePagamento`, `diaDaCompra`) VALUES (DEFAULT,?,?)";
            break;
            case 2: op = "pedido";
            sql = "INSERT INTO `mercado`.`"+op+"` (`id`,`quantidade` , `valor`, `desconto`) VALUES (DEFAULT,?,?,?)";
            break;
            default: System.out.println("opcao invalida!");
        }
        try{
            PreparedStatement stmt = connection.prepareStatement(sql);
            if(opcao == 1){
                String F_pagamento, data;
                //int id_cliente, id_caixa;
                
                //System.out.println("Informe o id do operador: ");
               // id_caixa = cin.nextInt();
                
                //System.out.println("Informe o id do cliente: ");
                //id_cliente = cin.nextInt();
               // cin.nextLine();
                
                System.out.println("Forma de pagamento: ");
                F_pagamento = cin.next();
                cin.nextLine();
                
                System.out.println("Informe a data: DD-MM-AAAA");
                data = cin.next();
                
                stmt.setString(2, data);
               // stmt.setInt(1, id_caixa);
                //stmt.setInt(2, id_cliente);
                stmt.setString(1, F_pagamento);
                stmt.execute();
                stmt.close();
                }
            	
            else if(opcao == 2){
                int quantidade;
                float valor, desconto;
                //System.out.println("Informe o id da compra: ");
               // id_compra = cin.nextInt();
                
                //System.out.println("Informe o id do produto: ");
                //id_produto = cin.nextInt();
                
                System.out.println("Informe a quantidade: ");
                quantidade = cin.nextInt();
                
                System.out.println("Valor: ");
                valor = cin.nextFloat();
                
                System.out.println("Desconto: ");
                desconto = cin.nextFloat();
                stmt.setFloat(3, desconto);
                stmt.setFloat(2, valor);
                stmt.setInt(1, quantidade);
                stmt.execute();
                stmt.close();
            }
        }catch(SQLException u){
            throw new RuntimeException(u);
        }
    }
}
