programa
{
	cadeia paisA, paisB, paisC
	inteiro medalhasOuroA, medalhasPrataA, medalhasBronzeA
	inteiro medalhasOuroB, medalhasPrataB, medalhasBronzeB
	inteiro medalhasOuroC, medalhasPrataC, medalhasBronzeC
	inteiro pontosA, pontosB, pontosC
	
	funcao inicio()
	{
		escreva("Digite o nome do primeiro país:\n")
		leia(paisA)
		escreva("Quantas medalhas de ouro este país ganhou?\n")
		leia(medalhasOuroA)
		escreva("E quantas de prata?\n")
		leia(medalhasPrataA)
		escreva("E de bronze?\n")
		leia(medalhasBronzeA)
		limpa()
		
		escreva("Digite o nome do segundo país:\n")
		leia(paisB)
		escreva("Quantas medalhas de ouro este país ganhou?\n")
		leia(medalhasOuroB)
		escreva("E quantas de prata?\n")
		leia(medalhasPrataB)
		escreva("E de bronze?\n")
		leia(medalhasBronzeB)
		limpa()
		
		escreva("Digite o nome do terceiro país:\n")
		leia(paisC)
		escreva("Quantas medalhas de ouro este país ganhou?\n")
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
		
		 	escreva("Os nomes dos países são iguais! \n")
		
		} senao {
		
		 se (pontosA == pontosB e pontosB == pontosC) {
		
		    escreva("Empate entre todos os países, com ", pontosA, " pontos. \n")
		
		 } senao {
		
		    se (pontosA == pontosB e pontosB > pontosC) {
		
		       escreva("Em primeiro lugar, empatados os países: ", paisA, " e ", paisB, " com ", pontosB, " pontos! \n")
		       escreva("Em segundo lugar: ", paisC ," com ", pontosC, " pontos! \n")
		
		    } senao {
		
		       se (pontosA == pontosC e pontosC > pontosB) {
		
		          escreva("Em primeiro lugar, empatados os países: ", paisA, " e ", paisC, " com ", pontosA, " pontos! \n")
		          escreva("Em segundo lugar: ", paisB ," com ", pontosB, " pontos! \n")
		
		       } senao {
		
		          se (pontosB == pontosC e pontosC > pontosA) {
		
		             escreva("Em primeiro lugar, empatados os países: ", paisB, " e ", paisC, " com ", pontosB, " pontos!\n")
		             escreva("Em segundo lugar: ", paisA ," com ", pontosA, " pontos!\n")
		
		          } senao {
		
		             se (pontosA > pontosB e pontosA > pontosC) {
		
		                escreva("Em primeiro lugar: ", paisA ," com ", pontosA, " pontos!")
		
		                se (pontosB > pontosC) {
		
		                   escreva("Em segundo lugar: ", paisB ," com ", pontosB, " pontos!\n")
		                   escreva("Em terceiro lugar: ", paisC ," com ", pontosC, " pontos!\n")
		
		                } senao {
		
		                   se (pontosB == pontosC) {
		
		                      escreva("Em segundo lugar, empatados os países: ", paisB, " e ", paisC, " com ", pontosB, " pontos!\n")
		
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
		
		                         escreva("Em segundo lugar, empatados os países: ", paisA, " e ", paisC, " com ", pontosA, " pontos!\n")
		
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
		
		                         escreva("Em segundo lugar, empatados os países: ", paisA, " e ", paisB, " com ", pontosA, " pontos!\n")
		
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
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 5184; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */