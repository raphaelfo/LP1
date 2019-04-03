#include <stdio.h>

int main(void){
	float vel;
	printf("digite a velocidade: ");
	scanf("%f",&vel);
	vel=vel*1.6;
	if (vel<=80){
		printf("ACELERA\n");
	}if(vel>80 && vel<100){
		printf("MANTENHA\n");
	}if(vel>=100){
		printf("DESACELERE\n");
	}
	return 0;
}
