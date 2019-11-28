
public class Usuario {

	private String username;
	private String senha;
	private String nome;
	private String CPF;
	private String data_nascimento;
	private String email;
	private String numero_telefone;
	private boolean isAdmin;
	
	public boolean getIsAdmin() {
		return isAdmin;
	}
	public void setIsAdmin(boolean isAdmin) {
		this.isAdmin = isAdmin;
	}
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getSenha() {
		return senha;
	}
	public void setSenha(String senha) {
		this.senha = senha;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getCPF() {
		return CPF;
	}
	public void setCPF(String cPF) {
		CPF = cPF;
	}
	public String getData_nascimento() {
		return data_nascimento;
	}
	public void setData_nascimento(String data_nascimento) {
		this.data_nascimento = data_nascimento;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getNumero_telefone() {
		return numero_telefone;
	}
	public void setNumero_telefone(String numero_telefone) {
		this.numero_telefone = numero_telefone;
	}

	public Usuario(String username, String senha, String nome, String cPF, String data_nascimento, String email,
			String numero_telefone, boolean is_admin) {
		this.username = username;
		this.senha = senha;
		this.nome = nome;
		CPF = cPF;
		this.data_nascimento = data_nascimento;
		this.email = email;
		this.numero_telefone = numero_telefone;
		this.isAdmin = is_admin;
	}
	
}
