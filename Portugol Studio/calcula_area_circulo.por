programa
{

	inclua biblioteca Matematica --> mat

	real areaCirculo, raio
	
	funcao inicio()
	{
		escreva("Digite o raio do c�rculo: \n")
		leia(raio)

		areaCirculo = mat.PI * (mat.potencia(raio, 2.0))

		escreva("A �rea do circulo de raio informado �:", mat.arredondar(areaCirculo, 2))
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 288; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */