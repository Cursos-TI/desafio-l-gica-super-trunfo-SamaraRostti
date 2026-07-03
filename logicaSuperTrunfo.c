#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível Básico: Comparação de um Atributo Escolhido

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char Estado1;
    char Cod_carta1[4];
    char NomeCidade1[30]; // Adicionado conforme exigido no novo enunciado
    int Populacao1, Num_pontos_P1;
    float Area1, PIB1;
    float Densidade1;
    float Pib_Capita1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char Estado2;
    char Cod_carta2[4];
    char NomeCidade2[30]; // Adicionado conforme exigido no novo enunciado
    int Populacao2, Num_pontos_P2;
    float Area2, PIB2;
    float Densidade2;
    float Pib_Capita2;

    // ================= CADASTRANDO A CARTA 1 =================
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite a letra do Estado (A a H): \n");
    scanf(" %c", &Estado1);
    printf("Digite o codigo da carta (Ex: A01): \n");
    scanf("%s", Cod_carta1);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", NomeCidade1); // O %[^\n] serve para ler nomes compostos (ex: São Paulo) com espaço
    printf("Digite o tamanho da populacao: \n");
    scanf("%d", &Populacao1);
    printf("Qual e o tamanho da area? \n");
    scanf("%f", &Area1);
    printf("Qual o PIB? \n");
    scanf("%f", &PIB1);
    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &Num_pontos_P1);

    printf("\n"); 

    // ================= CADASTRANDO A CARTA 2 =================
    printf("=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite a letra do Estado (A a H): \n");
    scanf(" %c", &Estado2);
    printf("Digite o codigo da carta (Ex: A02): \n");
    scanf("%s", Cod_carta2);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", NomeCidade2);
    printf("Digite o tamanho da populacao: \n");
    scanf("%d", &Populacao2);
    printf("Qual e o tamanho da area? \n");
    scanf("%f", &Area2);
    printf("Qual o PIB? \n");
    scanf("%f", &PIB2);
    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &Num_pontos_P2);


    // ================= CÁLCULOS DO SISTEMA =================
    // Nota: Usamos (float) antes da população para garantir uma divisão precisa de números reais
    Densidade1 = (float)Populacao1 / Area1;
    Pib_Capita1 = PIB1 / (float)Populacao1;

    Densidade2 = (float)Populacao2 / Area2;
    Pib_Capita2 = PIB2 / (float)Populacao2;


    // ================= EXIBIÇÃO DOS DADOS INDIVIDUAIS =================
    printf("\n==================================\n");
    printf("       CARTAS CADASTRADAS         \n");
    printf("==================================\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Cod_carta1);
    printf("Cidade: %s\n", NomeCidade1);
    printf("Populacao: %d Habitantes\n", Populacao1);
    printf("Area: %.2f M²\n", Area1);
    printf("PIB: R$%.2f Milhoes\n", PIB1);
    printf("Pontos Turisticos: %d\n", Num_pontos_P1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2f\n", Pib_Capita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Cod_carta2);
    printf("Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d Habitantes\n", Populacao2);
    printf("Area: %.2f M²\n", Area2);
    printf("PIB: R$%.2f Milhoes\n", PIB2);
    printf("Pontos Turisticos: %d\n", Num_pontos_P2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2f\n", Pib_Capita2);


    // ================= COMPARAÇÃO ESPECÍFICA (Exemplo: População) =================
    printf("\n==================================================\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("==================================================\n");

    // Mostra os competidores e seus valores conforme o modelo do enunciado
    printf("Carta 1 - %s (%c): %d\n", NomeCidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%c): %d\n", NomeCidade2, Estado2, Populacao2);
    printf("--------------------------------------------------\n");
    
    // Lógica utilizando if, else if e else para tratar empates
    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
    } 
    else if (Populacao2 > Populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomeCidade2);
    } 
    else {
        printf("Resultado: Empate! Ambas as cidades possuem a mesma populacao.\n");
    }

    return 0;
}