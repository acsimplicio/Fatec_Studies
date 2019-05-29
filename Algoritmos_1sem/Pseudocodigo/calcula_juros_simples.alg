Algoritmo "calcula_juros_simples"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : Calcula juros simples.
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 29/08/2018
Var

 J, c, i : real
 n : inteiro

Inicio

 escreval ("Por obséquio, poderia informar-me o capital de sua possessão?")
 leia (c)
 
 escreval("Agradeço por sua contribuição e educação.")
 escreval ("Necessito de mais uma informação, poderia informar-me a taxa de empréstimo?")
 leia (i)
 
 escreval ("Lisonjeias-me com sua educação e boa vontade!")
 escreval ("Um último pedido, precisarei do número de períodos, por obséquio.")
 leia (n)
 
 J <- c * (i/100) * n
 
 escreval ("Graças a sua enorme e inestimável boa vontade em me fornecer informações, posso informar-lhe os juros!")
 escreval ("Os juros são: " + numpcarac(J))

Fimalgoritmo