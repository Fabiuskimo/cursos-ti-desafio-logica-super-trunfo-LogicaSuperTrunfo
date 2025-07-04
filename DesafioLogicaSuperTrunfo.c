#include <stdio.h>

int main() {
    char nome[50];
    char nome2[50];
    char estado[50];
    char estado2[50];
    int populacao, populacao2;
    float area, area2;
    int pontos, pontos2;
    float pib, pib2;
    float densidade, densidade2;
    float pibPerCapita, pibPerCapita2;

    printf("Digite a letra que representa o Estado (Carta 1): ");
    scanf("%s", estado);

    printf("Digite o nome da Cidade (Carta 1): ");
    scanf("%s", nome);

    printf("Digite a População da Cidade (Carta 1): ");
    scanf("%d", &populacao);

    printf("Digite a Área da Cidade em km² (Carta 1): ");
    scanf("%f", &area);

    printf("Digite o número de Pontos Turísticos (Carta 1): ");
    scanf("%d", &pontos);

    printf("Digite o valor do PIB em bilhões de reais (Carta 1): ");
    scanf("%f", &pib);

    //Entrada dos dados da segunda carta
    printf("\nDigite a letra que representa o Estado (Carta 2): ");
    scanf("%s", estado2);

    printf("Digite o nome da Cidade (Carta 2): ");
    scanf("%s", nome2);

    printf("Digite a População da Cidade (Carta 2): ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade em km² (Carta 2): ");
    scanf("%f", &area2);

    printf("Digite o número de Pontos Turísticos (Carta 2): ");
    scanf("%d", &pontos2);

    printf("Digite o valor do PIB em bilhões de reais (Carta 2): ");
    scanf("%f", &pib2);

   
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    pibPerCapita = (pib * 1000000000) / populacao;  
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    //Exibição das cartas cadastradas 
    printf("\n CARTA 1 \n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: R$ %.2f\n", pib);

    printf("\n CARTA 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib2);

    //Comparação usando PIB per capita
    printf("\n COMPARAÇÃO \n");
    printf("Atributo utilizado: PIB per capita\n");
    printf("Carta 1 (%s - %s): R$ %.2f\n", estado, nome, pibPerCapita);
    printf("Carta 2 (%s - %s): R$ %.2f\n", estado2, nome2, pibPerCapita2);

    if (pibPerCapita > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", estado, nome);
    } else if (pibPerCapita2 > pibPerCapita) {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", estado2, nome2);
    } else {
        printf("Resultado: Empate!\n");
    }


    return 0;
}
