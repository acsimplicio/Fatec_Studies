programa
{
	inteiro idade
	cadeia classeEleitoral
	
	funcao inicio()
	{
		escreva("Informe a idade do eleitor:\n")
		leia(idade)

		se (idade < 16) {
			classeEleitoral = "N�o votante"
		} senao {
			se ((16 <= idade e idade < 18) ou idade > 65) {
				classeEleitoral = "Facultativo"
			} senao {
				classeEleitoral = "Obrigat�rio"
			}
		}

		escreva("A classe eleitoral do eleitor �: ", classeEleitoral)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 405; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */