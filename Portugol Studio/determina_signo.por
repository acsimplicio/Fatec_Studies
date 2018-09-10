programa
{
	inteiro dia, mes
	cadeia signo
	
	funcao inicio()
	{
		escreva("Digite um dia, pressione enter,  e logo depois, um mês: \n")
		leia(dia, mes)
		 
		 se ((dia > 0 e dia <= 31) e (mes > 0 e mes <= 31)) {
		 
		    se ((mes == 04 ou mes == 06 ou mes == 09 ou mes == 11) e dia > 30) {
		    
		       escreva("Data inválida!")
		       signo = "Indefinido"
		       
		    } senao {
		 
		       se ((mes == 03 e dia >= 21) ou (mes == 04 e dia <= 20)) {
		
		          signo = "Áries"
		
		       }
		
		       se ((mes == 04 e dia >= 21) ou (mes == 05 e dia <= 20)) {
		
		          signo = "Touro"
		
		       }
		
		       se ((mes == 05 e dia >= 21) ou (mes == 06 e dia <= 20)) {
		
		          signo = "Gêmeos"
		
		       }
		
		       se ((mes == 06 e dia >= 21) ou (mes == 07 e dia <= 21)) {
		
		          signo = "Cancêr"
		
		       }
		
		       se ((mes == 07 e dia >= 22) ou (mes == 08 e dia <= 22)) {
		
		          signo = "Leão"
		
		       }
		
		       se ((mes == 08 e dia >= 23) ou (mes == 09 e dia <= 22)) {
		
		          signo = "Virgem"
		
		       }
		
		       se ((mes == 09 e dia >= 23) ou (mes == 10 e dia <= 22)) {
		
		          signo = "Libra"
		
		       }
		
		       se ((mes == 10 e dia >= 23) ou (mes == 11 e dia <= 21)) {
		
		          signo = "Escorpião"
		
		       }
		       
		       se ((mes == 11 e dia >= 22) ou (mes == 12 e dia <= 21)) {
		
		          signo = "Sagitário"
		
		       }
		       
		       se ((mes == 12 e dia >= 22) ou (mes == 01 e dia <= 20)) {
		
		          signo = "Capricórnio"
		
		       }
		       
		       se ((mes == 01 e dia >= 21) ou (mes == 02 e dia <= 19)) {
		
		          signo = "Aquário"
		
		       }
		
		       se ((mes == 02 e dia >= 20) ou (mes == 03 e dia <= 20)) {
		
		          signo = "Peixes"
		
		       }
		
		    }
		
	    } senao {
	 
	      escreva("Data inválida!")
	      signo = "Indefinido"
	      
	    }
		 
		 escreva("O signo referente ao dia e mês informados é: ", signo)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 108; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */