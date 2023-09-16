#include <stdio.h>

main(){
	float latao, cobre, zinco;
	
	printf("Informe a quantidade de latao que você deseja (em gramas): \n");
	scanf("%f", &latao);
	
	cobre = latao * 0.7;
	zinco = latao * 0.3;
	
	printf("%.1f g de cobre. \n", cobre);
	printf("%.1f g de zinco. \n", zinco);
		
}