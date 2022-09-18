#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, resultado;
	
	printf("Digite um numero");
	scanf("%i",&num1);
	
	printf("Digite outro numero");
	scanf("%i",&num2);
	
	resultado = num1-num2;
	printf("O resulatdo e %i", resultado);
	
	return 0;
}
