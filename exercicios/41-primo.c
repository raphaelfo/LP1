#include <stdio.h>
int eh_primo(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
return 1;
}
int main(void){
	int n;
	int bol;
	printf("digite um numero ");
	scanf("%d",&n);
	bol = eh_primo(n);
    if(bol==0){
        printf("nao eh primo\n");
    }
    else{
        printf("eh primo\n");
    }
	return 0;
}
