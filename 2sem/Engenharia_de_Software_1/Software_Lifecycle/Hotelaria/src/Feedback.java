
public class Feedback {

	private String comentario;
	private int nota;
	private Usuario usuario;
	
	public String getComentario() {
		return comentario;
	}
	public void setComentario(String comentario) {
		this.comentario = comentario;
	}
	public int getNota() {
		return nota;
	}
	public void setNota(int nota) {
		this.nota = nota;
	}
	public Usuario getUsuario() {
		return usuario;
	}
	public void setUsuario(Usuario usuario) {
		this.usuario = usuario;
	}
	public Feedback(String comentario, int nota, Usuario usuario) {
		this.comentario = comentario;
		this.nota = nota;
		this.usuario = usuario;
	}
	
	
}
