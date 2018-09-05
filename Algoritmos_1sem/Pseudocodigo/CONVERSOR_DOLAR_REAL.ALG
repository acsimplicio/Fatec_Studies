Algoritmo "conversor_dolar_real"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : Converte real para dólar.
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 29/08/2018

Const

 taxa = 2.4

Var

 reais, dolares : real

Inicio

escreval ("Informe o valor em reais:")
leia (reais)

dolares <- reais/taxa

escreval ("O valor informado convertido em dólares é: " + numpcarac(dolares))

Fimalgoritmo