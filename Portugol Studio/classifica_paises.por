programa
{
	cadeia paisA, paisB, paisC
	inteiro medalhasOuroA, medalhasPrataA, medalhasBronzeA
	inteiro medalhasOuroB, medalhasPrataB, medalhasBronzeB
	inteiro medalhasOuroC, medalhasPrataC, medalhasBronzeC
	inteiro pontosA, pontosB, pontosC
	
	funcao inicio()
	{
		escreva("Digite o nome do primeiro pa�s:\n")
		leia(paisA)
		escreva("Quantas medalhas de ouro este pa�s ganhou?\n")
		leia(medalhasOuroA)
		escreva("E quantas de prata?\n")
		leia(medalhasPrataA)
		escreva("E de bronze?\n")
		leia(medalhasBronzeA)
		limpa()
		
		escreva("Digite o nome do segundo pa�s:\n")
		leia(paisB)
		escreva("Quantas medalhas de ouro este pa�s ganhou?\n")
		leia(medalhasOuroB)
		escreva("E quantas de prata?\n")
		leia(medalhasPrataB)
		escreva("E de bronze?\n")
		leia(medalhasBronzeB)
		limpa()
		
		escreva("Digite o nome do terceiro pa�s:\n")
		leia(paisC)
		escreva("Quantas medalhas de ouro este pa�s ganhou?\n")
		leia(medalhasOuroC)
		escreva("E quantas de prata?\n")
		leia(medalhasPrataC)
		escreva("E de bronze?\n")
		leia(medalhasBronzeC)
		limpa()
		
		pontosA = (medalhasOuroA * 3) + (medalhasPrataA * 2) + medalhasBronzeA
		pontosB = (medalhasOuroB * 3) + (medalhasPrataB * 2) + medalhasBronzeB
		pontosC = (medalhasOuroC * 3) + (medalhasPrataC * 2) + medalhasBronzeC
		
		se (paisA == paisB ou paisB == paisC ou paisC == paisA) {
		
		 	escreva("Os nomes dos pa�ses s�o iguais! \n")
		
		} senao {
		
		 se (pontosA == pontosB e pontosB == pontosC) {
		
		    escreva("Empate entre todos os pa�ses, com ", pontosA, " pontos. \n")
		
		 } senao {
		
		    se (pontosA == pontosB e pontosB > pontosC) {
		
		       escreva("Em primeiro lugar, empatados os pa�ses: ", paisA, " e ", paisB, " com ", pontosB, " pontos! \n")
		       escreva("Em segundo lugar: ", paisC ," com ", pontosC, " pontos! \n")
		
		    } senao {
		
		       se (pontosA == pontosC e pontosC > pontosB) {
		
		          escreva("Em primeiro lugar, empatados os pa�ses: ", paisA, " e ", paisC, " com ", pontosA, " pontos! \n")
		          escreva("Em segundo lugar: ", paisB ," com ", pontosB, " pontos! \n")
		
		       } senao {
		
		          se (pontosB == pontosC e pontosC > pontosA) {
		
		             escreva("Em primeiro lugar, empatados os pa�ses: ", paisB, " e ", paisC, " com ", pontosB, " pontos!\n")
		             escreva("Em segundo lugar: ", paisA ," com ", pontosA, " pontos!\n")
		
		          } senao {
		
		             se (pontosA > pontosB e pontosA > pontosC) {
		
		                escreva("Em primeiro lugar: ", paisA ," com ", pontosA, " pontos!")
		
		                se (pontosB > pontosC) {
		
		                   escreva("Em segundo lugar: ", paisB ," com ", pontosB, " pontos!\n")
		                   escreva("Em terceiro lugar: ", paisC ," com ", pontosC, " pontos!\n")
		
		                } senao {
		
		                   se (pontosB == pontosC) {
		
		                      escreva("Em segundo lugar, empatados os pa�ses: ", paisB, " e ", paisC, " com ", pontosB, " pontos!\n")
		
		                   } senao {
		
		                      escreva("Em segundo lugar: ", paisC ," com ", pontosC, " pontos!\n")
		                      escreva("Em terceiro lugar: ", paisB ," com ", pontosB, " pontos!\n")
		
		                   }
		
		                }
		
		
		             } senao {
		
		                se (pontosB > pontosA e pontosB > pontosC) {
		
		                   escreva("Em primeiro lugar: ", paisB ," com ", pontosB, " pontos!\n")
		
		                   se (pontosA > pontosC) {
		
		                      escreva("Em segundo lugar: ", paisA ," com ", pontosA, " pontos!\n")
		                      escreva("Em terceiro lugar: ", paisC ," com ", pontosC, " pontos!\n")
		
		                   } senao {
		
		                      se (pontosA == pontosC) {
		
		                         escreva("Em segundo lugar, empatados os pa�ses: ", paisA, " e ", paisC, " com ", pontosA, " pontos!\n")
		
		                      } senao {
		
		                         escreva("Em segundo lugar: ", paisC ," com ", pontosC, " pontos!\n")
		                         escreva("Em terceiro lugar: ", paisA ," com ", pontosA, " pontos!\n")
		
		                      }
		
		                   }
		
		                } senao {
		
		                   escreva("Em primeiro lugar: ", paisC ," com ", pontosC, " pontos!\n")
		
		                   se (pontosA > pontosB) {
		
		                      escreva("Em segundo lugar: ", paisA ," com ", pontosA, " pontos!\n")
		                      escreva("Em terceiro lugar: ", paisB ," com ", pontosB, " pontos!\n")
		
		                   } senao {
		
		                      se (pontosA == pontosB) {
		
		                         escreva("Em segundo lugar, empatados os pa�ses: ", paisA, " e ", paisB, " com ", pontosA, " pontos!\n")
		
		                      } senao {
		
		                         escreva("Em segundo lugar: ", paisB ," com ", pontosB, " pontos!\n")
		                         escreva("Em terceiro lugar: ", paisA ," com ", pontosA, " pontos!\n")
		
		                      }
		
		                   }
		
		                }
		
		             }
		
		          }
		
		       }
		
		    }
		
		 }
		
		}

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 5184; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */