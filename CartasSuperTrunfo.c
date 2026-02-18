#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf

int main(){
    char carta = '1', carta2 = '2';
    char estado, codigo[4], nome[30], estado2, codigo2[4], nome2[30];
    int populacao, pturisticos, populacao2, pturisticos2;
    float area, pib, area2, pib2, densidadep, pibpc, densidadep2, pibpc2;

    // Carta 1

    printf("Digite uma letra de 'A' a 'H' da carta: ");
    scanf(" %c", &estado); // %c sempre tem que ter um espaço no começo

    printf("Digite o código da carta: ");
    scanf("%s", &codigo); 

    printf("Digite o nome da cidade da carta: ");
    scanf("%s", &nome); 

    printf("Digite a quantia populacional da carta: ");
    scanf("%d", &populacao); 

    printf("Digite a área da carta: ");
    scanf("%f", &area); 

    printf("Digite o PIB da carta: ");
    scanf("%f", &pib); 
    
    printf("Digite a quantia de pontos turisticos da carta: ");
    scanf("%d", &pturisticos);

    densidadep = (populacao + area) / 2;
    pibpc = (pib + populacao) / 2;

    // Carta 2

    printf("\nAgora digite para a carta 2\n\n");
    printf("Digite uma letra de 'A' a 'H' da carta 2: ");
    scanf(" %c", &estado2); // %c sempre tem que ter um espaço no começo
 
    printf("Digite o código da carta 2: ");
    scanf("%s", &codigo2); 

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", &nome2); 

    printf("Digite a quantia populacional da carta 2: ");
    scanf("%d", &populacao2); 

    printf("Digite a área da carta 2: ");
    scanf("%f", &area2); 

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2); 
    
    printf("Digite a quantia de pontos turisticos da carta 2: ");
    scanf("%d", &pturisticos2);

    densidadep2 = (populacao2 + area2) / 2;
    pibpc2 = (pib2 + populacao2) / 2;

    //carta 1 resultados
    
    printf("\nCarta: %c\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2fkm² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pturisticos);
    printf("Densidade Populacional: %.2fhab/km²\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibpc);

    //carta 2 resultados

    printf("\nCarta: %c\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pturisticos2);
    printf("Densidade Populacional: %.2fhab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    return 0;
}