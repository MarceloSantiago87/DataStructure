#include <stdio.h>
#include <locale.h>

int main(){
	float num1 = 0, num2 = 0;
	float result = 0;
	setlocale(LC_ALL, "portuguese");
	
	printf("Ol�! Seja bem vindo a sua calculadora de divis�o! \n");
	printf("------------------------------------------------- \n");
	printf("Digite o primeiro n�mero da divis�o: \n");

	scanf("%f", &num1);
	printf("Digite o segundo n�mero da divis�o: \n");
	scanf("%f", &num2);
	
	if(num2 != 0){
		result = num1/num2;
		printf("O quociente dos n�meros �: %.2f", result);
	}
	else{
		printf("ERRO: DIVIS�O POR ZERO");
	}
	
	return 0;
}