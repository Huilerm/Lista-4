#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int num;

    printf("Informe o número:\n");
    scanf("%d", &num);

    if(num%2==0){
        printf("O resultado é:\n0\n");
    }else{
        printf("O resultado é:\n1\n");
    }

system("pause");
return 0;
}
