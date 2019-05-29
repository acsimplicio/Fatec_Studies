
public class Quarto {

	private int numero;
	private Detalhe detalhes;
	private boolean ocupado;
	private Usuario reservadoPor;
	
	public Usuario getReservadoPor() {
		return reservadoPor;
	}
	
	public void setReservadoPor(Usuario user) {
		this.reservadoPor = user;
	}
	
	public boolean getOcupado() {
		return ocupado;
	}
	
	public void setOcupado(boolean ocupado) {
		this.ocupado = ocupado;
	}
	
	public int getNumero() {
		return numero;
	}
	
	public void setNumero(int numero) {
		this.numero = numero;
	}
	
	public Detalhe getDetalhes() {
		return detalhes;
	}
	
	public void setDetalhes(Detalhe detalhes) {
		this.detalhes = detalhes;
	}
	
	public Quarto(int numero, Detalhe detalhes) {
		this.numero = numero;
		this.detalhes = detalhes;
		this.ocupado = false;
	}
	
}
