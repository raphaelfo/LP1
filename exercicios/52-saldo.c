#include <stdio.h>
void compra(int* conta, int valor){
	*conta=*conta-valor;
}
int main(void){
	int minha_conta1;
	int minha_conta2;
	int* p;
	printf("digite o saldo conta1: ");
	scanf("%d",&minha_conta1);
	printf("digite o saldo conta2: ");
	scanf("%d",&minha_conta2);
	if(minha_conta1>minha_conta2){
		p=&minha_conta1;
	}
	else{
		p=&minha_conta2;
	}
	compra(p,500);
	printf("%d %d\n",minha_conta1,minha_conta2);
	return 0;
}
