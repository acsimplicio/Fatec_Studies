programa
{
	inteiro ano, mes, dia
	
	funcao inicio()
	{
		escreva("Digite um dia: \n")
		leia(dia)
		escreva("Digite um m�s: \n")
		leia(mes)
		escreva("Digite um ano: \n")
		leia(ano)
		limpa()

		escreva("A data digitada foi: ", dia, "/", mes, "/", ano, "\n")

		se ((dia > 0 e dia <= 31) e (mes > 0 e mes <= 12)) {

			se (ano % 4 == 0) {

				se (mes == 02 e dia > 29) {
					
					escreva("Data inv�lida! Fevereiro nesse ano possui apenas 29 dias!")
					
				} senao {
					
					escreva("Data v�lida!")
					
				}
				
			} senao {

				se (mes == 02) {

					se (dia > 28) {

						escreva("Data inv�lida! Fevereiro nesse ano possui apenas 28 dias!")
						
					} senao {

						escreva("Data v�lida!")
						
					}
					
				} senao {

					se ((mes == 04 ou mes == 06 ou mes == 09 ou mes == 11) e dia > 30) {

						escreva("Data inv�lida! O m�s digitado tem apenas 30 dias!")
						
					} senao {

						escreva("Data v�lida!")
						
					}
					
				}
				
			}
			
		} senao {

			escreva("Data inv�lida!")
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 259; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */