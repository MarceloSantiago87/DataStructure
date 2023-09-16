#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float cigarros, cigarros_ano, cartelas, anos, dias, valor_cartela, valor_total;
	
	printf("Informe a quantidade de anos que você fumou: \n");
	scanf("%f", &anos);
	
	dias = anos * 365;
	
	printf("Informe a quantidade de cigarros por dia: \n");
	scanf("%f", &cigarros);
	
	cigarros_ano = dias * cigarros;
	
	cartelas = cigarros_ano / 20;
	
	printf("Informe o valor da carteira de cigarros: \n");
	scanf("%f", &valor_cartela);
	
	valor_total = cartelas * valor_cartela;
	
	printf("Você já gastou R$ %.2f", valor_total);
	
	return 0;
}