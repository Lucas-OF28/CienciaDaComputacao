package database.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;
import database.model.Modalidade;
import database.model.USUARIO;

public class ModalidadeDAO extends AbstractDAO {
	
	private final String is_select = "select * from tb_graduacao";
	
	// Comandos novos de SELECT.
	private final String is_selectGraduacao = "select * from tb_graduacao where graduacao like ?";
	private final String is_selectModalidade = "select * from tb_graduacao where modalidade like ?";
	private final String is_deleteModalidade = "delete from tb_graduacao where modalidade like ?";
	private final String is_insert = "insert into tb_graduacao(id, graduacao, modalidade) values (DEFAULT, ?, ?)";
	private final String is_delete = "delete from tb_graduacao where id = ?";
	
	private final PreparedStatement pstSelect;
	private final PreparedStatement pstSelectGraduacao;
	private final PreparedStatement pstSelectModalidade;
	private final PreparedStatement pstDeleteModalidade;
	private final PreparedStatement pstDelete;
	private final PreparedStatement pstSelectCd;
	private final PreparedStatement pstInsert;
	
	public ModalidadeDAO(Connection conexao) throws SQLException {
		pstSelect = conexao.prepareStatement(is_select);
		pstSelectModalidade = conexao.prepareStatement(is_selectModalidade);
		pstSelectGraduacao = conexao.prepareStatement(is_selectGraduacao);
		pstDeleteModalidade = conexao.prepareStatement(is_deleteModalidade);
		pstDelete = conexao.prepareStatement(is_delete);
		pstSelectCd = conexao.prepareStatement(is_deleteModalidade);
		pstInsert = conexao.prepareStatement(is_insert);
	}
	
	
	public List<Object> SelectModalidade(final String modalidade) throws SQLException {
		
		List<Object> lista = new ArrayList<Object>();
		if(modalidade.equals("")) {
			JOptionPane.showMessageDialog(null, "Informe a modalidade");
			return lista;
		
		}
		
		else {
			pstSelectModalidade.setString(1, "%"+modalidade+"%");
			ResultSet resultado = pstSelectModalidade.executeQuery();
			if (resultado != null) {
				while (resultado.next()) {	
					Modalidade m = new Modalidade();
					if(modalidade.toString().equals(resultado.getString("modalidade"))) {
						m.setId(resultado.getInt("id"));
						m.set_modalidade(resultado.getString("modalidade"));
						m.set_graduacao(resultado.getString("graduacao"));
						lista.add(m);
					}
				}	
				if(lista.isEmpty()) {
					JOptionPane.showMessageDialog(null, "Modalidade nao encontrada");
				}
				resultado.close();
			}
			return lista;
		}
	}
	public List<Modalidade> SelectGraduacao(final String graduacao) throws SQLException {
		
		List<Modalidade> lista = new ArrayList<Modalidade>();
		
		pstSelectGraduacao.setString(1, graduacao);
		ResultSet resultado = pstSelectGraduacao.executeQuery();
		
		if (resultado != null) {			
			while (resultado.next()) {				
				Modalidade m = new Modalidade();
				System.out.println(resultado.getInt("id") + resultado.getString("modalidade"));
				
				m.setId(resultado.getInt("id"));
				m.set_modalidade(resultado.getString("modalidade"));
				m.set_graduacao(resultado.getString("graduacao"));
				lista.add(m);
			}			
		}
		
		resultado.close();
		return lista;
	}
	public Modalidade SelectCd(final int id) throws SQLException {
		
		Modalidade modalidade = null;
		pstSelectCd.setInt(1, id);
		ResultSet resultado = pstSelectCd.executeQuery();		
		if (resultado != null) {						
			if (resultado.first()) {
				modalidade = new Modalidade();
				modalidade.setId(resultado.getInt("id"));
				modalidade.set_modalidade(resultado.getString("modalidade"));
				modalidade.set_graduacao(resultado.getString("graduacao"));
			}
		}
		return modalidade;		
	}
	
	@Override
	public List<Object> Select() throws SQLException {
		
		List<Object> lista = new ArrayList<Object>();
		
		ResultSet resultado = pstSelect.executeQuery();
		if (resultado != null) {			
			while (resultado.next()) {				
				Modalidade m = new Modalidade();
				m.setId(resultado.getInt("id"));
				m.set_modalidade(resultado.getString("modalidade"));
				m.set_graduacao(resultado.getString("graduacao"));
				
				lista.add(m);
			}			
		}
		
		resultado.close();		
		return lista;
	}

	@Override
	public void Insert(Object parametro) throws SQLException {
		
		pstInsert.clearParameters();
		
		Modalidade modalidade = (Modalidade)parametro;
		
		pstInsert.setString(1, modalidade.getModalidade());
		pstInsert.setString(2, modalidade.getGraduacao());
		
		pstInsert.execute();
	}

	@Override
	public void Update(Object parametro) throws SQLException {
		
	}
	
	public void DeleteModalidade(final String modalidade) throws SQLException {
		
		if(modalidade.equals("")) {
			JOptionPane	.showMessageDialog(null, "Digite a modalidade!");
			}
		
		else {
			pstDeleteModalidade.setString(1, "%"+modalidade+"%");
			int resultado = pstDeleteModalidade.executeUpdate();
			if (resultado == 0) {			
				JOptionPane	.showMessageDialog(null, "Modalidade nao localizada");
			}else {
				JOptionPane	.showMessageDialog(null, "Modalidade excluida com sucesso!");
			}
		}
	}
	
	@Override
public void Delete(Object parametro) throws SQLException {
		
		pstDelete.clearParameters();
		pstDelete.setInt(1,((Modalidade)parametro).getId());
		pstDelete.execute();
	}

}
