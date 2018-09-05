Algoritmo "calcula_fatorial"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : A partir do input do usuário, calcula o fatorial do número digitado
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 03/09/2018
Var

 numeroDigitado, i, fatorial : inteiro
Inicio

 escreval("Digite um para que seja determinado seu fatorial:")
 leia(numeroDigitado)

 fatorial <- 1

 para i de 1 ate numeroDigitado faca
  fatorial <- fatorial * i
 fimpara
 
 escreval(numpcarac(numeroDigitado), "! = ", numpcarac(fatorial))

Fimalgoritmo