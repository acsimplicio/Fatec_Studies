Algoritmo "inverte_numero"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descri��o   : Algoritmo que inverte o n�mero inputado pelo usu�rio
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 03/09/2018
Var

 numero, numeroTemp, numeroInverso : inteiro
 
Inicio

 escreval ("Escreva um n�mero (3 d�gitos):")
 leia(numero)
 
 numeroTemp <- numero
 
 enquanto (numeroTemp > 0) faca

   numeroInverso <- numeroInverso * 10 + (numeroTemp % 10)
   
   numeroTemp <- numeroTemp\10

 fimenquanto
 
 escreval(numpcarac(numeroInverso))

Fimalgoritmo