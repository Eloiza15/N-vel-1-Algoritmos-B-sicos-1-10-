#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Conversão de Temperatura: Converte uma temperatura de Celsius para Fahrenheit.

int main (){
	setlocale(LC_ALL, "");
	
    	int celsius;
	
	printf ("Escreva a temperatura em Celsius:\n");
	 scanf ("%i", &celsius);
	
	    int conversao = (celsius*9/5)+32;
	    
	printf ("Essa temperatura convertida em Fahrenheit é: %i", conversao);	
			
  return 0;

}
