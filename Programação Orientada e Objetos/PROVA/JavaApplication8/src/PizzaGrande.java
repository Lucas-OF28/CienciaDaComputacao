public class PizzaGrande extends Pizza{
    
    public String getSabor(){
        return "calabresa";
}
    public int getNumeroFatias(){
        return super.getNumeroFatias()* 2;
    }
}