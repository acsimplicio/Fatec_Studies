Algoritmo "calcula_media_ponderada"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descri��o   : Algoritimo que calcula a m�dia ponderada de 5 valores inputados
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 03/09/2018
Var

 i : inteiro
 notas : vetor [1..5] de real
 valoresSomados, media : real
 
Inicio

 para i de 1 ate 5 faca
   escreval("Digite uma nota:")
   leia(notas[i])
   
   valoresSomados <- valoresSomados + (notas[i] * i)
   
 fimpara
 
 media <- valoresSomados/15
 
 escreval("A m�dia ponderada das notas digitadas �: ", media:2:2)

Fimalgoritmo