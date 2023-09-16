#include <stdio.h>
#include <locale.h> 

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num1 = 0;
	
	printf("Por favor, insira o número:");
	scanf("%d", &num1);
	
	if(num1 % 2 == 0){
		printf("O dobro do número é %d", (num1 * 2));
	}
	else{
		printf("O triplo do número é %d", (num1 * 3));
	}
	
	return 0;
}