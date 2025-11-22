#include <stdio.h>

int main() {

    int opcao = -1;

    while (opcao != 0) {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Somar dois numeros\n");
        printf("2 - Tabuada de um numero\n");
        printf("3 - Contar de 1 ate N\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: {
                float a, b;
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &a);
                printf("Digite o segundo numero: ");
                scanf("%f", &b);
                printf("Resultado da soma: %.2f\n", a + b);
                break;
            }

            case 2: {
                int num;
                printf("\nDigite um numero para ver a tabuada: ");
                scanf("%d", &num);

                printf("\nTabuada do %d:\n", num);
                for (int i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", num, i, num * i);
                }
                break;
            }

            case 3: {
                int n;
                printf("\nDigite o valor final N: ");
                scanf("%d", &n);

                printf("Contagem:\n");
                for (int i = 1; i <= n; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 0:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
