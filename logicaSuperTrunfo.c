#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado_1[10], estado_2[10]; // estado de A a H
    char codigo_1[10], codigo_2[10]; // código será letra do estado seguido de n° 01 a 04
    char cidade_1[50], cidade_2[50];
    unsigned long int populacao_1, populacao_2; // Alterado o tipo de dados
    int p_turisticos_1, p_turisticos_2;
    float area_1, area_2;
    float pib_1, pib_2;
    float densidade_1, densidade_2;
    float pib_pc_1, pib_pc_2;
    float superpoder_1, superpoder_2;
    int opcao;                // adição de variável para menu inicial.
    int atributo1, atributo2; // Nivel mestre - adicionado variaveis para ter mais de um atributo comparado.
    int resultado1 = 0;       // pontuação do jogador 1
    int resultado2 = 0;       // pontuação do jogador 2

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    printf("##### Super Trunfo: Países #####\n"); // Titulo, breve apresentação do jogo
    printf("Menu Principal\n");                   // nivel aventureiro: criação do menu principal
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nVamos Começar!\n");
        printf("Cada jogador deve realizar o cadastro de uma carta.\n\n");
        printf("|Jogador 01|\nCadastrar nova carta\n"); // jogador 01 irá iniciar o jogo cadastrando a carta 01

        printf("Estado (Escolha uma letra de A á H):\n"); // itens que serão cadastrados pelo jogador 01
        scanf("%s", estado_1);

        printf("Código (Letra do Estado seguida de um número 01 a 04): \n");
        scanf("%s", codigo_1);

        printf("Nome da Cidade: \n");
        scanf(" %[^\n]", cidade_1); 

        printf("População: \n");
        scanf("%lu", &populacao_1); // alterado tipo

        printf("Área em km²: \n");
        scanf("%f", &area_1);

        printf("PIB: \n");
        scanf("%f", &pib_1);

        printf("Nº de Pontos Turisticos: \n");
        scanf("%d", &p_turisticos_1);

        // calculos jogador 01
        densidade_1 = (float)populacao_1 / area_1;                                                                      // calculo da densidade populacional: populacao dividido por area
        pib_pc_1 = pib_1 / (float)populacao_1;                                                                          // calculo pib per capita: pib dividido por população
        superpoder_1 = ((float)populacao_1 + area_1 + pib_1 + (float)p_turisticos_1 + pib_pc_1 + (1.0f / densidade_1)); // calculo superpoder todos atributos numericos convertidos para tipo float

        printf("---------------------------------------------\n"); // mensagem ao jogador 01 que todos os itens foram cadastrados com sucesso
        printf("|Jogador 01|\nCarta 01 Cadastrada com Sucesso!\n");
        printf("---------------------------------------------\n\n");

        printf("|Jogador 02|\nCadastrar nova carta\n"); // Jogador 02 inicia novo cadastro para segunda carta

        printf("Estado (Escolha uma letra de A á H):\n"); // itens que serão cadastrados pelo jogador 02
        scanf("%s", estado_2);

        printf("Código (Letra do Estado seguida de um número 01 a 04): \n");
        scanf("%s", codigo_2);

        printf("Nome da Cidade: \n");
        scanf(" %[^\n]", cidade_2); //    scanf("%s", cidade_2);

        printf("População: \n");
        scanf("%lu", &populacao_2); // Alterado tipo

        printf("Área em km²: \n");
        scanf("%f", &area_2);

        printf("PIB: \n");
        scanf("%f", &pib_2);

        printf("Nº de Pontos Turisticos: \n");
        scanf("%d", &p_turisticos_2);

        // calculos jogador 02
        densidade_2 = populacao_2 / area_2;                                                                             // calculo da densidade populacional: populacao dividido por area
        pib_pc_2 = pib_2 / populacao_2;                                                                                 // calculo pib per capita: pib dividido por area
        superpoder_2 = ((float)populacao_2 + area_2 + pib_2 + (float)p_turisticos_2 + pib_pc_2 + (1.0f / densidade_2)); // calculo superpoder todos atributos numericos convertidos para tipo float

        printf("---------------------------------------------\n"); // mensagem ao jogador 02 que todos os itens foram cadastrados com sucesso
        printf("|Jogador 02|\nCarta 01 Cadastrada com Sucesso!\n");
        printf("---------------------------------------------\n\n");

        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("|Jogador 01|\nCarta 01\n"); // exibe carta 01 do jogador 01
        printf("Estado: %s\n", estado_1);
        printf("Código: %s\n", codigo_1);
        printf("Nome da Cidade: %s\n", cidade_1);
        printf("População: %lu habitantes\n", populacao_1); // alterado tipo de dados
        printf("Área: %.2f km²\n", area_1);
        printf("PIB: %.2f reais\n", pib_1);
        printf("Número de Pontos Turísticos: %d\n", p_turisticos_1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
        printf("PIB per Capita: %.2f reais\n", pib_pc_1);
        printf("Super Poder: %.2f\n\n", superpoder_1); // Adição de novo atributo na carta

        printf("|Jogador 02|\nCarta 01\n"); // exibe carta 01 do jogador 02
        printf("Estado: %s\n", estado_2);
        printf("Código: %s\n", codigo_2);
        printf("Nome da Cidade: %s\n", cidade_2);
        printf("População: %lu habitantes\n", populacao_2); // Alterado tipo de dados
        printf("Área: %.2f km²\n", area_2);
        printf("PIB: %.2f reais\n", pib_2);
        printf("Número de Pontos Turísticos: %d\n", p_turisticos_2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
        printf("PIB per Capita: %.2f reais\n", pib_pc_2);
        printf("Super Poder: %.2f\n\n", superpoder_2); // adição novo atributo na carta

        // Comparação de Cartas:
        // Desenvolva a lógica de comparação entre duas cartas.
        // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

        // Exemplo:
        // if (populacaoA > populacaoB) {
        //     printf("Cidade 1 tem maior população.\n");
        // } else {
        //     printf("Cidade 2 tem maior população.\n");
        // }

        // Exibição dos Resultados:
        // Após realizar as comparações, exiba os resultados para o usuário.
        // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

        // Exemplo:
        // printf("A cidade vencedora é: %s\n", cidadeVencedora);

        // Nivel Aventureiro: Alterado para o modo interativo para escolha do atributo a ser comparado, atraves do switch

        // printf("COMPARAÇÃO DE CARTAS\nAtributo: População\n\n"); // adicionado comparação entre cartas/jogadores
        // printf("JOGADOR 1 - %s: %lu\n", cidade_1, populacao_1);
        // printf("JOGADOR 2 - %s: %lu\n\n", cidade_2, populacao_2);

        printf("COMPARAÇÃO DE CARTAS\n"); // Adição do menu para escolha do primeiro atributo a ser comparado.
        printf("Escolha o primeiro Atributo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Nº Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("7. SuperPoder\n");
        printf("Escolha uma opção: ");
        scanf("%d", &atributo1);

        switch (atributo1) // comando switch para efetuar a comparação de um atributo a partir da escolha do atributo
        {
        case 1:
            if (populacao_1 > populacao_2) // lógica da comparação
            {
                resultado1++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: População\n");
                printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
            }
            else if (populacao_1 < populacao_2)
            {
                resultado2++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: População\n");
                printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
            }
            else
            {
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: População\n");
                printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                printf("\nResultado:\nEMPATE!!\n\n");
            };
            break;
        case 2:
            if (area_1 > area_2) // lógica da comparação
            {
                resultado1++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Área\n");
                printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
            }
            else if (area_1 < area_2)
            {
                resultado2++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Área\n");
                printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
            }
            else
            {
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Área\n");
                printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                printf("\nResultado:\nEMPATE!!\n\n");
            };
            break;
        case 3:
            if (pib_1 > pib_2)
            {
                resultado1++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: PIB\n");
                printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
            }
            else if (pib_1 < pib_2)
            {
                resultado2++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: PIB\n");
                printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
            }
            else
            {
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: PIB\n");
                printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                printf("\nResultado:\nEMPATE!!\n\n");
            };
            break;
        case 4:
            if (p_turisticos_1 > p_turisticos_2)
            {
                resultado1++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Nº Pontos Turísticos\n");
                printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
            }
            else if (p_turisticos_1 < p_turisticos_2)
            {
                resultado2++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Nº Pontos Turísticos\n");
                printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
            }
            else
            {
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Nº Pontos Turísticos\n");
                printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                printf("\nResultado:\nEMPATE!!\n\n");
            };
            break;
        case 5:
            if (densidade_1 < densidade_2)
            {
                resultado1++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Densidade Populacional\n");
                printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
            }
            else if (densidade_1 > densidade_2)
            {
                resultado2++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Densidade Populacional\n");
                printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
            }
            else
            {
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: Densidade Populacional\n");
                printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                printf("\nResultado:\nEMPATE!!\n\n");
            };
            break;
        case 6:

            if (pib_pc_1 > pib_pc_2)
            {
                resultado1++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: PIB per capita\n");
                printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
            }
            else if (pib_pc_1 < pib_pc_2)
            {
                resultado2++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: PIB per capita\n");
                printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
            }
            else
            {
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: PIB per capita\n");
                printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                printf("\nResultado:\nEMPATE!!\n\n");
            };
            break;
        case 7:
            if (superpoder_1 > superpoder_2)
            {
                resultado1++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: SuperPoder\n");
                printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
            }
            else if (superpoder_1 < superpoder_2)
            {
                resultado2++;
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: SuperPoder\n");
                printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
            }
            else
            {
                printf("\nCOMPARAÇÃO DE CARTAS\n");
                printf("Atributo escolhido: SuperPoder\n");
                printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                printf("\nResultado:\nEMPATE!!\n\n");
            };
            break;
        default:
            printf("\nOpção Inválida, Tente novamente!\n");
            printf("Escolha um atributo entre 1 e 7.\n\n"); // aqui começa a alteração

            printf("COMPARAÇÃO DE CARTAS\n"); // Adição do menu para escolha do primeiro atributo a ser comparado.
            printf("Escolha o primeiro Atributo:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Nº Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. SuperPoder\n");
            printf("Escolha uma opção: ");
            scanf("%d", &atributo1);

            switch (atributo1) // comando switch para efetuar a comparação de um atributo a partir da escolha do atributo
            {
            case 1:
                if (populacao_1 > populacao_2) // lógica da comparação
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (populacao_1 < populacao_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 2:
                if (area_1 > area_2) // lógica da comparação
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (area_1 < area_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 3:
                if (pib_1 > pib_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (pib_1 < pib_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 4:
                if (p_turisticos_1 > p_turisticos_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (p_turisticos_1 < p_turisticos_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 5:
                if (densidade_1 < densidade_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (densidade_1 > densidade_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 6:

                if (pib_pc_1 > pib_pc_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (pib_pc_1 < pib_pc_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 7:
                if (superpoder_1 > superpoder_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (superpoder_1 < superpoder_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            default:
                printf("\nOpção Inválida, Recomece a partida!\n\n");
                break;
            }
            break;
        } // aqui dentro desse default vai ser adicionado um novo switch

        // inicio da segunda comparação
        printf("COMPARAÇÃO DE CARTAS\n"); // Adição do menu para escolha do segundo atributo a ser comparado.
        printf("Escolha o segundo Atributo (diferente do primeiro):\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Nº Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("7. SuperPoder\n");
        printf("Escolha uma opção: ");
        scanf("%d", &atributo2);

        if (atributo2 != atributo1)
        {
            switch (atributo2) // comando switch para efetuar a comparação de um atributo a partir da escolha do atributo
            {
            case 1:
                if (populacao_1 > populacao_2) // lógica da comparação
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (populacao_1 < populacao_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 2:
                if (area_1 > area_2) // lógica da comparação
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (area_1 < area_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 3:
                if (pib_1 > pib_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (pib_1 < pib_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 4:
                if (p_turisticos_1 > p_turisticos_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (p_turisticos_1 < p_turisticos_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 5:
                if (densidade_1 < densidade_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (densidade_1 > densidade_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 6:

                if (pib_pc_1 > pib_pc_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (pib_pc_1 < pib_pc_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 7:
                if (superpoder_1 > superpoder_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (superpoder_1 < superpoder_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            default:
                printf("\nOpção Inválida, Tente novamente!\n");
                printf("Escolha um atributo entre 1 e 7.\n\n");

                printf("COMPARAÇÃO DE CARTAS\n"); // Adição do menu para escolha do segundo atributo a ser comparado se mesmo atributo for selecionado de acordo com o else if
                printf("Escolha o segundo Atributo (diferente do primeiro):\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Nº Pontos Turísticos\n");
                printf("5. Densidade Populacional\n");
                printf("6. PIB per capita\n");
                printf("7. SuperPoder\n");
                printf("Escolha uma opção: ");
                scanf("%d", &atributo2);

                switch (atributo2) // comando switch para efetuar a comparação de um atributo a partir da escolha do atributo
                {
                case 1:
                    if (populacao_1 > populacao_2) // lógica da comparação
                    {
                        resultado1++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: População\n");
                        printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                        printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                        printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                    }
                    else if (populacao_1 < populacao_2)
                    {
                        resultado2++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: População\n");
                        printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                        printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                        printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                    }
                    else
                    {
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: População\n");
                        printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                        printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                        printf("\nResultado:\nEMPATE!!\n\n");
                    };
                    break;
                case 2:
                    if (area_1 > area_2) // lógica da comparação
                    {
                        resultado1++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Área\n");
                        printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                        printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                        printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                    }
                    else if (area_1 < area_2)
                    {
                        resultado2++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Área\n");
                        printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                        printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                        printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                    }
                    else
                    {
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Área\n");
                        printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                        printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                        printf("\nResultado:\nEMPATE!!\n\n");
                    };
                    break;
                case 3:
                    if (pib_1 > pib_2)
                    {
                        resultado1++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: PIB\n");
                        printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                        printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                        printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                    }
                    else if (pib_1 < pib_2)
                    {
                        resultado2++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: PIB\n");
                        printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                        printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                        printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                    }
                    else
                    {
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: PIB\n");
                        printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                        printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                        printf("\nResultado:\nEMPATE!!\n\n");
                    };
                    break;
                case 4:
                    if (p_turisticos_1 > p_turisticos_2)
                    {
                        resultado1++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Nº Pontos Turísticos\n");
                        printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                        printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                        printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                    }
                    else if (p_turisticos_1 < p_turisticos_2)
                    {
                        resultado2++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Nº Pontos Turísticos\n");
                        printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                        printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                        printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                    }
                    else
                    {
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Nº Pontos Turísticos\n");
                        printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                        printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                        printf("\nResultado:\nEMPATE!!\n\n");
                    };
                    break;
                case 5:
                    if (densidade_1 < densidade_2)
                    {
                        resultado1++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Densidade Populacional\n");
                        printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                        printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                        printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                    }
                    else if (densidade_1 > densidade_2)
                    {
                        resultado2++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Densidade Populacional\n");
                        printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                        printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                        printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                    }
                    else
                    {
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: Densidade Populacional\n");
                        printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                        printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                        printf("\nResultado:\nEMPATE!!\n\n");
                    };
                    break;
                case 6:

                    if (pib_pc_1 > pib_pc_2)
                    {
                        resultado1++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: PIB per capita\n");
                        printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                        printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                        printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                    }
                    else if (pib_pc_1 < pib_pc_2)
                    {
                        resultado2++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: PIB per capita\n");
                        printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                        printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                        printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                    }
                    else
                    {
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: PIB per capita\n");
                        printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                        printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                        printf("\nResultado:\nEMPATE!!\n\n");
                    };
                    break;
                case 7:
                    if (superpoder_1 > superpoder_2)
                    {
                        resultado1++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: SuperPoder\n");
                        printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                        printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                        printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                    }
                    else if (superpoder_1 < superpoder_2)
                    {
                        resultado2++;
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: SuperPoder\n");
                        printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                        printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                        printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                    }
                    else
                    {
                        printf("\nCOMPARAÇÃO DE CARTAS\n");
                        printf("Atributo escolhido: SuperPoder\n");
                        printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                        printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                        printf("\nResultado:\nEMPATE!!\n\n");
                    };
                    break;
                default:
                    printf("\nOpção Inválida, Tente novamente!\n\n");
                    break;
                }

                break;
            };
        }
        else
        {
            printf("\nVocê escolheu o mesmo atributo!\n");
            printf("Escolha outro atributo para comparação.\n\n");

            printf("COMPARAÇÃO DE CARTAS\n"); // Adição do menu para escolha do segundo atributo a ser comparado se mesmo atributo for selecionado de acordo com o else if
            printf("Escolha o segundo Atributo (diferente do primeiro):\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Nº Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. SuperPoder\n");
            printf("Escolha uma opção: ");
            scanf("%d", &atributo2);

            switch (atributo2) // comando switch para efetuar a comparação de um atributo a partir da escolha do atributo
            {
            case 1:
                if (populacao_1 > populacao_2) // lógica da comparação
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (populacao_1 < populacao_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: População\n");
                    printf("JOGADOR 1 - %s: %lu habitantes\n", cidade_1, populacao_1);
                    printf("JOGADOR 2 - %s: %lu habitantes\n", cidade_2, populacao_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 2:
                if (area_1 > area_2) // lógica da comparação
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (area_1 < area_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Área\n");
                    printf("JOGADOR 1 - %s: %.2f km²\n", cidade_1, area_1);
                    printf("JOGADOR 2 - %s: %.2f km²\n", cidade_2, area_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 3:
                if (pib_1 > pib_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (pib_1 < pib_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 4:
                if (p_turisticos_1 > p_turisticos_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (p_turisticos_1 < p_turisticos_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Nº Pontos Turísticos\n");
                    printf("JOGADOR 1 - %s: %d\n", cidade_1, p_turisticos_1);
                    printf("JOGADOR 2 - %s: %d\n", cidade_2, p_turisticos_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 5:
                if (densidade_1 < densidade_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (densidade_1 > densidade_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("JOGADOR 1 - %s: %.2f hab/km²\n", cidade_1, densidade_1);
                    printf("JOGADOR 2 - %s: %.2f hab/km²\n", cidade_2, densidade_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 6:

                if (pib_pc_1 > pib_pc_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (pib_pc_1 < pib_pc_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: PIB per capita\n");
                    printf("JOGADOR 1 - %s: %.2f reais\n", cidade_1, pib_pc_1);
                    printf("JOGADOR 2 - %s: %.2f reais\n", cidade_2, pib_pc_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            case 7:
                if (superpoder_1 > superpoder_2)
                {
                    resultado1++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("Resultado:\n| JOGADOR 1 | VENCEU!!\n\n");
                }
                else if (superpoder_1 < superpoder_2)
                {
                    resultado2++;
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("Resultado:\n| JOGADOR 2 | VENCEU!!\n\n");
                }
                else
                {
                    printf("\nCOMPARAÇÃO DE CARTAS\n");
                    printf("Atributo escolhido: SuperPoder\n");
                    printf("JOGADOR 1 - %s: %.2f\n", cidade_1, superpoder_1);
                    printf("JOGADOR 2 - %s: %.2f\n", cidade_2, superpoder_2);
                    printf("\nResultado:\nEMPATE!!\n\n");
                };
                break;
            default:
                printf("\nOpção Inválida, Recomece a partida!\n\n");
                break;
            }
        }

        // Resultado final
        printf("\n======= Placar Final =======\n");
        printf("JOGADOR 1: %d ponto(s)\n", resultado1);
        printf("JOGADOR 2: %d ponto(s)\n", resultado2);

        if (resultado1 > resultado2)
        {
            printf("Resultado Final:\n| JOGADOR 1 | VENCEU!!\n\n");
        }
        else if (resultado2 > resultado1)
        {
            printf("Resultado Final:\n| JOGADOR 2 | VENCEU!!\n\n");
        }
        else
        {
            printf("Resultado Final: \nEMPATE!!\n\n");
        }
        break;
    case 2:
        printf("\n*** Regras ***\n");
        printf("No Super Trunfo, jogadores competem usando cartas com diferentes atributos. \nUm jogador escolhe um atributo de sua carta e o outro jogador compara o mesmo atributo de sua própria carta. \nQuem tiver o valor mais alto para o atributo escolhido vence a rodada.\n\n");
        break;
    case 3:
        printf("\nSaindo...\n\n");
        break;
    default:
        printf("\nOpção Inválida, Tente novamente!\n\n");
        break;
    };

    return 0; // fim do codigo
};