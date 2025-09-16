#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define TAM_NOME 30
#define TAM_COR 10

struct Territorio {
    char nome[TAM_NOME];
    char corExercito[TAM_COR];
    int quantidadeTropas;
};

int main() {
    struct Territorio territorios[MAX_TERRITORIOS];
    
    printf("=== CADASTRO DE TERRITORIOS ===\n\n");
    
    // Cadastro dos Territorios utilizando loop for
    
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", territorios[i].nome);
        
        printf("Cor do exercito: ");
        scanf("%s", territorios[i].corExercito);
        
        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].quantidadeTropas);
        
        printf("\n");
    }
    
    // Exibição
    printf("\n=== TERRITORIOS CADASTRADOS ===\n\n");
    
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor: %s\n", territorios[i].corExercito);
        printf("  Tropas: %d\n", territorios[i].quantidadeTropas);
        printf("------------------------\n");
    }
    
    return 0;
}