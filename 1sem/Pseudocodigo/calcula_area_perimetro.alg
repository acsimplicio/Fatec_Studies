Algoritmo "calcula_area_perimetro"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descri��o   : L� as medidas e calcula �rea e per�metro.
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

escreval ("O valor da �rea e per�metro, respectivamente s�o: ", numpcarac(area), " e " , numpcarac(perimetro))

Fimalgoritmo