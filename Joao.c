#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int A, B, M;

    printf("Informe uma das notas:\n");
    scanf("%d", &A);
    printf("Informe a média:\n");
    scanf("%d", &M);

    B=(2*M)-A;

    printf("Resultado final:\n%d\n", B);

system("pause");
return 0;
}
