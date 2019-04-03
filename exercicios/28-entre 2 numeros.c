#include <stdio.h>

int main(void){
	int n1;
	int n2;
	printf("digite valor 1: ");
	scanf("%d",&n1);
	printf("digite valor 2: ");
	scanf("%d",&n2);
	if(n2<n1){
	    int aux;
	    aux=n1;
	    n1=n2;
	    n2=aux;
	}
	while(n1<=n2){
	    printf("numeros %d\n",n1);
	    n1=n1+1;
	}
	return 0;
}
