programa
{
	inteiro ano, mes, dia
	
	funcao inicio()
	{
		escreva("Digite um dia: \n")
		leia(dia)
		escreva("Digite um mês: \n")
		leia(mes)
		escreva("Digite um ano: \n")
		leia(ano)
		limpa()

		escreva("A data digitada foi: ", dia, "/", mes, "/", ano, "\n")

		se ((dia > 0 e dia <= 31) e (mes > 0 e mes <= 12)) {

			se (ano % 4 == 0) {

				se (mes == 02 e dia > 29) {
					
					escreva("Data inválida! Fevereiro nesse ano possui apenas 29 dias!")
					
				} senao {
					
					escreva("Data válida!")
					
				}
				
			} senao {

				se (mes == 02) {

					se (dia > 28) {

						escreva("Data inválida! Fevereiro nesse ano possui apenas 28 dias!")
						
					} senao {

						escreva("Data válida!")
						
					}
					
				} senao {

					se ((mes == 04 ou mes == 06 ou mes == 09 ou mes == 11) e dia > 30) {

						escreva("Data inválida! O mês digitado tem apenas 30 dias!")
						
					} senao {

						escreva("Data válida!")
						
					}
					
				}
				
			}
			
		} senao {

			escreva("Data inválida!")
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 259; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */