#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int num;

    printf("Informe o n�mero:\n");
    scanf("%d", &num);

    if(num%2==0){
        printf("O resultado �:\n0\n");
    }else{
        printf("O resultado �:\n1\n");
    }

system("pause");
return 0;
}
