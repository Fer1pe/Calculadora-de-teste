#include <stdio.h>
#include "minha_funcao.h"

enum{
    OP_SAIR = 0,
    OP_SOMAR,
    OP_SUBTRAIR,
    OP_MULTIPLICAR,
    OP_DIVIDIR,
};

int main(void)
{
    int resultado;
    int opcao = -1;
    int num1, num2;

    while(opcao != OP_SAIR){

        printf("\nCALCULADORA DE FUNÇÃO");
        printf("\n1- Somar");
        printf("\n2- Subtrair");
        printf("\n3- Multiplicar");
        printf("\n4- Dividir");
        printf("\n0 - SAIR");
        printf("\nSelecione uma opcao:");
        scanf("\n%d", &opcao);

        if(opcao != OP_SAIR){
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero");
            scanf("%d", &num2);

        }

        switch(opcao) {
            case OP_SOMAR:
                resultado = somar(num1, num2);
            printf("a soma eh: %d\n", resultado);
            break;

            case OP_SUBTRAIR:
                resultado = subtrair(num1, num2);
            printf("a subtracao eh: %d", resultado);
            break;

            case OP_MULTIPLICAR:
                resultado = multiplicar(num1, num2);
            printf("a multiplicacao eh: %d", resultado);
            break;

            case OP_DIVIDIR:
                resultado = dividir(num1, num2);
            printf("a divisao eh: %d", resultado);
            break;

            case OP_SAIR:
                printf("Saindo da calculadora...");
            break;
        }
    }
    return 0;
}
