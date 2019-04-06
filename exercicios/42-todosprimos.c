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
void todosprimos(int max){
	int i;
    int bol; 
	for(i=1;i<max;i++){
		bol = eh_primo(i);
        if(bol == 1){
            printf("%d\n",i);
        }
	}
}
int main(void){
	int n;
	printf("digite um numero ");
	scanf("%d",&n);
	todosprimos(n);
	return 0;
}
