programa
{
	cadeia resposta
	
	funcao inicio()
	{
		escreva("Aten��o usu�rio! Digite sempre 's' ou 'S' para sim e 'n' ou 'N' para n�o!\n")
		escreva("Diga-me, o animal que voc� escolheu, � um mam�fero? \n")
		leia(resposta)

		se (resposta == "s" ou resposta == "S") {

			resposta = ""
			escreva("� quadr�pede?\n")
			leia(resposta)

			se (resposta == "s" ou resposta == "S") {

				resposta = ""
				escreva("� carn�voro?\n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {escreva("O animal � um Le�o!\n")} senao {escreva("O animal � um Cavalo! \n")}
				
			} senao {

				resposta = ""
				escreva("� b�pede? \n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {

					resposta = ""
					escreva("� on�voro? \n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal � um Homem! \n")} senao {escreva("O animal � um Macaco! \n")}
					
				} senao {

					resposta = ""
					escreva("� voador?\n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal � um Morcego!\n")} senao {escreva("O animal � uma Baleia!\n")}
					
				}
				
			}
			
		} senao {

			resposta = ""
			escreva("� uma ave?\n")
			leia(resposta)

			se (resposta == "s" ou resposta == "S") {

				resposta = ""
				escreva("Esse animal n�o voa?\n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {

					resposta = ""
					escreva("� tropical?\n")
					leia(resposta)	

					se (resposta == "s" ou resposta == "S") { escreva("O animal � um Avestruz!\n")} senao { escreva("O animal � um Pinguim!\n")}
					
				} senao {

					resposta = ""
					escreva("� nadadora?\n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal � um Pato!\n")} senao {escreva("O animal � uma �guia! \n")}
					
				}
				
			} senao {

				resposta = ""
				escreva("Tem casco?\n")
				leia(resposta)

				se (resposta == "s" ou resposta == "S") {

					escreva("O animal � uma Tartaruga!\n")
					
				} senao {

					resposta = ""
					escreva("� carn�voro?\n")
					leia(resposta)

					se (resposta == "s" ou resposta == "S") {escreva("O animal � um Crocodilo!\n")} senao {escreva("O animal � uma Cobra!\n")}
					
				}
				
			}
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1312; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */