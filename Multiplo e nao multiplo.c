#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int A, B;

    printf("Informe os dois valores:\n");
    scanf("%d %d", &A ,&B);

    if(A>B){
        if(A%B==0){
        printf("S�o multiplos.\n");
       }else{
        printf("N�o s�o multiplos.\n");
       }
    }else{
        if(B%A==0){
        printf("S�o multiplos.\n");
        }else{
        printf("N�o s�o multiplos.\n");
        }
    }
system("pause");
return 0;
}
