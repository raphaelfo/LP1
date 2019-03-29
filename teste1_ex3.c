#include <stdio.h>

int main (void){
	int n=50;	
	char notas[n];
	int i;
	int soma=0;
	int cont=0;
	float media=0;
	for(i=0;i<n;i++){
		int nota;
		printf("digite a nota do aluno %d de 0 a 100:",i);
		scanf("%d",&nota);
		soma=soma+nota;
		notas[i]=nota;
	}
	media = soma/n;
	for(i=0;i<n;i++){
		if(notas[i]>=media){
			cont=cont+1;
		}		
	}
	printf("media: %.2f\nqtd de pessoas acima: %d\n",media,cont); 
	return 0;
}
