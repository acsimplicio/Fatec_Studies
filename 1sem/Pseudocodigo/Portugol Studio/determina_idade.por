programa
{
	inclua biblioteca Matematica --> mat

	inteiro dataAtual[3], dataAniversario[3], anos = 0, meses = 0, dias = 0
	
	funcao inicio()
	{
		escreva("Digite o dia atual: \n")
 		leia(dataAtual[0])
		escreva("Digite o mês atual: \n")
		leia(dataAtual[1])
		escreva("Digite o ano atual: \n")
		leia(dataAtual[2])
		limpa()

		escreva("Digite o dia de seu aniversário:")
		leia(dataAniversario[0])
		escreva("Digite o mês de seu aniversário:")
		leia(dataAniversario[1])
		escreva("Digite o ano de seu aniversário:")
		leia(dataAniversario[2])
		limpa()

		anos = dataAtual[2] - dataAniversario[2]
		meses = dataAtual[1] - dataAniversario[1]
		dias = dataAtual[0] + dataAniversario[0]

		se (dataAtual[1] < dataAniversario[1]) {

			anos -= 1
			meses = (dataAtual[1] + 12) - dataAniversario[1]
			dias = (dataAtual[0] + 30) - dataAniversario[0]

			se (dataAtual[0] < dataAniversario[0]) {
				meses -= 1

				se (dataAtual[1] >= dataAniversario[1]) {
					anos -= 1
				}
			}
		}

		escreva("Usuário, você tem ", anos , " anos, ", meses, " meses e ", dias, " dias.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 996; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */