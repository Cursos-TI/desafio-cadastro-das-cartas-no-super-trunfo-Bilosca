#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3], codigo1[50], cidade1[100];
    char estado2[3], codigo2[50], cidade2[100];
    int populacao1, PontosTuristicos1;
    int populacao2, PontosTuristicos2;
    float area1, pib1, area2, pib2;

    // Primeira carta
    printf("Começando o Jogo, insira os dados da sua primeira carta:\n");

    printf("Digite uma letra de A à H como seu estado: ");
    scanf(" %2s", estado1); // espaço antes ignora \n

    printf("Digite um número entre 01 - 04 como seu código: ");
    scanf(" %49s", codigo1);

    getchar(); // <- consome o \n deixado pelo scanf anterior
    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área em QUILOMETROS: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite quantos Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Segunda carta
    printf("\nAgora vamos registrar sua segunda carta:\n");

    printf("Digite uma letra de A à H como seu estado: ");
    scanf(" %2s", estado2);

    printf("Digite um número entre 01 - 04 como seu código: ");
    scanf(" %49s", codigo2);
   
    getchar(); // <- consome o \n antes do fgetsit 
    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área em QUILOMETROS: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantos Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Exibir as cartas
    printf("\n--- CARTA 1 ---\n");
    printf("ESTADO: %s\n", estado1);
    printf("CÓDIGO: %s\n", codigo1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos1);
    
    printf('-------------------------------------------');

    printf("\n--- CARTA 2 ---\n");
    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos2);

    return 0;
}
