#include <stdio.h>
void troca(int* v1, int* v2){
	int aux;
    aux= *v1;
    *v1=*v2;
    *v2=aux;
}
int main(void){
	int v1;
	int v2;
	int* p1=&v1;
    int* p2=&v2;
	printf("digite o valor1: ");
	scanf("%d",&v1);
	printf("digite o valor2: ");
	scanf("%d",&v2);
	troca(p1,p2);
	printf("%d %d\n",v1,v2);
	return 0;
}
