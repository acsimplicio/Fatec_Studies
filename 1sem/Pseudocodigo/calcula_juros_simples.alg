Algoritmo "calcula_juros_simples"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descri��o   : Calcula juros simples.
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 29/08/2018
Var

 J, c, i : real
 n : inteiro

Inicio

 escreval ("Por obs�quio, poderia informar-me o capital de sua possess�o?")
 leia (c)
 
 escreval("Agrade�o por sua contribui��o e educa��o.")
 escreval ("Necessito de mais uma informa��o, poderia informar-me a taxa de empr�stimo?")
 leia (i)
 
 escreval ("Lisonjeias-me com sua educa��o e boa vontade!")
 escreval ("Um �ltimo pedido, precisarei do n�mero de per�odos, por obs�quio.")
 leia (n)
 
 J <- c * (i/100) * n
 
 escreval ("Gra�as a sua enorme e inestim�vel boa vontade em me fornecer informa��es, posso informar-lhe os juros!")
 escreval ("Os juros s�o: " + numpcarac(J))

Fimalgoritmo