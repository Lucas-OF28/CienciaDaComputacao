package database.model;

public class Modalidade {

	private int id;
	private String grad;
	private String modali;

	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public void set_modalidade(String nm_modalidade) {
		this.modali = nm_modalidade;
	}
	public String getGraduacao() {
		return grad;
	}
	public String getModalidade() {
		return modali;
	}
	public void set_graduacao(String nm_graduacao) {
		this.grad = nm_graduacao;
	}
}
