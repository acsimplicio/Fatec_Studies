programa
{

	inclua biblioteca Matematica --> mat

	real areaCirculo, raio
	
	funcao inicio()
	{
		escreva("Digite o raio do círculo: \n")
		leia(raio)

		areaCirculo = mat.PI * (mat.potencia(raio, 2.0))

		escreva("A área do circulo de raio informado é:", mat.arredondar(areaCirculo, 2))
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 288; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */