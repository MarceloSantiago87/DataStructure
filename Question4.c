#include <stdio.h>
#include <math.h>

int main(){
	float radius, height, volume;
	float pi = 3.1418;
	
	printf("Please insert the value of the cylinder's radius: \n");
	scanf("%f", &radius);
	printf("Please insert the value of the cylinder's height: \n");
	scanf("%f", &height);
	
	volume = (pow(radius, 2)) * height * pi;
	
	printf("O volume é de %.2f litros.", volume);
	
	return 0;
}