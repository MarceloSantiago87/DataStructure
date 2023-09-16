#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	int num1, num2, num3, num4;
	int soma = 0;
	
	printf("Insira o primeiro número: \n");
	scanf("%d", &num1);
	if(num1 % 2 == 0){
		soma = soma + num1; 
	}
	printf("Insira o segundo número: \n");
	scanf("%d", &num2);
	if(num2 % 2 == 0){
		soma = soma + num2; 
	}
	printf("Insira o terceiro número: \n");
	scanf("%d", &num3);
	if(num3 % 2 == 0){
		soma = soma + num3; 
	}
	printf("Insira o quarto número: \n");
	scanf("%d", &num4);
	if(num4 % 2 == 0){
		soma = soma + num4; 
	}
	
	printf("Soma dos pares: %d \n", soma);
}