Algoritmo "fahrenheit_para_celsius"
// Disciplina  :  Algoritmos
// Professor   : Lucas Nadalete
// Descrição   : Converte temperaturas de Fahrenheit para Célsius.
// Autor(a)    : Ana Carolina Simplicio de Moura
// Data atual  : 29/08/2018
Var

 temperaturaCelsius, temperaturaFahrenheit : real

Inicio

 escreval ("Olá viajante!! Informe a temperatura(F°) que deseja converter:")
 leia (temperaturaFahrenheit)

 temperaturaCelsius <- (temperaturaFahrenheit - 32) / 1.8
 
 escreval ("Muuuuuito bem!! A temperatura convertida é: ", numpcarac(temperaturaCelsius), " C°")

Fimalgoritmo