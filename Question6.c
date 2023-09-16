#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	float velocidade, limite, final, multa;
	
	printf("Digite a velocidade máxima da via: \n");
	scanf("%f", &limite);
	printf("Digite a velocidade do veículo: \n");
	scanf("%f", &velocidade);
	
	final = velocidade - limite;
	
	printf("%.2f", final);
	
	if(final <= 0){
		printf("\n Velocidade dentro do padrão, nenhuma multa foi aplicada. \n");
	} 
	else{
		if(final > 31){
			multa = 200;
		}
		else if(final >= 11){
			multa = 100;
		}
		else{
			multa = 50;
		}
	}	
	
	printf("\n Sua multa foi de %.2f \n", multa);
}