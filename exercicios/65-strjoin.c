#include<stdio.h>
#include<string.h>

int strlen2 (char* str){
	int cont=0;
	while(str[cont] != '\0'){
		cont++;
	}
	return cont;
}

void strjoin (char* d, char* o1, char* o2){
	int n=0;
	int i;
	int j;
	if (d[0]!='\0'){
		d[0]='\0';
	}
	for(i=0;i<strlen2(o1);i++){
		d[i]=o1[i];	
	}
	for(j=0;j<strlen2(o2);j++){
		d[i]=o2[j];
		i++;	
	}
	printf("%s\n", d);
}

int main (void){
	char str[30];
	char str2[30];
	char dest[60];
	printf("digite 2 coisas: ");
	scanf("%s",str);
	scanf("%s",str2);
	strjoin(dest, str, str2);
	return 0;	
}
