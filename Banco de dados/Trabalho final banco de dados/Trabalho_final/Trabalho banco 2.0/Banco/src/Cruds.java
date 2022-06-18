public class Cruds extends Conexao{
    Listar L = new Listar();
    Inserir I = new Inserir();
    Deletar D = new Deletar();
    Update U = new Update();
    
    public void listar(){
        L.listar(connection);
    }
    public void inserir(){
        I.inserir(connection);
    }
    public void deletar(){
        D.deletar(connection);
    }  
    public void update(){
        U.update(connection);
    }
}
