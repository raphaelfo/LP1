#include <stdio.h>

int main(void){
    int n=5;
    int i;    
    char temps[n];
    int soma = 0;
    int cont = 0;
    float media = 0;
    for(i=0;i<n;i++){
        int temp;
        printf("digite a temperatura entre -100 e 100: ");
        scanf("%d",&temp);
        temps[i]=temp;
        soma=soma+temps[i];
    }
    media = (soma/n);
    //printf("media %.2f\n", media);//
    i=0;
    for(i=0;i<n;i++){
        if(temps[i]>=media){
            //printf("temperatura acima da media %d\n", temps[i]);//
            cont=cont+1;
        }
    }
    printf("temperaturas acima %d\n", cont);
    return 0;
}
