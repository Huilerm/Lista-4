#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float salario, excesso, imposto;

    printf("Informe o valor do seu salário:\n");
    scanf("%f", &salario);

    if(salario<=2000.00){
        printf("Você está isento do imposto de renda.\n");
    }else if(salario<=3000.00){
        excesso=salario-2000.00;
        imposto=excesso*0.08;
        printf("O seu imposto de renda é:\nR$ %.2f\n", imposto);
    }else if(salario<=4500.00){
        excesso=salario-3000.00;
        imposto=(excesso*0.18)+(1000.00*0.08);
        printf("O seu imposto de renda é:\nR$ %.2f\n", imposto);
    }else{
        excesso=salario-4500.00;
        imposto=(excesso*0.28)+(1000.00*0.08)+(1500.00*0.18);
        printf("O seu imposto de renda é:\nR$ %.2f\n", imposto);
    }

system("pause");
return 0;
}
