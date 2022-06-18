import java.sql.Connection;
import java.sql.Date;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

public class Listar extends Conexao{
    Scanner cin = new Scanner(System.in);
    String op;
    
        public void listar(Connection connection){
        System.out.println("Qual tabela deseja listar? ");
        System.out.println("1.Compra");
        System.out.println("2.Pedido");
        int opcao = cin.nextInt();
        switch(opcao){
            case 1: op = "Compra";break;
            case 2: op = "Pedido";break;
            default: System.out.println("opcao invalida!");
        }
        String qry = "select * from "+op;
        try{
            Statement st = connection.createStatement();
            ResultSet rs = st.executeQuery(qry);
            while (rs.next()){
                if(opcao == 1){
                    int id = rs.getInt("id");
                   //int id_cliente = rs.getInt("Cliente_idCliente");
                   // int id_caixa = rs.getInt("Caixa_idCaixa");
                    String F_pagamento = rs.getString("formaDePagamento");
                    String data = rs.getString("diaDaCompra");
                    System.out.println("id da compra: " + id);
                    System.out.println("diaDaCompra: " + data);
                   // System.out.println("id do cliente: " + id_cliente);
                   // System.out.println("id do operador: " + id_caixa);
                    System.out.println("Forma de Pagamento: " + F_pagamento + "\n");
                    }
                
                else if(opcao == 2){
                   // int id_compra = rs.getInt("Compra_id");
                   // int id_produto = rs.getInt("Produto_idProduto");
                    int quantidade = rs.getInt("Quantidade");
                    float valor = rs.getFloat("Valor");
                    float desconto = rs.getFloat("Desconto");
                   // System.out.println("id da compra: " + id_compra);
                   // System.out.println("id do produto: " + id_produto);
                    System.out.println("Quantidade: " + quantidade);
                    System.out.println("Valor: " + valor);
                    System.out.println("Desconto: " + desconto + "\n");
                }
            }
            System.out.println("\n");
        }catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}
