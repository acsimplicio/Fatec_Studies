import static org.junit.jupiter.api.Assertions.*;

import java.util.List;

import org.junit.jupiter.api.Test;

class TesteApp {

	@Test
	public void test() {
		
		Aplicacao aplicacao = new Aplicacao();
		
		// Crando usuarios de admin e dois users comuns
		
		assertEquals(aplicacao.getUsuarios().size(), 0);
		
		aplicacao.cadastrarUsuario(new Usuario("admin", "pqr5it4Lp2", "Staffanie Staffa", "489.574.214-98", "05/08/1978", "staffanie@hotel.com", "(13) 158965472", true));
		
		aplicacao.cadastrarUsuario(new Usuario("firstuser", "%gKtyI", "Juliana Medeiros", "857.968.254-82", "21/07/1998", "julianapoliana@gmail.com", "(11) 985541217", false));
		
		aplicacao.cadastrarUsuario(new Usuario("seconduser", "senhafacil", "Hugo Barreto", "954.658.412-96", "19/05/1965", "hugohug@outlook.com", "(12) 987456324", false));
		
		assertEquals(aplicacao.getUsuarios().size(), 3);
		
		// ----------------------------------------------
		
		// Testes de admin
		
			// -> Teste "Login" (Expect aplicacao.loggedUser)
		Usuario loggedUser = aplicacao.fazerLogin("admin", "pqr5it4Lp2");
		
		assertEquals(loggedUser, aplicacao.getLoggedUser());
		
			// -> Teste "Cadastrar Hotel"
		assertEquals(aplicacao.getHoteis().size(), 0);
		
		aplicacao.cadastrarHotel(new Hotel("Hôtel de la Gare", "111.222.23/00001-15", "Rua das Araras"));
		aplicacao.cadastrarHotel(new Hotel("Hôtel de Cité", "333.223.13/00001-20", "Rue de la Cité"));
		
		assertEquals(aplicacao.getHoteis().size(), 2);
		
			// -> Teste "Cadastrar Quarto"
		assertEquals(aplicacao.getHoteis().get(0).getQuartos().size(), 0);
		
		aplicacao.buscarHotelPorCNPJeCadastrarQuarto("111.222.23/00001-15", new Quarto(96, new Detalhe("Luxo", 1, 20)));
		
		assertEquals(aplicacao.getHoteis().get(0).getQuartos().size(), 1);
		
			// -> Teste "Buscar hotel por CNPJ" (Expect 1)
		Hotel hotelEncontrado = aplicacao.buscarHotelPorCNPJ("333.223.13/00001-20");
		
		assertEquals(hotelEncontrado.getNome(), "Hôtel de Cité");
		
			// -> Teste "Logoff" (Expect Null)
		aplicacao.fazerLogoff();
		
		assertEquals(aplicacao.getLoggedUser(), null);
		// --------------------------------------------------------------
		
		// Testes de user
		
			// -> Teste "Login"
		loggedUser = aplicacao.fazerLogin("firstuser", "%gKtyI");
		
		assertEquals(loggedUser, aplicacao.getLoggedUser());
		
			// -> Teste "Buscar hotel por CNPJ" (Expect Null - Falha por ser método de admin)
		hotelEncontrado = aplicacao.buscarHotelPorCNPJ("333.223.13/00001-20");
		
		assertEquals(hotelEncontrado, null);
		
			// -> Teste "Buscar hotel por detalhes" (Expect 1)
		List<Hotel> hoteisEncontradosDetalhes = aplicacao.buscarHotelPorDetalhes(new Detalhe("Luxo", 1, 20));
		
		assertEquals(hoteisEncontradosDetalhes.size(), 1);
		
			// -> Teste "Buscar hotel por localização" (Expect 1)
		List<Hotel> hoteisEncontradosLocalizacao = aplicacao.buscarHotelPorLocalizacao("Rua das Araras");
		
		assertEquals(hoteisEncontradosLocalizacao.size(), 1);
		
			// -> Teste "Buscar hotel por nome" (Expect 0)
		List<Hotel> hoteisEncontradosNome = aplicacao.buscarHotelPorNome("Hotel da Baixada Fluminese");
		
		assertEquals(hoteisEncontradosNome.size(), 0);
		
			// -> Teste "Buscar hotel por nome" (Expect 1)
		hoteisEncontradosNome = aplicacao.buscarHotelPorNome("Hôtel de la Gare");
		
		assertEquals(hoteisEncontradosNome.size(), 1);
		
			// -> Teste "Reserva" 
		assertEquals(hoteisEncontradosNome.get(0).getQuartos().get(0).getOcupado(), false);
		
		aplicacao.reserva(aplicacao.getLoggedUser(), hoteisEncontradosNome.get(0), hoteisEncontradosNome.get(0).getQuartos().get(0));
		
		assertEquals(hoteisEncontradosNome.get(0).getQuartos().get(0).getOcupado(), true);
		
		assertEquals(hoteisEncontradosNome.get(0).getQuartos().get(0).getReservadoPor(), aplicacao.getLoggedUser());
			
			// troca o usuário e teste se o novo loggedUser é o que fez a reserva
		aplicacao.fazerLogoff();
		
		aplicacao.fazerLogin("seconduser", "senhafacil");
		
		aplicacao.reserva(aplicacao.getLoggedUser(), hoteisEncontradosNome.get(0), hoteisEncontradosNome.get(0).getQuartos().get(0));
		
		assertNotSame(hoteisEncontradosNome.get(0).getQuartos().get(0).getReservadoPor(), aplicacao.getLoggedUser());
		
			// -> Teste "Avaliação" 
		assertEquals(hoteisEncontradosNome.get(0).getAvaliacao(), 0);
		
		aplicacao.darFeedbackAoHotel(hoteisEncontradosNome.get(0).getCNPJ(), new Feedback("Legal mas faltou shampoo", 4, aplicacao.getLoggedUser()));
		
		assertEquals(hoteisEncontradosNome.get(0).getAvaliacao(), 4);
		
		aplicacao.darFeedbackAoHotel(hoteisEncontradosNome.get(0).getCNPJ(), new Feedback("Minha filha mandou dar 5 pra deixar vocês felizes", 5, aplicacao.getLoggedUser()));
		
		assertEquals(hoteisEncontradosNome.get(0).getAvaliacao(), 4.5);
	}

}
