#include <stdio.h>

// Definição da estrutura para armazenar as informações
struct Cidade {
    char nome[50];           // Nome da cidade
    long int populacao;      // População
    int area;                // Área em km²
    double pib;              // PIB em bilhões
    int num_pontos_turisticos; // Número de pontos turísticos
};

int main() {
    struct Cidade cidade; // Criar uma variável do tipo struct Cidade

    // Entrada de dados pelo utilizador
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade.nome);

    printf("Digite a população: ");
    scanf("%ld", &cidade.populacao);

    printf("Digite a área em km²: ");
    scanf("%d", &cidade.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &cidade.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade.num_pontos_turisticos);

    // Exibição dos dados
    printf("\n===== Informações da Cidade =====\n");
    printf("Nome: %s\n", cidade.nome);
    printf("População: %ld habitantes\n", cidade.populacao);
    printf("Área: %d km²\n", cidade.area);
    printf("PIB: %.2f bilhões\n", cidade.pib);
    printf("Número de pontos turísticos: %d\n", cidade.num_pontos_turisticos);

    return 0;
}
