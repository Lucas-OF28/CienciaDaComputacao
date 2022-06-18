package testes;

public class Pessoa {
	
	private String nome;
	private String cpf;
	private String dataNascimento;
	private int idade;
	
	/**
	 * Construtor obrigatório.
	 * @param nome
	 * 			Nome a ser atribuido a pessoa.
	 * @param cpf
	 * 			Cpf a ser atribuido na pessoa.
	 */
	public Pessoa(final String nome, final String cpf) {
		this(nome, cpf, "01/01/0001");
	}
	
	/**
	 * Construtor obrigatório.
	 * @param nome
	 * 			Nome a ser atribuido a pessoa.
	 * @param cpf
	 * 			Cpf a ser atribuido na pessoa.
	 * @param dataNascimento
	 * 			Data de nascimento a ser atribuido a pessoa.
	 */
	public Pessoa(final String nome, final String cpf, final String dataNascimento) {
		this(nome, cpf, dataNascimento, 0);
	}
	
	public Pessoa(final String nome, final String cpf, final String dataNascimento, final int idade) {
		this.nome = nome;
		this.cpf = cpf;
		this.dataNascimento = dataNascimento;
		this.idade = idade;
	}
	
	public void setDtNascimento(final String dataNascimento) {
		this.dataNascimento = dataNascimento;
	}

	public static void main(String[] args) {
		Pessoa p = new Pessoa("Matheus", "123456");
	}

}
