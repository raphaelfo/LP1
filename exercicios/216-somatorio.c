#include <stdio.h>

int main(void){
	int n;
	int i;
	int soma=0;
	printf("digite valor: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		soma = soma+(i*i);
	}
	printf("soma: %d\n",soma);
	return 0;
}
