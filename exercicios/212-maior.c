#include <stdio.h>

int main(void){
	int n1;
	int n2;
	printf("digite valor 1: ");
	scanf("%d",&n1);
	printf("digite valor 2: ");
	scanf("%d",&n2);
	if (n1>n2){
		printf("maior valor: %d\n",n1);
	}else{
		printf("maior valor: %d\n",n2);
	}
	return 0;
}
