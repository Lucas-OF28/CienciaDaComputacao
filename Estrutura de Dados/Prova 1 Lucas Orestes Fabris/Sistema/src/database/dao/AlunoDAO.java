package database.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import database.model.ALUNO;

public class AlunoDAO extends AbstractDAO {
	
	private final String is_select = "select * from tb_aluno";
	
	// Comandos novos de SELECT.
	private final String is_selectNome = "select * from tb_aluno where nome like ?";
	private final String is_selectCPF = "select * from tb_aluno where cpf = ?";
	private final String is_selectNomeCPF = "select * from tb_aluno where nome like ? and cpf = ?";
	
	private final String is_insert = "insert into tb_aluno(id, nome, cpf, idade) values (DEFAULT, ?, ?, ?)";
	
	private final PreparedStatement pstSelect;
	private final PreparedStatement pstSelectNome;
	private final PreparedStatement pstSelectCPF;
	private final PreparedStatement pstSelectNomeCPF;
	private final PreparedStatement pstInsert;
	
	public AlunoDAO(Connection conexao) throws SQLException {
		pstSelect = conexao.prepareStatement(is_select);
		pstSelectNome = conexao.prepareStatement(is_selectNome);
		pstSelectCPF = conexao.prepareStatement(is_selectCPF);
		pstSelectNomeCPF = conexao.prepareStatement(is_selectNomeCPF);
		pstInsert = conexao.prepareStatement(is_insert);
	}
	
	
	public List<ALUNO> SelectNome(final String nome) throws SQLException {
		
		List<ALUNO> lista = new ArrayList<ALUNO>();
		
		pstSelectNome.setString(1, "%"+nome+"%");
		ResultSet resultado = pstSelectNome.executeQuery();
		
		if (resultado != null) {			
			while (resultado.next()) {				
				ALUNO a = new ALUNO(resultado.getString("nome"), resultado.getString("cpf"));
				a.setId(resultado.getInt("id"));
				a.setIdade(resultado.getInt("idade"));
				lista.add(a);
			}			
		}
		
		resultado.close();
		return lista;
	}
	
	public List<ALUNO> SelectCPF(final String cpf) throws SQLException {
		
		List<ALUNO> lista = new ArrayList<ALUNO>();
		
		pstSelectCPF.setString(1, cpf);
		ResultSet resultado = pstSelectCPF.executeQuery();
		
		if (resultado != null) {			
			while (resultado.next()) {				
				ALUNO a = new ALUNO(resultado.getString("nome"), resultado.getString("cpf"));
				a.setId(resultado.getInt("id"));
				a.setIdade(resultado.getInt("idade"));
				lista.add(a);
			}			
		}
		
		resultado.close();
		return lista;
	}
	
	public List<ALUNO> SelectNomeCPF(final String nome, final String CPF) throws SQLException {
		
		List<ALUNO> lista = new ArrayList<ALUNO>();
		
		pstSelectNomeCPF.setString(1, "%"+nome+"%");
		pstSelectNomeCPF.setString(2, CPF);
		ResultSet resultado = pstSelectNomeCPF.executeQuery();
		
		if (resultado != null) {			
			while (resultado.next()) {				
				ALUNO a = new ALUNO(resultado.getString("nome"), resultado.getString("cpf"));
				a.setId(resultado.getInt("id"));
				a.setIdade(resultado.getInt("idade"));
				lista.add(a);
			}			
		}
		
		resultado.close();
		return lista;
	}
	
	
	@Override
	public List<Object> Select() throws SQLException {
		
		List<Object> lista = new ArrayList<Object>();
		
		ResultSet resultado = pstSelect.executeQuery();
		if (resultado != null) {			
			while (resultado.next()) {				
				ALUNO a = new ALUNO(resultado.getString("nome"), resultado.getString("cpf"));
				a.setId(resultado.getInt("id"));
				a.setIdade(resultado.getInt("idade"));
				lista.add(a);
			}			
		}
		
		resultado.close();		
		return lista;
	}

	@Override
	public void Insert(Object parametro) throws SQLException {
		
		pstInsert.clearParameters();
		
		ALUNO aluno = (ALUNO)parametro;
		
		pstInsert.setString(1, aluno.getNome());
		pstInsert.setString(2, aluno.getCpf());
		pstInsert.setInt(3, aluno.getIdade());
		
		pstInsert.execute();
	}

	@Override
	public void Update(Object parametro) throws SQLException {
		
	}

	@Override
	public void Delete(Object parametro) throws SQLException {
		
	}

}




