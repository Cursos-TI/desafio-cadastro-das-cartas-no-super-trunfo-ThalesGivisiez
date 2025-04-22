/*
Coletar informações de duas cidades, como estado, código, nome, população, área, PIB e pontos turísticos.

Calcula a densidade populacional (habitantes por km²) e PIB per capita.

Exibe os dados das duas cidades.

Comparação das cartas.

Exibir comparação. 

*/
#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado;
    char codigo[4], nome_cidade[20];
    int populacao, turistico;
    float area, pib, densidade_populacao, pib_percapita;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4], nome_cidade2[20];
    int populacao2, turistico2;
    float area2, pib2, densidade_populacao2, pib_percapita2;
    
    // Entrada dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado (Ex: A-H): ");
    scanf(" %c", &estado);  

    printf("Código da carta  (Ex: A01): ");
    scanf(" %4s", codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área (em km²): ");
    scanf(" %f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib);

    printf("Pontos turísticos: ");
    scanf(" %d", &turistico);

        // Entrada dos dados da Carta 2
    printf("Carta 2:\n ");

    printf("Estado (Ex: A-H): ");
    scanf(" %c", &estado2);  
    
     printf("Código da carta  (Ex: A01): ");
    scanf(" %4s", codigo2);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("População: ");
    scanf(" %d", &populacao2);
    
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    
    printf("Pontos turísticos: ");
    scanf(" %d", &turistico2);

    // Cálculos carta1 
    densidade_populacao = (float) populacao / area;// Calcula a densidade populacional (habitantes por km²).
    pib_percapita = pib / populacao;// Calcula o PIB per capita (PIB dividido pela população).

    // Cálculos carta2 
    densidade_populacao2 = (float) populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;

    //Carta 1
    unsigned int superPoder = (populacao + (unsigned int)area + (unsigned int )pib + (unsigned int)turistico + (unsigned int)densidade_populacao + (unsigned int)pib_percapita) - pib_percapita;
    //Carta 2
    unsigned int superPoder2 = populacao2 + ((unsigned int)area2 + (unsigned int)pib2 + (unsigned int)turistico2 + (unsigned int)densidade_populacao2 + (unsigned int)pib_percapita2) - pib_percapita2;

    
    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turistico);
    printf("Densidade populacional: %f hab/km²\n", densidade_populacao);
    printf("PIB per capita: %f reais\n", pib_percapita);
    printf("-----------------------------------------------------------------------------------------");
    
    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacao2);
    printf("PIB per capita: %.2f reais\n", pib_percapita2);
    printf("-----------------------------------------------------------------------------------------");
    
    // Comparação das cartas 
    printf("\nComparação das cartas \n " );
    printf("População: Carta 1 Venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 Venceu (%d)\n", area > area2);
    printf("PIB:  Carta 1 Venceu (%d)\n", pib > pib2);
    printf("Pontos turísticos: Carta 1 Venceu (%d)\n", turistico > turistico2);
    printf("Densidade populacional:  Carta 2 venceu (%d)\n", densidade_populacao < densidade_populacao2);
    printf("PIB per capita:Carta 1 Venceu (%d)\n", pib_percapita > pib_percapita2);
    printf("super poder carta 1 venceu (%d)\n", superPoder > superPoder2);
    
    return 0;
}
