public class Pizza {
    public String  getSabor(){
        return "portuguesa";
    }
    public String getTipoBorda(){
        return "catupiry";
    }
    public int getNumeroFatias(){
        return 4;
    }
    public void montarPizza(){
        System.out.println("Pizza sabor " + getSabor() + "com borda de " + getTipoBorda());
    }
}