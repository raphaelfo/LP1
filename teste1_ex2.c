#include <stdio.h>

int main (void){
	int n1;
	int n2;
	printf("Escolha o numero 1:");
	scanf("%d",&n1);
	printf("Escolha o numero 2:");
	scanf("%d",&n2);
	if(n1>n2){
		int aux;
		aux = n1;
		n1=n2;
		n2=aux;
	}
	while (n2>=n1){
		if(n2%2==0){
			printf("%d\n",n2);
		}
		n2=n2-1;
	}
	return 0;
}
