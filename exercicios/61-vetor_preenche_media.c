#include <stdio.h>
void preenche (int* v, int n){
	int i;
	for(i=0;i<n;i++){
		printf("digite o numero a adicionar ");
		scanf("%d",&v[i]);
	}
}

float media(int* v, int n){
	float m;
	int soma;
	int i;
	for(i=0;i<n;i++){
		soma=soma+v[i];
	}
	return m=soma/n;
}

int main (void){
	int n=100;
	int vec[n];
	float m;
	preenche(vec,n);
	m = media(vec,n);
	printf("media %.2f\n",m);
	return 0;
}
