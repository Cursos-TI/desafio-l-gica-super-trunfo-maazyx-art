#include <stdio.h>

int main()
{ // informações sobre a carta1
    char estado1 = 'a';
    char cod_carta1[4] = "A01";
    char nome_cidade1[30] = "Guarulhos";
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_popu1;
    float pibpercapta1;
    double SuperPoder1;

    // carta2
    char estado2 = 'b';
    char cod_carta2[4] = "B01";
    char nome_cidade2[30] = "BeloHorizonte";
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_popu2;
    float pibpercapta2;
    double SuperPoder2;

    populacao1 = 1291784;
    populacao2 = 2315560;
    area1 = 318;
    area2 = 331;
    pib1 = 70000000000.0;
    pib2 = 105000000000.0;
    pontos_turisticos1 = 40;
    pontos_turisticos2 = 40;
    densidade_popu1 = (float)populacao1 / area1;
    pibpercapta1 = (float)pib1 / populacao1;
    densidade_popu2 = (float)populacao2 / area2;
    pibpercapta2 = (float)pib2 / populacao2;
    SuperPoder1 = (double)populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0 / densidade_popu1) + pibpercapta1;
    SuperPoder2 = (double)populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0 / densidade_popu2) + pibpercapta2;
    //inicio do jogo
    int menu;
    printf("\n MENU INICIAL \n");
    printf(" 1. iniciar jogo\n");
    printf(" 2. sair\n");
    printf("\n digite a opção\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
         //cartas
        printf("\n       EXIBINDO ATRIBUTOS DAS CIDADES\n");
        printf("***carta 1**\n");
        printf("\nEstado: %c\n", estado1);
		printf("\nCodigo: %s\n", cod_carta1);
		printf("\nNome da cidade: %s\n", nome_cidade1);
		printf("\nPopulação: %lu habitantes\n", populacao1);
		printf("\nArea:%.2f  km²\n", area1);
		printf("\nPib: %.2f \n", pib1);
		printf("\npontos turisticos: %d\n", pontos_turisticos1);
		printf("\ndensidade populacional: %.2f hab/km²\n", densidade_popu1);
		printf("\npib per capta: %.8f reais\n", pibpercapta1);
         
	
    	printf("***carta 2***\n");

		printf("\nEstado: %c\n", estado2);
		printf("\nCodigo: %s\n", cod_carta2);
		printf("\nNome da cidade: %s\n", nome_cidade2);
		printf("\nPopulação: %lu habitantes\n", populacao2);
		printf("\nArea:%.2f  km²\n", area2);
		printf("\nPib: %.2f \n", pib2);
		printf("\npontos turisticos: %d\n", pontos_turisticos2);
		printf("\ndensidade populacional: %.2f hab/km²\n", densidade_popu2);
		printf("\npib per capta: %.8f reais\n", pibpercapta2);
        // comparação, primeiro atributo.
        char primeiroatributo, segundoatributo;
        
        int resultado1 = -1, resultado2 = -1;//para empate
        //inicio do jogo
        printf("\n bem vindo ao jogo\n");
        printf("escolha o primeiro atributo\n");
        printf("A. populacao\n");
        printf("B. area\n");
        printf("C. pib\n");
        printf("D. pontos turisticos\n");
        printf("E. densidade populacional\n");
        printf("F.pib per capta\n");
        printf("G. total\n");
        printf("escolha a comparação: \n");
        scanf(" %c", &primeiroatributo);

        switch (primeiroatributo)
        {
        case 'A':
        case 'a':
            printf("Você escolheu a opção população!\n");
            printf("cidade 1: %lu\n cidade 2: %lu\n", populacao1, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : (populacao1 == populacao2 ? -1 : 0);

            break;
        case 'B':
        case 'b':
            printf("Você escolheu a opção area!\n");
            printf("cidade 1: %.2f\n cidade 2: %.2f\n", area1, area2);
            resultado1 = area1 > area2 ? 1 : (area1 == area2 ? -1 : 0);
            break;
        case 'C':
        case 'c':
            printf("Você escolheu a opção pib!\n");
            printf("cidade 1: %.2f\n cidade 2: %.2f\n", pib1, pib2);
            resultado1 = pib1 > pib2 ? 1 : (pib1 == pib2 ? -1 : 0);
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção pontos turisticos!\n");
            printf("cidade 1: %d\n cidade 2: %d\n", pontos_turisticos1, pontos_turisticos2);
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : (pontos_turisticos1 == pontos_turisticos2 ? -1 : 0);
            break;
        case 'E':
        case 'e':
            printf("Você escolheu a opção densidade populacional!\n");//na densidade o menor vence
            printf("cidade 1: %.2f\n cidade 2: %.2f\n", densidade_popu1, densidade_popu2);
            resultado1 = densidade_popu1 > densidade_popu2 ? 1 : (densidade_popu1 == densidade_popu2 ? -1 : 0);

            break;
        case 'F':
        case 'f':
            printf("Você escolheu a opção pib per capta!\n");
            printf("cidade 1: %.2f\n cidade 2: %.2f\n", pibpercapta1, pibpercapta2);
            resultado1 = pibpercapta1 > pibpercapta2 ? 1 : (pibpercapta1 == pibpercapta2 ? -1 : 0);
            break;
        case 'G':
        case 'g':
            printf("Você escolheu a opção total!\n");//total dos atributos, exceto na densidade(1.0/densidade)
            printf("cidade 1: %.2lf\n cidade 2: %.2lf\n",SuperPoder1, SuperPoder2);
            resultado1 = SuperPoder1 > SuperPoder2 ? 1 : (SuperPoder1 == SuperPoder2 ? -1 : 0);
            break;
        default:
            printf("\nOpção de jogo inválida!\n");
            break;
        }

        printf("escolha o segundo atributo\n");
        printf("A. populacao\n");
        printf("B. area\n");
        printf("C. pib\n");
        printf("D. pontos turisticos\n");
        printf("E. densidade populacional\n");
        printf("F.pib per capta\n");
        printf("G. total\n");
        printf("escolha a comparação: \n");
        scanf(" %c", &segundoatributo);
        if (primeiroatributo == segundoatributo)
        {
            printf("você escolheu o mesmo atributo!");
        }
        else
        {
            switch (segundoatributo)
            {
            case 'A':
            case 'a':
                printf("Você escolheu a opção população!\n");
                printf("cidade 1: %lu\n cidade 2: %lu\n", populacao1, populacao2);
                resultado2 = populacao1 > populacao2 ? 1 : (populacao1 == populacao2 ? -1 : 0);
                break;
            case 'B':
            case 'b':
                printf("Você escolheu a opção area!\n");
                printf("cidade 1: %.2f\n cidade 2: %.2f\n", area1, area2);
               resultado2 = area1 > area2 ? 1 : (area1 == area2 ? -1 : 0);
                break;
            case 'C':
            case 'c':
                printf("Você escolheu a opção pib!\n");
                printf("cidade 1: %.2f\n cidade 2: %.2f\n", pib1, pib2);
                resultado2 = pib1 > pib2 ? 1 : (pib1 == pib2 ? -1 : 0);
                break;
            case 'D':
            case 'd':
                printf("Você escolheu a opção pontos turisticos!\n");
                printf("cidade 1: %d\n cidade 2: %d\n", pontos_turisticos1, pontos_turisticos2);
                resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : (pontos_turisticos1 == pontos_turisticos2 ? -1 : 0);
                break;
            case 'E':
            case 'e':
                printf("Você escolheu a opção densidade populacional!\n");//na densidade o menor vence
                printf("cidade 1: %.2f\n cidade 2: %.2f\n", densidade_popu1, densidade_popu2);
                resultado2 = densidade_popu1 > densidade_popu2 ? 1 : (densidade_popu1 == densidade_popu2 ? -1 : 0);
                break;
            case 'f':
            case 'F':
                printf("Você escolheu a opção pib per capta!\n");
                printf("cidade 1: %.2f\n cidade 2: %.2f\n", pibpercapta1, pibpercapta2);
                resultado2 = pibpercapta1 > pibpercapta2 ? 1 : (pibpercapta1 == pibpercapta2 ? -1 : 0);
                break;
            case 'g':
            case 'G':
                printf("Você escolheu a opção total!\n");//total dos atributos, exceto na densidade(1.0/densidade)
                printf("cidade 1: %.2lf\n cidade 2: %.2lf\n", SuperPoder1, SuperPoder2);
                resultado2 = SuperPoder1 > SuperPoder2 ? 1 : (SuperPoder1 == SuperPoder2 ? -1 : 0);
            default:
                printf("\n Opção de jogo inválida!\n");
                break;
            }
            // resultado primeiro atributo
            if (resultado1 == 1)
            {
                printf("\n No primeiro atributo, Cidade 1 (Guarulhos) venceu!\n");
            }
            else if (resultado1 == 0)
            {
                printf("\n No primeiro atributo, Cidade 2 (Belo Horizonte) venceu!\n");
            }

           else if (resultado1 == -1)
            {
                printf("\n No primeiro atributo, Empate!\n");
            }

            // Resultado, Segundo Atributo
            if (resultado2 == 1)
            {
                printf("\n  No segundo atributo, Cidade 1 (Guarulhos) venceu\n");
            }
            else if (resultado2 == 0)
            {
                printf("\n No segundo atributo, Cidade 2 (Belo Horizonte) venceu!\n");
            }
           else if (resultado2 == -1)
            {
                printf("\n No segundo atributo, Empate!\n");
            }
        }
        break;
    case 2:
        printf("saindo.......");
        break;
    default:
        printf("seleção invalida");
        break;
    }

    return 0;
}