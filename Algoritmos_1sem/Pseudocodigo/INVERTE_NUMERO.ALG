Algoritmo "inverte_numero"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : Algoritmo que inverte o número inputado pelo usuário
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 03/09/2018
Var

 numero, numeroTemp, numeroInverso : inteiro
 
Inicio

 escreval ("Escreva um número (3 dígitos):")
 leia(numero)
 
 numeroTemp <- numero
 
 enquanto (numeroTemp > 0) faca

   numeroInverso <- numeroInverso * 10 + (numeroTemp % 10)
   
   numeroTemp <- numeroTemp\10

 fimenquanto
 
 escreval(numpcarac(numeroInverso))

Fimalgoritmo