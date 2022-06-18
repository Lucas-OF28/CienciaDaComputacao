package database.model;

public class USUARIO {
	
	private int cd_usuario;
	private String nm_usuario;
	private String ds_senha;
	private int tp_perfil;
	
		
	
	public int getCd_usuario() {
		return cd_usuario;
	}
	public void setCd_usuario(int cd_usuario) {
		this.cd_usuario = cd_usuario;
	}
	public String getNm_usuario() {
		return nm_usuario;
	}
	public void setNm_usuario(String nm_usuario) {
		this.nm_usuario = nm_usuario;
	}
	public String getDs_senha() {
		return ds_senha;
	}
	public void setDs_usuario(String ds_usuario) {
		this.ds_senha = ds_usuario;
	}
	public int getTp_perfil() {
		return tp_perfil;
	}
	public void setTp_perfil(int tp_perfil) {
		this.tp_perfil = tp_perfil;
	}
	

}
