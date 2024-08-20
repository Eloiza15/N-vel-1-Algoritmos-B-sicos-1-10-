#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Maior de Dois Números: Lê dois números e exiba o maior deles.

int main (){
	setlocale(LC_ALL, "");
	
	float numeroUm;
	float numeroDois; 
	
	printf ("Escreva o primeiro número:\n");
	 scanf ("%f", &numeroUm);
	 
	printf ("Escreva o segundo número:\n");
	 scanf ("%f", &numeroDois);
	 
	
	if (numeroUm > numeroDois){
		printf ("O número maior é: %f", numeroUm );
		 } else if (numeroUm < numeroDois){
		 	printf ("O número maior é: %f", numeroDois);
		 	 }else{
		 	   printf ("Os dois números são iguais");	
			  }
			
return 0;

}
