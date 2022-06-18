package database.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import database.model.ALUNO;
import database.model.USUARIO;

public class UsuarioDAO extends AbstractDAO {

	private final String is_select = "select * from tb_usuario";
	private final String is_selectWhere = "select * from tb_usuario where nm_usuario = ? and ds_senha = ?";
	private final String is_selectCd = "select * from tb_usuario where cd_usuario = ?"; 
	private final String is_insert = "insert into tb_usuario(cd_usuario, nm_usuario, ds_senha, tp_perfil) values (DEFAULT, ?, ?, ?)";
	private final String is_update = "update tb_usuario set ds_senha = ?, tp_perfil = ? where cd_usuario = ?";
	private final String is_delete = "delete from tb_usuario where cd_usuario = ?";
	
	private final PreparedStatement pstSelect;
	private final PreparedStatement pstSelectWhere;
	private final PreparedStatement pstSelectCd;
	private final PreparedStatement pstInsert;
	private final PreparedStatement pstUpdate;
	private final PreparedStatement pstDelete;
	
	public UsuarioDAO(final Connection conexao) throws SQLException {
		pstSelect = conexao.prepareStatement(is_select);
		pstSelectCd = conexao.prepareStatement(is_selectCd);
		pstSelectWhere = conexao.prepareStatement(is_selectWhere);
		pstUpdate = conexao.prepareStatement(is_update);
		pstInsert = conexao.prepareStatement(is_insert);
		pstDelete = conexao.prepareStatement(is_delete);
	}	
 	
	public USUARIO SelectCd(final int cd_usuario) throws SQLException {
		
		USUARIO user = null;
		pstSelectCd.setInt(1, cd_usuario);
		ResultSet resultado = pstSelectCd.executeQuery();		
		if (resultado != null) {						
			if (resultado.first()) {
				user = new USUARIO();
				user.setCd_usuario(resultado.getInt("cd_usuario"));
				user.setNm_usuario(resultado.getString("nm_usuario"));
				user.setDs_usuario(resultado.getString("ds_senha"));
				user.setTp_perfil(resultado.getInt("tp_perfil"));	
			}
		}
		return user;		
	}
	
	public USUARIO SelectWhere(final String nm_usuario, final String ds_senha) throws SQLException {
		
		USUARIO user = null;
		pstSelectWhere.setString(1, nm_usuario);
		pstSelectWhere.setString(2, ds_senha);
		ResultSet resultado = pstSelectWhere.executeQuery();		
		if (resultado != null) {						
			if(resultado.first()) {
				user = new USUARIO();
				user.setCd_usuario(resultado.getInt("cd_usuario"));
				user.setNm_usuario(resultado.getString("nm_usuario"));
				user.setDs_usuario(resultado.getString("ds_senha"));
				user.setTp_perfil(resultado.getInt("tp_perfil"));	
			}
		}
		return user;		
	}
	
	@Override
	public List<Object> Select() throws SQLException {
		
		List<Object> lista = new ArrayList<Object>();
		
		ResultSet resultado = pstSelect.executeQuery();
		
		if (resultado != null) {			
			while (resultado.next()){		
				USUARIO user = new USUARIO();
				user.setCd_usuario(resultado.getInt("cd_usuario"));
				user.setNm_usuario(resultado.getString("nm_usuario"));
				user.setDs_usuario(resultado.getString("ds_senha"));
				user.setTp_perfil(resultado.getInt("tp_perfil"));				
				lista.add(user);
			}			
		}
		
		resultado.close();		
		return lista;
	}

	@Override
	public void Insert(Object parametro) throws SQLException {
		
		pstInsert.clearParameters();
		USUARIO usuario = (USUARIO)parametro;
		pstInsert.setString(1, usuario.getNm_usuario());
		pstInsert.setString(2, usuario.getDs_senha());
		pstInsert.setInt(3, usuario.getTp_perfil());
		pstInsert.execute();
	}

	@Override
	public void Update(Object parametro) throws SQLException {
		pstInsert.clearParameters();
		USUARIO usuario = (USUARIO)parametro;
		pstUpdate.setString(1, usuario.getDs_senha());
		pstUpdate.setInt(2, usuario.getTp_perfil());
		pstUpdate.setInt(3, usuario.getCd_usuario());	
		pstUpdate.execute();
	}
	@Override
	public void Delete(Object parametro) throws SQLException {
		pstDelete.clearParameters();
		pstDelete.setInt(1,((USUARIO)parametro).getCd_usuario());
		pstDelete.execute();
	}
	public USUARIO selectCd(int cd_usuario) {
		return null;
	}

}
