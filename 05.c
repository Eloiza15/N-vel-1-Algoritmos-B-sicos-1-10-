#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Calcular a Média: Lê três números e calcule a média aritmética.

int main (){
	setlocale(LC_ALL, "");
	
    	float numeroUm;
    	float numeroDois; 
	    float numeroTres;
	
	printf ("Escreva o primeiro número:\n");
	 scanf ("%f", &numeroUm);
	 
	printf ("Escreva o segundo número:\n");
	 scanf ("%f", &numeroDois);
	 
    printf ("Escreva o terceiro número:\n");
	 scanf ("%f", &numeroTres);
	 
         float soma = numeroUm+numeroDois+numeroTres;
         float media = soma/3;
	 
	 printf ("A média aritmética desses números são: %f", media);
			
return 0;

}
