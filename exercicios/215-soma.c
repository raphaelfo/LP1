#include <stdio.h>

int main(void){
	int n;
	int soma=0;
	printf("digite valor: ");
	scanf("%d",&n);
	while(n!=0){
		soma = soma+n;
		printf("digite valor: ");
		scanf("%d",&n);
	}
	printf("soma: %d\n",soma);
	return 0;
}
