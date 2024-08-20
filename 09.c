#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Fatorial de um Número: Calcula o fatorial de um número inteiro positivo.

int main (){
	setlocale(LC_ALL, "");
	
    	int fatorial, numero;
	
	printf ("Escreva o número que você deseja calcular seu fatorial:\n");
	 scanf ("%i", &numero);
	 
	  for (fatorial = 1; numero > 1; numero = numero - 1)	 
	    fatorial = fatorial * numero;
	     
	    
	printf ("\nFatorial calculado: %i", fatorial);
				    	     
  return 0;

}
