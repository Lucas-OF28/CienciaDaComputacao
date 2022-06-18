import java.util.Scanner;



public class Menu {
    public int menu(){
        Scanner cin = new Scanner(System.in);
        int opcao;
        System.out.println("_____________________");
        System.out.println("Menu");
        System.out.println("_____________________");
        System.out.println("1.Listar");
        System.out.println("2.Inserir");
        System.out.println("3.Deletar");
        System.out.println("4.Atualizar");
        System.out.println("0.Sair");
        System.out.println(" ");
        opcao = cin.nextInt();
        System.out.println("______________________");
        return opcao;
    }
}
