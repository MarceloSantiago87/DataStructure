#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int lado1, lado2, lado3;
	
	printf("Informe o lado 1: \n");
	scanf("%d", &lado1);
	printf("Informe o lado 1: \n");
	scanf("%d", &lado2);
	printf("Informe o lado 1: \n");
	scanf("%d", &lado3);
	
	if(lado1 == lado2 && lado2 == lado3){
		printf("Os lados %d %d e %d formam um triângulo equilátero", lado1, lado2, lado3);
	}
	else if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
		printf("Os lados %d %d e %d formam um triângulo escaleno", lado1, lado2, lado3);
	}
	else if(lado1 != lado2 && lado1 == lado3 || lado1 == lado2 && lado1 != lado3 || lado2 == lado3 && lado3 != lado1){
		printf("Os lados %d %d e %d formam um triângulo isósceles", lado1, lado2, lado3);
	}
	else{
		printf("Insira um número válido!");
	}
}