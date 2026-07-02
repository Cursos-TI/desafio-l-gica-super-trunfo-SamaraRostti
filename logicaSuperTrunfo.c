#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
  // --- VARIÁVEIS DA CARTA 1 ---
  char Estado1;
  char Cod_carta1[4];
  int Populacao1, Num_pontos_P1;
  float Area1, PIB1;
  float Densidade1;
  float Pib_Capita1;
  float SuperPoder1; // Nova variável para o Super Poder da Carta 1

  // --- VARIÁVEIS DA CARTA 2 ---
  char Estado2;
  char Cod_carta2[4];
  int Populacao2, Num_pontos_P2;
  float Area2, PIB2;
  float Densidade2;
  float Pib_Capita2;
  float SuperPoder2; // Nova variável para o Super Poder da Carta 2

    // Cadastro das Cartas:
  // ================= CADASTRANDO A CARTA 1 =================
  printf("=== CADASTRO DA CARTA 1 ===\n");
  printf("Digite a letra do Estado (A a H): \n");
  scanf(" %c", &Estado1);
  printf("Digite o codigo da carta (Ex: A01): \n");
  scanf("%s", Cod_carta1);
  printf("Digite o tamanho da populacao: \n");
  scanf("%d", &Populacao1);
  printf("Qual e o tamanho da area? \n");
  scanf("%f", &Area1);
  printf("Qual o PIB? \n");
  scanf("%f", &PIB1);
  printf("Quantidade de pontos turisticos: \n");
  scanf("%d", &Num_pontos_P1);

  printf("\n"); // Só pula uma linha para separar

  // ================= CADASTRANDO A CARTA 2 =================
  printf("=== CADASTRO DA CARTA 2 ===\n");
  printf("Digite a letra do Estado (A a H): \n");
  scanf(" %c", &Estado2);
  printf("Digite o codigo da carta (Ex: A02): \n");
  scanf("%s", Cod_carta2);
  printf("Digite o tamanho da populacao: \n");
  scanf("%d", &Populacao2);
  printf("Qual e o tamanho da area? \n");
  scanf("%f", &Area2);
  printf("Qual o PIB? \n");
  scanf("%f", &PIB2);
  printf("Quantidade de pontos turisticos: \n");
  scanf("%d", &Num_pontos_P2);


  // ================= CÁLCULOS DO SISTEMA =================
  
  // Contas do Nível Aventureiro
  Densidade1 = Populacao1 / Area1;
  Pib_Capita1 = PIB1 / Populacao1;

  Densidade2 = Populacao2 / Area2;
  Pib_Capita2 = PIB2 / Populacao2;

  // Contas do Nível Mestre (Super Poder)
  // Nota: (float) converte a população temporariamente para float para não perder precisão na soma.
  // Nota 2: (1.0 / Densidade) calcula o inverso da densidade, cumprindo o requisito de menor densidade = mais poder.
  SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + (float)Num_pontos_P1 + Pib_Capita1 + (1.0 / Densidade1);
  SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + (float)Num_pontos_P2 + Pib_Capita2 + (1.0 / Densidade2);


  // ================= EXIBIÇÃO DOS DADOS INDIVIDUAIS =================
  printf("\n==================================\n");
  printf("       CARTAS CADASTRADAS         \n");
  printf("==================================\n");

  // Exibição da Carta 1
  printf("\n--- CARTA 1 ---\n");
  printf("Estado: %c\n", Estado1);
  printf("Codigo: %s\n", Cod_carta1);
  printf("Populacao: %d Habitantes\n", Populacao1);
  printf("Area: %.2f M²\n", Area1);
  printf("PIB: R$%.2f Milhoes\n", PIB1);
  printf("Pontos Turisticos: %d\n", Num_pontos_P1);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
  printf("PIB per Capita: R$ %.2f\n", Pib_Capita1);
  printf("Super Poder: %.2f\n", SuperPoder1);

  // Exibição da Carta 2
  printf("\n--- CARTA 2 ---\n");
  printf("Estado: %c\n", Estado2);
  printf("Codigo: %s\n", Cod_carta2);
  printf("Populacao: %d Habitantes\n", Populacao2);
  printf("Area: %.2f M²\n", Area2);
  printf("PIB: R$%.2f Milhoes\n", PIB2);
  printf("Pontos Turisticos: %d\n", Num_pontos_P2);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
  printf("PIB per Capita: R$ %.2f\n", Pib_Capita2);
  printf("Super Poder: %.2f\n", SuperPoder2);


  // ================= COMPARAÇÕES  =================
  printf("\n==================================\n");
  printf("      COMPARAÇÃO DE CARTAS        \n");
  printf("==================================\n");

  //foi realizado a comparação utilizando if e else
    
    if(Pib_Capita1 > Pib_Capita2)}
    printf("O PIB da Carta 01 é maior que o da Carta 2");
    }
    else{
        printf("o PIB da carta 02 é maior que a carta 01");
    }   

    if(Area1 > Area2)}
    printf("A area da Carta 01 é maior que o da Carta 2, carta 1 venceu!");
    }
    else{
        printf(""A area da Carta 02 é maior que o da Carta 1, carta 2 venceu!");
    }

        if(Densidade1 < Densidade2)}
    printf(" A densidade populacional da Carta 01 é menor que o da Carta 2, carta 1 venceu");
    }
    else{
        printf(" A densidade populacional da Carta 2 é menor que o da Carta 1, carta 2 venceu");
    }
  

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
