public class Main {
    public static void main(String args[]){
        Cruds c = new Cruds();
        Menu m = new Menu();
        int opcao=1;
        c.getConnection();
        do{
            opcao = m.menu();
            switch(opcao){
                case 0: break;
                case 1: c.listar();break;
                case 2: c.inserir();break;
                case 3: c.deletar();break;
                case 4: c.update();break;
                default: System.out.println("Comando invalido!");
            }
        }while(opcao != 0);
        c.fecharConexao();
    }
}
