// Crie um software que receba a idade, genero, peso, altura e exiba essas informações na tela

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	int idade;
	char genero[10];
	float peso, altura;
	
	
	printf("Digite sua idade ");
	scanf("%i", &idade);
	
	printf("Digite seu genero ");
	scanf("%s", &genero);
	
	printf("Digite seu peso ");
	scanf("%f", &peso);
	
	printf("Digite sua altura ");
	scanf("%f", &altura);
	
	printf("Suas informacoes sao: \n ");
	printf("Sua idade eh %i  \n", idade);
	printf("Seu genero eh %s \n" , genero);
	printf("Seu peso eh %f \n", peso);
	printf("Sua altura eh %f \n", altura);
	
	
	return 0;
}
