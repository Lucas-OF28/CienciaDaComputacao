
public class TestarAviao {
    
    public static void main (String Args[]){
        
         
        Aviao avi = new Aviao(); 
        avi.nrPassageiros = 10;
        avi.velocidadeAtual = 600;
        
        avi.informarPassageiros();
        avi.acelerar();
        avi.mostrarDados();
        
    }   
}
