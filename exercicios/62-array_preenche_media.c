#include <stdio.h>
void preenche (int v[4][2], int a, int b){
	int i;
	int j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("digite o numero a adicionar ");
			scanf("%d",&v[i][j]);
		}
	}
}

float media(int v[4][2], int a, int b){
	float m;
	int soma=0;
	int i;
	int j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			soma=soma+v[i][j];
		}
	}
	return m=soma/(a*b);
}

int main (void){
	int a=4;
	int b=2;
	int arr[4][2];
	float m;
	preenche(arr,a,b);
	m = media(arr,a,b);
	printf("media %.2f\n",m);
	return 0;
}
