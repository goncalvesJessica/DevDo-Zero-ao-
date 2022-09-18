#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//- Formula =  F = C - 32/ 1.8.
int main(int argc, char *argv[]) {
	
	float celsius, fahrenheit;
	
	printf("Digite uma temperatura em Celsius e converta para Fahrenheit ");
	scanf("%f",&celsius);
	
	fahrenheit = (celsius - 32) /1.8;
	printf("A temperatura e %f", fahrenheit);
	
		return 0;
}
