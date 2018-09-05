Algoritmo "calcula_numero_H"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : A partir do input do usuário, calcula um valor H
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 03/09/2018
Var

 H : real
 numeroDigitado, i : inteiro
Inicio

 escreval("Bem vindo usuário, digite, por favor um número:")
 leia(numeroDigitado)
 
 para i de 1 ate numeroDigitado faca
  H <- H + (1/i)
 fimpara
 
 escreval("Baseado no número digitado por você, usuário")
 escreval("o resultado de H (sendo ele H = 1/1 + 1/2 + ... + 1/N) é")
 escreval(H:2:2)

Fimalgoritmo