package database.model;

public class ALUNO {

	private int id;
	private String nome;
	private String cpf;
	private int idade;
	
	public ALUNO(final String nome, final String cpf) {
		this.nome = nome;
		this.cpf = cpf;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNome() {
		return nome;
	}
	public String getCpf() {
		return cpf;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
}
