programa
{
	inclua biblioteca Matematica --> mat
	
	real notas[5], valoresSomados = 0, media
		
	funcao inicio()
	{
		para(inteiro i = 0; i < 5; i++) {
			escreva("Digite uma nota: ")
			leia(notas[i])

			valoresSomados	+= notas[i] * i				
		}

		media = valoresSomados/15

		escreva("A m�dia ponderada das notas digitadas �: ", mat.arredondar(media, 2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 181; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */