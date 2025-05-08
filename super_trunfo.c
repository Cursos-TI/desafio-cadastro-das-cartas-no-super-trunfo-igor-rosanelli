#include <stdio.h>

int main(){
    //variaveis carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, capita1;

    //variaveis carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, capita2;

    //entrada dados carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer antes de usar fgets
    fgets(cidade1, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    //calculos de media, Densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada dados carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer antes de usar fgets
    fgets(cidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    
    //calculos de media, Densidade populacional e PIB per capita
    densidade2 =  populacao2 / area2;
    capita2 =  (pib2 * 1000000000) / populacao2;


    // Exibição dados Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1); // fgets já inclui \n
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);


     // Exibição dados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2); // fgets já inclui \n
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    // Cálculo do Super Poder
    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + capita1 + (1 / densidade1);
    float superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + capita2 + (1 / densidade2);

    // Comparações
    int venceuPopulacao = populacao1 > populacao2;
    int venceuArea = area1 > area2;
    int venceuPIB = pib1 > pib2;
    int venceuPontos = pontos1 > pontos2;
    int venceuDensidade = densidade1 < densidade2; // menor vence
    int venceuCapita = capita1 > capita2;
    int venceuPoder = superPoder1 > superPoder2;

    // Exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", venceuPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", venceuArea);
    printf("PIB: Carta 1 venceu (%d)\n", venceuPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceuPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceuDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceuCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceuPoder);


    return 0;

}











