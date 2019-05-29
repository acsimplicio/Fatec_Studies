
public class Detalhe {

	private String tipoQuarto;
	private int qtdCamas;
	private int valorReserva;
	
	public String getTipoQuarto() {
		return tipoQuarto;
	}
	public void setTipoQuarto(String tipoQuarto) {
		this.tipoQuarto = tipoQuarto;
	}
	public int getQtdCamas() {
		return qtdCamas;
	}
	public void setQtdCamas(int qtdCamas) {
		this.qtdCamas = qtdCamas;
	}
	public double getValorReserva() {
		return valorReserva;
	}
	public void setValorReserva(int valorReserva) {
		this.valorReserva = valorReserva;
	}
	
	public Detalhe(String tipoQuarto, int qtdCamas, int valorReserva) {
		this.tipoQuarto = tipoQuarto;
		this.qtdCamas = qtdCamas;
		this.valorReserva = valorReserva;
	}
	
}
