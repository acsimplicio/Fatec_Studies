Algoritmo "calcula_numero_H"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descri��o   : A partir do input do usu�rio, calcula um valor H
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 03/09/2018
Var

 H : real
 numeroDigitado, i : inteiro
Inicio

 escreval("Bem vindo usu�rio, digite, por favor um n�mero:")
 leia(numeroDigitado)
 
 para i de 1 ate numeroDigitado faca
  H <- H + (1/i)
 fimpara
 
 escreval("Baseado no n�mero digitado por voc�, usu�rio")
 escreval("o resultado de H (sendo ele H = 1/1 + 1/2 + ... + 1/N) �")
 escreval(H:2:2)

Fimalgoritmo