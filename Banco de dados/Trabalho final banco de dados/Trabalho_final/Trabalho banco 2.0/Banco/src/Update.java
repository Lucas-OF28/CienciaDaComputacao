import java.sql.Connection;
import java.sql.Statement;
import java.util.Scanner;

public class Update {
    Scanner cin = new Scanner(System.in);
    String op;
    public void update(Connection connection){
        System.out.println("Qual tabela deseja atualizar? ");
        System.out.println("1.Compra");
        System.out.println("2.Pedido");
        int opcao = cin.nextInt();
        switch(opcao){
            case 1: op = "Compra";break;
            case 2: op = "Pedido";break;
            default: System.out.println("Opcao invalida!");
        }
        try{
            String qry = "";
            if(opcao == 1){
                String F_pagamento, data;
                int id_cliente, id_caixa, id;
                System.out.println("Informe o id da compra: ");
                id = cin.nextInt();
                //System.out.println("Informe o id do operador: ");
                //id_caixa = cin.nextInt();
               // System.out.println("Informe o id do cliente: ");
               //id_cliente = cin.nextInt();
                cin.nextLine();
                System.out.println("Forma de pagamento: ");
                F_pagamento = cin.next();
                System.out.println("Informe a data: DD/MM/AAAA");
                data = cin.next();
                qry = "UPDATE `mercado`.`"+op+"` SET `formaDePagamento` = '"+F_pagamento+
                        "', `diaDaCompra` = '"+data+"' WHERE (`id` = '"+id+"');";
            }
            else if(opcao == 2) {
            	int quantidade, id;
            	float valor, desconto;
            	
            	System.out.println("Informe o id da mudança: ");
                id = cin.nextInt();
                
            	System.out.println("Informe a quantidade: ");
                quantidade = cin.nextInt();
                cin.nextLine();
                
                System.out.println("Valor: ");
                valor = cin.nextFloat();
                
                System.out.println("Desconto");
                desconto = cin.nextFloat();
                qry = "UPDATE `mercado`.`"+op+"` SET `quantidade` = '"+quantidade+
                        "', `valor` = '"+valor+"', `desconto` = '"+desconto+"' WHERE (`id` = '"+id+"');";
            }
            Statement st = connection.createStatement();
            int update = st.executeUpdate(qry);
        }catch(Exception e){
            System.out.println(e.getMessage()); 
        }
    }
}
