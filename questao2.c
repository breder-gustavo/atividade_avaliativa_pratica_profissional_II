#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int opcao;

    printf("1. Fincaneiro\n");
    printf("2. Suporte Técnico\n");
    printf("3. Recursos Humanos\n");
    printf("4. Comercial\n");
    printf("5. Cancelamento\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Encaminhando para o setor fincaneiro.\n");
        break;
    case 2:
        printf("Encaminhando para o Suporte Técnico.\n");
        break;
    case 3:
        printf("Encaminhando para Recursos Humanos.\n");
        break;
    case 4:
        printf("Encaminhando para o setor comercial.\n");
        break;
    case 5:
        printf("Encaminhando para o setor de cancelamento.\n");
        break;
    default:
        printf("Opção de atendimento inválida.\n");
        break;
    }
    
    return 0;
}