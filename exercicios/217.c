#include <stdio.h>

int main(void){
	int i;
	int v;
	int e;
	int d;
	int total=0;
	//char nome[10];
	for(i=0;i<20;i++){
	    /*printf("nome do time");
	    scanf("%c",&nome[i]);*/
	    printf("qtd de vitorias: ");
	    scanf("%d",&v);
	    printf("qtd de empates: ");
	    scanf("%d",&e);
	    printf("qtd de derrotas: ");
	    scanf("%d",&d);
	    total = (3*v)+e;
	    //printf("pontos do time %c: %d\n",nome[i],total);
	    printf("pontos do time: %d\n",total);
	}
	return 0;
}
