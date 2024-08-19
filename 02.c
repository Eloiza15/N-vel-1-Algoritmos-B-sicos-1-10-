#include <stdio.h>
#include <locale.h>

//Nível 1: Algoritmos Básicos (1-10)

//Somar Dois Números: Lê dois números e exibe a soma deles.

int main (){
	setlocale(LC_ALL, "");
	
float numero1;
float numero2;

printf ("Escreva o primeiro número da soma:\n");
scanf ("%f", &numero1);

printf ("Escreva o segundo número da soma:\n");
scanf ("%f", &numero2);

float resultado = numero1+numero2;

printf("A soma desses dois números é: %f", resultado);

return 0;

}

