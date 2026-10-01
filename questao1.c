#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int idade, conhecimento;
    float media, frequencia;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua média acadêmica (0 a 10): \n");
    scanf("%f", &media);

    
    printf("Digite o seu percentual de presença: \n");
    scanf("%f", &frequencia);

    printf("Possui conhecimento em programação? (1 para 'sim' ou 0 para 'não'): \n");
    scanf("%d", &conhecimento);

    if (idade < 16) {
        printf ("Usuário não tem idade mínima");
    } else if (media >= 8.0 && frequencia >= 80.0 && conhecimento == 1) {
        printf ("Candidato aprovado diretamente.");
    } else if (media >= 7.0 && frequencia >= 75.0 && conhecimento == 1) {
        printf ("Candidato selecionado para entrevista.");
    } else if (media >= 7.0 && frequencia >= 75.0 && conhecimento == 0) {
        printf ("Candidato direcionado para o curso preparatório.");
    } else {
        printf ("Candidato não selecionado.");
    }
    
    return 0;
}