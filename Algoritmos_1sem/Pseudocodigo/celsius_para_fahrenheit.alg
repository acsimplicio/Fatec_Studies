Algoritmo "celsius_para_fahrenheit"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : Converte temperaturas de Célsius para Fahrenheit.
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 29/08/2018
Var

 temperaturaCelsius, temperaturaFahrenheit : real

Inicio

 escreval ("Olá viajante!! Informe a temperatura(C°) que deseja converter:")
 leia (temperaturaCelsius)

 temperaturaFahrenheit <- (temperaturaCelsius * 1.8) + 32
 
 escreval ("Muuuuuito bem!! A temperatura convertida é: ", numpcarac(temperaturaFahrenheit), " F°")

Fimalgoritmo