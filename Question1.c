#include <stdio.h>
#include <locale.h>

int main(){
	float num1 = 0, num2 = 0;
	float result = 0;
	setlocale(LC_ALL, "portuguese");
	
	printf("Olá! Seja bem vindo a sua calculadora de divisão! \n");
	printf("------------------------------------------------- \n");
	printf("Digite o primeiro número da divisão: \n");

	scanf("%f", &num1);
	printf("Digite o segundo número da divisão: \n");
	scanf("%f", &num2);
	
	if(num2 != 0){
		result = num1/num2;
		printf("O quociente dos números é: %.2f", result);
	}
	else{
		printf("ERRO: DIVISÃO POR ZERO");
	}
	
	return 0;
}