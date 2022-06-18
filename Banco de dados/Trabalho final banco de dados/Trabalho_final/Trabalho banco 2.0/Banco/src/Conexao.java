import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class Conexao {
    private String host="127.0.0.100:3306";
    private String banco="mercado";
    private String usuario="root";
    private String senha="luuufabris";
    private String URL="jdbc:mysql://"+host+"/"+banco+"?useTimezone=true&serverTimezone=UTC";
    public Connection connection;
    
    public Connection getConnection(){
        try{
        	System.out.println(URL);
        	connection = DriverManager.getConnection(URL,usuario,senha);
        	
        } catch(SQLException e){
            System.out.println(e.getMessage());
        }
        if(connection==null){
           System.out.println("Não foi possivel realizar a conexão!;(");
        }
        else{
        System.out.println("Conectado com sucesso!!");
        }
        return connection;
    }
        public Connection fecharConexao(){
        try{
        connection.close();
        } catch(Exception e){
            System.out.println(e.getMessage());
        }
        return connection;
    }
}