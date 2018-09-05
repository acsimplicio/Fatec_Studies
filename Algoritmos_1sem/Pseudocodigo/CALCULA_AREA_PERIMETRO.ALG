Algoritmo "calcula_area_perimetro"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : Lê as medidas e calcula área e perímetro.
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 29/08/2018
Var

 medidaA, medidaB, area, perimetro : real

Inicio

escreval ("Informe a medida A:")
leia (medidaA)

escreval ("Informe a medida B:")
leia (medidaB)

area <- medidaA * medidaB
perimetro <- (medidaA * 2) + (medidaB * 2)

escreval ("O valor da área e perímetro, respectivamente são: ", numpcarac(area), " e " , numpcarac(perimetro))

Fimalgoritmo