#include <stdio.h>

int main(void){
	float preco;
	printf("digite valor do celular em dol: ");
	scanf("%f",&preco);
	preco=preco*3.17;
	if(preco < 1000.00){
		printf("BOM NEGOCIO");
	}else{
		printf("Compra no brasil");
	}
	return 0;
}
