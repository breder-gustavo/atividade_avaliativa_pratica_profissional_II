#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int idade, matricula, autorizacao;

    printf("Digite a idade do aluno: \n");
    scanf("%d", &idade);

    printf("Possui matrícula ativa? (digite 1 para 'sim' ou 0 para 'não'): \n");
    scanf("%d", &matricula);

    printf("Possui autorização do professor? (digite 1 para 'sim' ou 0 para 'não'): \n");
    scanf("%d", &autorizacao);

    if (idade >= 18 && matricula == 1 ) {
        printf("Acesso autorizado.\n");
    } else if (idade < 18 && matricula == 1 && autorizacao == 1) {
        printf("Acesso autorizado.\n");
    } else if (matricula == 0) {
        printf("Acesso negado.\n");
    }

    return 0;
}