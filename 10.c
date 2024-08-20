#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Contagem Regressiva: Exiba uma contagem regressiva de 10 a 1.

int main (){
	setlocale(LC_ALL, "");
	
    	int contador;
    	
    for (contador = 10; contador > 0; contador--){
    	printf ("%i\n", contador);   	
	}
			    	     
  return 0;

}
