programa
{
	inclua biblioteca Matematica --> mat

	inteiro prestacoesEmAtraso	
	real valorAPagar, valorFinal, prejuizo
	
	funcao inicio()
	{
		escreva("Informe o valor a pagar:")
		leia(valorAPagar)

		escreva("Informe a quantidade de presta��es em atraso:")
		leia(prestacoesEmAtraso)

		para(inteiro i = 0; i < prestacoesEmAtraso; i++){
			valorAPagar += valorAPagar * 0.1 
		}

		valorFinal = valorAPagar - (valorAPagar * 0.1)
		prejuizo = valorAPagar - valorFinal
		
		escreva("O valor final a pagar �: ", mat.arredondar(valorFinal, 2), " e o preju�zo foi de ", mat.arredondar(prejuizo, 2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 594; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */