#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	float num1, num2, num3, num4, num5, resultado;
	
	
	printf("Digite um numero ");
	scanf("%f",&num1);
	
	printf("Digite um numero ");
	scanf("%f",&num2);
	
	printf("Digite um numero ");
	scanf("%f",&num3);
	
	printf("Digite um numero ");
	scanf("%f",&num4);
	
	printf("Digite um numero ");
	scanf("%f",&num5);
	
	resultado = num1 * num2 * num3 *num4 * num5;
	printf("O resultado eh %f",resultado); 
	
	return 0;
}
