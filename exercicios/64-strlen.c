#include<stdio.h>
#include<string.h>

int strlen2 (char* str){
	int cont=0;
	while(str[cont] != '\0'){
		cont++;
	}
	return cont;
}

int main (void){
	char str[30];
	printf("digite algo: ");
	scanf("%s",str);
	printf("%d\n", strlen2(str));
	return 0;
}
