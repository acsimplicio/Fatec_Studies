programa
{
	inteiro numeroDigitado, numeroInverso
	
	funcao inicio()
	{
		escreva("Digite um número (3 dígitos): \n")
		leia(numeroDigitado)

		numeroInverso = 0
		
		enquanto (numeroDigitado > 0) {
			
			numeroInverso = numeroInverso * 10 + (numeroDigitado % 10)

			numeroDigitado = numeroDigitado/10
		}

		escreva(numeroInverso)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 316; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */