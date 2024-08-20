#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Tabuada: Exibe a tabuada do número fornecido.

int main (){
	setlocale(LC_ALL, "");
	
    	int numero;
    	int contadorUm, contadorDois;
	
	printf ("Escreva o número que você quer saber a tabuada:\n");
	 scanf ("%i", &numero);
	 
	printf ("\nEssa e a tabuada de: %i \n", numero);	
	
	     while (contadorUm < 10){
	     	
	     	 int multiplicacao = numero*contadorDois;
	     	  contadorDois = contadorDois +1;
	     	  
	        printf("%i \n", multiplicacao);
	        contadorUm = contadorUm + 1;
	     	  }	
			    	     
  return 0;

}
