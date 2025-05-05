#include <stdio.h>

int main(){
    //vari�veis carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, capita1;

    //vari�veis carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, capita2;

    //entrada dados carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("C�digo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer antes de usar fgets
    fgets(cidade1, 50, stdin);

    printf("Popula��o: ");
    scanf("%d", &populacao1);

    printf("�rea (em km�): ");
    scanf("%f", &area1);

    printf("PIB (em bilh�es de reais): ");
    scanf("%f", &pib1);

    printf("N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada dados carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("C�digo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer antes de usar fgets
    fgets(cidade2, 50, stdin);

    printf("Popula��o: ");
    scanf("%d", &populacao2);

    printf("�rea (em km�): ");
    scanf("%f", &area2);

    printf("PIB (em bilh�es de reais): ");
    scanf("%f", &pib2);

    printf("N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontos2);

    densidade2 =  populacao2 / area2;
    capita2 =  (pib2 * 1000000000) / populacao2;


    // Exibi��o dados Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1); // fgets j� inclui \n
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);


     // Exibi��o dados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2); // fgets j� inclui \n
    printf("Popula��o: %d\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    return 0;

}











