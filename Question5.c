#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3;
	int soma;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &num1);
	
	printf("Digite o segundo valor: \n");
	scanf("%d", &num2);
	
	printf("Digite o terceiro valor: \n");
	scanf("%d", &num3);
	
	if(num1 > num2 + num3){
		printf("O primeiro é MAIOR que os outros dois somados");
	}
	else{
		printf("O primeiro é MENOR que os outros dois somados");
	}
	
	return 0;
}