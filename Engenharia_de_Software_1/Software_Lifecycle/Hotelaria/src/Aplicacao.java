import java.util.LinkedList;
import java.util.List;

public class Aplicacao {

	private List<Hotel> hoteis = new LinkedList<Hotel>();
	private List<Usuario> usuarios = new LinkedList<Usuario>();
	private Usuario loggedUser;
	
	public Usuario getLoggedUser() {
		return loggedUser;
	}
	
	public void setLoggedUser(Usuario loggedUser) {
		this.loggedUser = loggedUser;
	}
	
	public List<Hotel> getHoteis() {
		return hoteis;
	}
	
	public List<Usuario> getUsuarios() {
		return usuarios;
	}

	public void cadastrarHotel (Hotel hotel) {
		if (this.getLoggedUser().getIsAdmin() == true) {
			hoteis.add(hotel);
		}
	}
	
	public void cadastrarUsuario (Usuario usuario) {
		usuarios.add(usuario);
	}
	
	public Usuario fazerLogin (String username, String senha) {
		for (Usuario usuario:usuarios) {
			if (usuario.getUsername() == username) {
				if (usuario.getSenha() == senha) {
					this.setLoggedUser(usuario);
					return usuario;
				}
			}
		}
		return null;
	}
	
	public void fazerLogoff () {
		this.setLoggedUser(null);
	}
	
	public List<Hotel> buscarHotelPorNome (String nome) {
		List<Hotel> res = new LinkedList<Hotel>();
		for (Hotel hotel:hoteis) {
			if (hotel.getNome() == nome) {
				res.add(hotel);
			}
		}
		return res;
	}
	
	public Hotel buscarHotelPorCNPJ (String CNPJ) {
		if (this.getLoggedUser().getIsAdmin() == true) {
			for (Hotel hotel:hoteis) {
				if (hotel.getCNPJ() == CNPJ) {
					return hotel;
				}
			}
			return null;
		}
		return null;
	}
	
	public List<Hotel> buscarHotelPorDetalhes (Detalhe detalhes) {
		List<Hotel> res = new LinkedList<Hotel>();
		for (Hotel hotel:hoteis) {
			List<Quarto> quartosEncontrados =  hotel.buscarQuartoPorDetalhes(detalhes);
			if (quartosEncontrados.size() > 0) {
				res.add(hotel);
			}
		}
		return res;
	}
	
	public List<Hotel> buscarHotelPorLocalizacao (String local) {
		List<Hotel> res = new LinkedList<Hotel>();
		for (Hotel hotel:hoteis) {
			if (hotel.getLocalizacao() == local) {
				res.add(hotel);
			}
		}
		return res;
	}
	
	public void buscarHotelPorCNPJeCadastrarQuarto (String CNPJ, Quarto quarto) {
		if (this.getLoggedUser().getIsAdmin() == true) {
			for (Hotel hotel:hoteis) {
				if (hotel.getCNPJ().equals(CNPJ)) {
					hotel.cadastrarQuarto(quarto);
				}
			}
		}
	}
	
	public void reserva (Usuario titularReserva, Hotel hotel, Quarto quarto) {
		List<Quarto> quartos = hotel.getQuartos();
		int indexQuarto = quartos.indexOf(quarto);
		if (quartos.get(indexQuarto).getOcupado() != true) {
			quartos.get(indexQuarto).setOcupado(true);
			quartos.get(indexQuarto).setReservadoPor(titularReserva);
		}
	}
	
	public void darFeedbackAoHotel (String CNPJ, Feedback feedback) {
		for (Hotel hotel:hoteis) {
			if (hotel.getCNPJ().equals(CNPJ)) {
				hotel.adicionarFeedback(feedback);
			}
		}
	}
	
}
