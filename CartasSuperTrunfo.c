#include <stdio.h>

// Estrutura para representar uma carta
struct CartaSuperTrunfo {
    char estado;                
    char codigo[4];             
    char nomeCidade[100];      
    unsigned long int populacao; // População como unsigned long int
    float area;                 
    float pib;                  // Em bilhões
    int pontosTuristicos;      
    float densidade;           
    float pibPerCapita;        
    float superPoder;          
};

int main() {
    struct CartaSuperTrunfo carta1, carta2;

    // Entrada dos dados da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0f) / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao +
                        carta1.area +
                        carta1.pib +
                        (float)carta1.pontosTuristicos +
                        carta1.pibPerCapita +
                        (1.0f / carta1.densidade);

    // Entrada dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0f) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao +
                        carta2.area +
                        carta2.pib +
                        (float)carta2.pontosTuristicos +
                        carta2.pibPerCapita +
                        (1.0f / carta2.densidade);

    // Comparações (1 se carta 1 vence, 0 se carta 2 vence)
    int cmp_populacao = (carta1.populacao > carta2.populacao);
    int cmp_area = (carta1.area > carta2.area);
    int cmp_pib = (carta1.pib > carta2.pib);
    int cmp_turismo = (carta1.pontosTuristicos > carta2.pontosTuristicos);
    int cmp_densidade = (carta1.densidade < carta2.densidade); // menor é melhor
    int cmp_pibCapita = (carta1.pibPerCapita > carta2.pibPerCapita);
    int cmp_superPoder = (carta1.superPoder > carta2.superPoder);

    // Exibição das comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", cmp_populacao);
    printf("Área: Carta 1 venceu (%d)\n", cmp_area);
    printf("PIB: Carta 1 venceu (%d)\n", cmp_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", cmp_turismo);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", cmp_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", cmp_pibCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", cmp_superPoder);

    return 0;
}