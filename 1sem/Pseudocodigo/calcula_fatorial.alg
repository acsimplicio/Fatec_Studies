Algoritmo "calcula_fatorial"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descri��o   : A partir do input do usu�rio, calcula o fatorial do n�mero digitado
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