programa
{
	inclua biblioteca Matematica --> mat
	
	real capacidadeTanque, litrosAbastecidos, kmPercorridos, gasto, autonomia
	
	funcao inicio()
	{
		escreva("Digite a capacidade de seu tanque:\n")
		leia(capacidadeTanque)

		escreva("Digite a quantidade de litros abastecidos:\n")
		leia(litrosAbastecidos)

		escreva("Digite a quantidade de km percorridos desde o �ltimo abastecimento:\n")
		leia(kmPercorridos)

		gasto = capacidadeTanque - litrosAbastecidos
		autonomia = kmPercorridos/gasto

		escreva("O gasto e autonomia de seu carro s�o, respectivamente: ", mat.arredondar(gasto, 2), ", ", mat.arredondar(autonomia, 2), "km/L.")
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