#include <stdio.h>

int main(void){
	int a;
	int b;
	int* p;
	printf("digite valor 1: ");
	scanf("%d",&a);
	printf("digite valor 2: ");
	scanf("%d",&b);
	printf("%d %d\n",a,b);
	if(a>b){
		p=&a;
	}
	else{
		p=&b;
	}
	*p=*p-50;
	printf("%d %d\n",a,b);
	return 0;
}
