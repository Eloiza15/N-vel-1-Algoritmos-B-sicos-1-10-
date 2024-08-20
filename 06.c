#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Cálculo da Área de um Círculo: Lê o raio de um círculo e calcula sua área.

int main (){
	setlocale(LC_ALL, "");
	
    	float raio;
	
	printf ("Escreva o raio do círculo:\n");
	 scanf ("%f", &raio);
	
	    float area = 3.14*(raio*raio);
	    
	printf ("A área desse círculo é: %f", area);	
			
  return 0;

}
