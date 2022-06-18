package trabalhoteoriadegrafos;

public class Main {
   
    public static void main(String[] args) {
        Leitura leitura = new Leitura();
        LeituraNN leiturann = new LeituraNN();

        leitura.ler_config();
        leiturann.ler_rota(leitura.get_dir1(), leitura.get_dir2());   
}
}