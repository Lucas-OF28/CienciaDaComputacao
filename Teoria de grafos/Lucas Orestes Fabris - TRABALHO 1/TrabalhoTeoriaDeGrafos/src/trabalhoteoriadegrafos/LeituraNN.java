package trabalhoteoriadegrafos;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class LeituraNN {

    Rotas rotas = new Rotas();

    public void ler_rota(String rota1, String rota2) {
        try {
            String linha = null, valido, aux_vetor[] = null;
            String[] nos = new String[50];
            nos[0] = null;
            boolean qtde_conexoes = false;
            int n = 1, valor = 0, pesos = 0, soma_pesos = 0, contador_conexoes = 0, contador_pesos = 0;
            File arq = new File("");
            arq = Gerar_Arq(n, arq);
            while (arq != null) {
                valor = 0;
                pesos = 0;
                char palavra[] = null, aux_palavra[] = null, p, p1 = 0;
                String aux = null;
                boolean nos_valido, soma_valida, Header_invalido = true, conexoes = true, linhas_conex = true, linhas_pesos = true, linhas_ps_cx = true, verificador, Rconex = true;
                InputStream is = new FileInputStream(arq);
                InputStreamReader isr = new InputStreamReader(is);
                BufferedReader buffer = new BufferedReader(isr);
                //linha=buffer.readLine();
                while ((linha = buffer.readLine()) != null) {
                    palavra = linha.toCharArray();
                    if (linha.startsWith("00")) {
                        valor = rotas.HeaderNN(palavra);
                        pesos = rotas.PesosNN(palavra);
                        Header_invalido = rotas.Header_Indent(palavra);
                    }
                    if (linha.startsWith("01")) {
                        contador_conexoes++;
                        aux_vetor = linha.split("01");
                        aux = aux_vetor[1];
                        aux_palavra = aux.toCharArray();
                        rotas.testar_nos(nos, aux_palavra);
                        conexoes = rotas.testa_conexoes(palavra);
                        Rconex = rotas.validar_palavra(palavra);
                        if (conexoes) {
                            qtde_conexoes = true;
                        }
                    }
                    if (linha.startsWith("02")) {
                        contador_pesos++;
                        aux_vetor = linha.split("=");
                        aux = aux_vetor[1];
                        soma_pesos = soma_pesos + Integer.parseInt(aux);
                    }
                    if (linha.startsWith("09")) {
                        linhas_conex = rotas.linhas_conexao(contador_conexoes, palavra);
                        linhas_pesos = rotas.linhas_pesos(contador_pesos, palavra);
                    }
                }

                buffer.close();
                nos_valido = rotas.contar_nos(nos, valor);
                soma_valida = verifica_soma_pesos(soma_pesos, pesos);
                verificador = verifica_arquivo(Rconex, linhas_pesos, linhas_conex, qtde_conexoes, Header_invalido, nos_valido, soma_valida, arq);
                if (verificador) {
                    Mover_Arq(arq, rota2);
                    System.out.println("Arquivo: " + arq.getName() + ", movido para não processado");
                } else {
                    Mover_Arq(arq, rota1);
                    System.out.println("Arquivo: " + arq.getName() + ", movido para processado");
                }
                n++;
                arq = Gerar_Arq(n, arq);
                contador_conexoes = 0;
                contador_pesos = 0;
                soma_pesos = 0;
                pesos = 0;
                valor = 0;
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public File Gerar_Arq(int n, File Arq) {
        if (n < 10) {
            File arq = new File("E:\\Teste\\rotas0" + n + ".txt");
            if (arq.exists()) {
                n++;
                return arq;
            }
        } else {
            File arq = new File("E:\\Teste\\rotas" + n + ".txt");
            if (arq.exists()) {
                n++;
                return arq;
            }
        }
        return Arq = null;
    }

    public void Mover_Arq(File arq, String rota) {
        arq.renameTo(new File(rota, arq.getName()));
    }

    public boolean verifica_soma_pesos(int soma, int pesos) {
        if (soma == pesos) {
            return true;
        } else {
            return false;
        }
    }

    public boolean verifica_arquivo(boolean Rconex, boolean linhas_pesos, boolean linhas_conex, boolean qtde_conexoes, boolean Header_invalido, boolean nos_valido, boolean soma_valida, File arq) {
        if (!Rconex) {
            System.out.println("Arquivo: " + arq.getName() + ", Resumo de conexões inválido. ");
        }
        if (linhas_pesos) {
            System.out.println("Arquivo: " + arq.getName() + ", Número de linhas de pesos difeente da quantidade do Trailer");
        }
        if (linhas_conex) {
            System.out.println("Arquivo: " + arq.getName() + ", Número de linhas de conexões difeente da quantidade do Trailer");
        }
        if (Header_invalido) {
            System.out.println("Arquivo: " + arq.getName() + ", Header inválido.");
        }
        if (!nos_valido) {
            System.out.println("Arquivo: " + arq.getName() + ", Número totais de nós inválido.");
        }
        if (!soma_valida) {
            System.out.println("Arquivo: " + arq.getName() + ", Soma dos pesos diferente, valor do Header e soma do pesos.");
        }
        if (linhas_pesos || linhas_conex || !Rconex || Header_invalido || !nos_valido || !soma_valida) {
            return true;
        } else {
            return false;
        }
    }
}
