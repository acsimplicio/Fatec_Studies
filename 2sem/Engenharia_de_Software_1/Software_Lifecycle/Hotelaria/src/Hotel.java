import java.util.LinkedList;
import java.util.List;

public class Hotel {
	
	private List<Quarto> quartos = new LinkedList<Quarto>();
	private String nome;
	private String CNPJ;
	private float avaliacao = 0;
	private String localizacao;
	private List<Feedback> feedbacks = new LinkedList<Feedback>();
	
	public List<Feedback> getFeedbacks() {
		return feedbacks;
	}
	public void setFeedbacks(List<Feedback> feedbacks) {
		this.feedbacks = feedbacks;
	}
	public void setAvaliacao(float avaliacao) {
		this.avaliacao = avaliacao;
	}
	public List<Quarto> getQuartos() {
		return quartos;
	}
	public void setQuartos(List<Quarto> quartos) {
		this.quartos = quartos;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getCNPJ() {
		return CNPJ;
	}
	public void setCNPJ(String cNPJ) {
		CNPJ = cNPJ;
	}
	public float getAvaliacao() {
		return avaliacao;
	}
	public void setAvaliacao(int avaliacao) {
		this.avaliacao = avaliacao;
	}
	public String getLocalizacao() {
		return localizacao;
	}
	public void setLocalizacao(String localizacao) {
		this.localizacao = localizacao;
	}
	
	public Hotel(String nome, String cNPJ, String localizacao) {
		this.nome = nome;
		CNPJ = cNPJ;
		this.localizacao = localizacao;
	}
	
	public void cadastrarQuarto(Quarto quarto) {
		quartos.add(quarto);
	}
	
	public List<Quarto> buscarQuartoPorDetalhes(Detalhe detalhes) {
		List<Quarto> quartosEncontrados = new LinkedList<Quarto>();
		for (Quarto quarto:quartos) {
			if (quarto.getDetalhes().getQtdCamas() == detalhes.getQtdCamas() &&
				quarto.getDetalhes().getTipoQuarto() == detalhes.getTipoQuarto() &&
				quarto.getDetalhes().getValorReserva() == detalhes.getValorReserva()) {
				quartosEncontrados.add(quarto);
			}
		}
		return quartosEncontrados;
	}
	
	public void adicionarFeedback(Feedback feedback) {
		feedbacks.add(feedback);
		this.calculaAvaliacao(feedback.getNota());
	}
	
	public void calculaAvaliacao (int nota) {
		float nova_avaliacao = ((this.avaliacao * (this.feedbacks.size() - 1)) + nota) / this.feedbacks.size();
		this.setAvaliacao(nova_avaliacao);
	}

}
