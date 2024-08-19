#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Par ou Ímpar: Lê um número e informa se ele é par ou ímpar.

int main (){
	setlocale(LC_ALL, "");
	
int numero;

printf ("Escreva o número para informamos se ele é par ou ímpar:\n");
scanf ("%i", &numero);

if (numero % 2 == 0)
	printf ("Esse número é par");
	  else
	  	printf("Esse número é ímpar");
	  
	
return 0;

}
