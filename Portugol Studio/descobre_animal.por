programa
{
	cadeia resposta
	
	funcao inicio()
	{
		escreva("Atenção usuário! Digite sempre 's' ou 'S' para sim e 'n' ou 'N' para não!\n")
		escreva("Diga-me, o animal que você escolheu, é um mamífero? \n")
		leia(resposta)

		se (resposta == "s" ou resposta == "S") {

			resposta = ""
			escreva("É quadrúpede?\n")
			leia(resposta)

			se (resposta == "s" ou resposta == "S") {

				resposta = ""
				escreva("É carnívoro?\n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {escreva("O animal é um Leão!\n")} senao {escreva("O animal é um Cavalo! \n")}
				
			} senao {

				resposta = ""
				escreva("É bípede? \n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {

					resposta = ""
					escreva("É onívoro? \n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal é um Homem! \n")} senao {escreva("O animal é um Macaco! \n")}
					
				} senao {

					resposta = ""
					escreva("É voador?\n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal é um Morcego!\n")} senao {escreva("O animal é uma Baleia!\n")}
					
				}
				
			}
			
		} senao {

			resposta = ""
			escreva("É uma ave?\n")
			leia(resposta)

			se (resposta == "s" ou resposta == "S") {

				resposta = ""
				escreva("Esse animal não voa?\n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {

					resposta = ""
					escreva("É tropical?\n")
					leia(resposta)	

					se (resposta == "s" ou resposta == "S") { escreva("O animal é um Avestruz!\n")} senao { escreva("O animal é um Pinguim!\n")}
					
				} senao {

					resposta = ""
					escreva("É nadadora?\n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal é um Pato!\n")} senao {escreva("O animal é uma Águia! \n")}
					
				}
				
			} senao {

				resposta = ""
				escreva("Tem casco?\n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {

					escreva("O animal é uma Tartaruga!\n")
					
				} senao {

					resposta = ""
					escreva("É carnívoro?\n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal é um Crocodilo!\n")} senao {escreva("O animal é uma Cobra!\n")}
					
				}
				
			}
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1312; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */