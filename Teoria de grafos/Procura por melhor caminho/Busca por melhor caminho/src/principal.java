import java.security.InvalidAlgorithmParameterException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class principal {
	
	private static final int INDEFINIDO = -1;
	private int vertices[][];
	
	public principal(final int numVertices) {
		vertices = new int[numVertices][numVertices];
	}

	public void criaAresta(final int noOrigem, final int noDestino, final int peso) throws InvalidAlgorithmParameterException {
		
		if (peso >= 0) {
			vertices[noOrigem][noDestino] = peso;
			vertices[noDestino][noOrigem] = peso;	
		}
		else {
			throw new InvalidAlgorithmParameterException("O peso do no origem ["+noOrigem+"] para o no destino ["+noDestino+"] não pode ser negativo ["+peso+"]");
		}
	}
	
	public int getCusto(final int noOrigem, final int noDestino) {
		
		int custo = 0;
		if (noOrigem > vertices.length) {
			throw new ArrayIndexOutOfBoundsException("No origem ["+noOrigem+"] não existe no grafo");
		}
		else if (noDestino > vertices.length) {
			throw new ArrayIndexOutOfBoundsException("No destino ["+noDestino+"] não existe no grafo");
		}
		else {
			custo = vertices[noOrigem][noDestino];
		}
		
		return custo;
	}
	
	public List<Integer> getVizinhos(final int no) {
		List<Integer> vizinhos = new ArrayList<Integer>();
		for (int i = 0; i < vertices[no].length; i++) {
			if (vertices[no][i] > 0) {
				vizinhos.add(i);
			}
		}
		return vizinhos;
	}
	
	public int getMaisProximo(final int listaCusto[], final Set<Integer> listaNaoVisitados) {
		
		double minDistancia = Integer.MAX_VALUE;
		int noProximo = 0;
		for (Integer i : listaNaoVisitados) {
			if (listaCusto[i] < minDistancia) {
				minDistancia = listaCusto[i];
				noProximo = i;
			}
		}
		return noProximo;
	}
	public List<Integer> caminhoMinimo(final int noOrigem, final int noDestino) {
		
		int custo[] = new int[vertices.length];
		int antecessor[] = new int[vertices.length];
		Set<Integer> naoVisitados = new HashSet<Integer>();
		
		custo[noOrigem] = 0;
		
		for (int v = 0; v < vertices.length; v++) {
			if (v != noOrigem) {
				custo[v] = Integer.MAX_VALUE;
			}
			antecessor[v] = INDEFINIDO;
			naoVisitados.add(v);
		}
		
		while (!naoVisitados.isEmpty()) {
			
			int noMaisProximo = getMaisProximo(custo, naoVisitados);

			naoVisitados.remove(noMaisProximo);
			for (Integer vizinho : getVizinhos(noMaisProximo)) {
				int custoTotal = custo[noMaisProximo] + getCusto(noMaisProximo, vizinho);
				if (custoTotal < custo[vizinho]) {
					custo[vizinho] = custoTotal;
					antecessor[vizinho] = noMaisProximo;
				}
			}
			if (noMaisProximo == noDestino) {
				return caminhoMaisProximo(antecessor, noMaisProximo);
			}
		}
		return Collections.emptyList();
	}
	private List<Integer> caminhoMaisProximo(final int antecessor[], int noMaisProximo) {
		List<Integer> caminho = new ArrayList<Integer>();
		caminho.add(noMaisProximo);
		while (antecessor[noMaisProximo] != INDEFINIDO) {
			caminho.add(antecessor[noMaisProximo]);
			noMaisProximo = antecessor[noMaisProximo];
		}
		Collections.reverse(caminho);
		return caminho;
	}
	public static void main(String[] args) {
		principal g = new principal(20);
		try {
			g.criaAresta(1, 2, 30);
			g.criaAresta(1, 3, 0);
			g.criaAresta(1, 4, 50);
			g.criaAresta(2, 1, 30);
			g.criaAresta(2, 3, 50);
			g.criaAresta(2, 4, 80);
			g.criaAresta(3, 1, 0);
			g.criaAresta(3, 2, 50);
			g.criaAresta(3, 4, 15);
			g.criaAresta(4, 1, 50);
			g.criaAresta(4, 2, 80);
			g.criaAresta(4, 3, 15);
			
			System.out.println(g.caminhoMinimo(1, 3));
		}
		catch (Exception e) {
			e.printStackTrace();
	
		}
	}

}