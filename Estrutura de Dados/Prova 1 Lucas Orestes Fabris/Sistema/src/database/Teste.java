package database;

import java.sql.Connection;
import java.sql.SQLException;
import java.util.List;

import database.dao.AlunoDAO;
import database.model.ALUNO;

public class Teste {

	public static void main(String[] args) {

		try {
			Connection conexao = ConnectionFactory.getConnection("localhost", 3306, "estrutura", "root", "luuufabris");
			if (conexao != null) {
				System.out.println("Conectado com sucesso");
				
				AlunoDAO dao = new AlunoDAO(conexao);
				
				List<ALUNO> lista = dao.SelectNomeCPF("Matheus", "123456");
				for (int i = 0; i < lista.size(); i++) {
					ALUNO aluno = lista.get(i);
					System.out.println("Aluno: "+aluno.getNome());
				}
				
				
				/*List<Object> listaAluno = dao.Select();
				for (int i = 0; i < listaAluno.size(); i++) {
					ALUNO aluno = (ALUNO)listaAluno.get(i);
					System.out.println("Aluno: "+aluno.getNome());
				}*/
				
			}
			else {
				System.out.println("Não conectado");
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}

	}

}
