#include <stdio.h>

int main()
{
	//cartas/

	//carta 1/
	char estado1 = 'a';
	char cod_carta1[4] = "A01";
	char nome_cidade1[30] = "Guarulhos";
	unsigned long int populacao1 = 1291784;
	float area1 = 318;
	float pib1 = 70000000000;
	int pontos_turisticos1 = 25;
	float densidade_popu1;
	float pibpercapta1;
	double SuperPoder1;
	densidade_popu1 = (float) populacao1 / area1;
	pibpercapta1= (float) pib1 / populacao1;
	SuperPoder1=(double)populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0 / densidade_popu1) + pibpercapta1;
           
	
	//carta 2/

	char estado2 = 'b';
	char cod_carta2[4] = "B01";
	char nome_cidade2[30] = "BeloHorizonte";
	unsigned long int populacao2 = 2315560;
	float area2 = 331;
	float pib2 = 105000000000;
	int pontos_turisticos2 = 30;
	float densidade_popu2;
	float pibpercapta2;
	double SuperPoder2;
    densidade_popu2 = (float) populacao2 / area2;
    pibpercapta2= (float)pib2 / populacao2;
    SuperPoder2 = (double)populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0 / densidade_popu2) + pibpercapta2;

	  
	
	 int escolha;
     char repetir;
	  do{
	 printf("\n MENU INICIAL \n");
	 printf(" 1. iniciar jogo\n");
     printf(" 2. sair\n");
	 printf("\n digite a opção\n");
	 scanf("%d", &escolha);

	 switch (escolha){
        case 1:
            
            printf("\n--------MOSTRANDO AS CARTAS-----------\n");  
            
            printf("\n revelando a carta 1......\n");
            printf(" ESTADO: %c\n", estado1);
            printf(" CODIGO: %s\n", cod_carta1);
            printf(" NOME DA CIDADE: %s\n", nome_cidade1);
            printf(" POPULAÇAO: %lu habitantes\n", populacao1);
            printf(" AREA: %.2f  km²\n", area1);
            printf(" PIB: %.2f reais \n", pib1);
            printf(" PONTOS TURISTICOS: %d\n", pontos_turisticos1);
            printf(" DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade_popu1);
            printf(" PIB PER CAPTA: %.2f reais\n", pibpercapta1);

            printf("\n revelando a carta 2......\n");
            printf(" ESTADO: %c\n", estado2);
            printf(" CODIGO: %s\n", cod_carta2);
            printf(" NOME DA CIDADE: %s\n", nome_cidade2);
            printf(" POPULAÇAO: %lu habitantes\n", populacao2);
            printf(" AREA: %.2f  km²\n", area2);
            printf(" PIB: %.2f reais \n", pib2);
            printf(" PONTOS TURISTICOS: %d\n", pontos_turisticos2);
            printf(" DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade_popu2);
            printf(" PIB PER CAPTA: %.2f reais\n", pibpercapta2);
        
        
            int escolha;
        
            printf("\n escolha qual atributo comparar\n");
            
            printf("1. População\n");
            printf("2. Area\n");
            printf("3. Pib\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional (menor ganha)\n");
            printf("6. Pib Per Capta\n");
            printf("7. Total\n");

            
            
            printf("digite o numero do atributo\n");
            scanf("%d", &escolha);
            
            switch (escolha) {
                case 1:

                if (populacao1 > populacao2) {
                    printf("população\n");
                    printf("Carta 1 venceu\n");                                     
                    printf("%lu hab > %lu hab \n", populacao1, populacao2);
                } else if (populacao2 > populacao1) {
                    printf("população\n");
                    printf("Carta 2 venceu\n");
                    printf("%lu hab > %lu hab \n", populacao2, populacao1);        
                } else {
                    printf("população\n");
                    printf("Empate!\n");
                    printf("%lu hab = %lu hab\n", populacao1, populacao2);
                }
                break;
                case 2:
                //area
                if (area1 > area2) {
                    printf("Area\n");
                    printf("Carta 1 venceu\n");
                    printf("%.2f km² > %.2f km²\n", area1, area2);
                }else if (area2 > area1) {
                    printf("Area\n");
                    printf("Carta 2 venceu\n");
                    printf("%.2f km² > %.2f km²\n", area2, area1);
                }else {
                    printf("Area\n");
                    printf("Empate!\n");
                    printf("%.2f km² = %.2f km²\n",  area1, area2);
                }
                break;
                case 3:
                // PIB
                if(pib1 > pib2) {
                    printf("Pib\n");
                    printf("Carta 1 venceu\n");
                    printf("%.2f reais > %.2f reais\n", pib1, pib2);
                }else if (pib2 > pib1) {
                    printf("Pib\n");
                    printf("Carta 2 venceu\n");
                    printf("%.2f reais > %.2f reais\n", pib2, pib1);
                }else {
                    printf("Pib\n");
                    printf("Empate!\n ");
                    printf("%.2f reais = %.2f reais\n",  pib1, pib2);
                    }
                break;
                
                case 4:
            //pontos turisticos
            if (pontos_turisticos1 > pontos_turisticos2){
                    printf("pontos turisticos\n");
                    printf("Carta 1 venceu\n");
                    printf("%d > %d\n", pontos_turisticos1, pontos_turisticos2);
                }else if (pontos_turisticos2 > pontos_turisticos1){
                    printf("pontos turisticos\n");
                    printf("Carta 2 venceu\n");
                    printf(" %d > %d\n", pontos_turisticos2 , pontos_turisticos1);
                }else {
                    printf("pontos turisticos\n");
                    printf("Empate!\n");
                    printf("%d = %d \n", pontos_turisticos1, pontos_turisticos2);
                    }
                break;
                case 5:
                //densidade
                if(densidade_popu1 < densidade_popu2){
                    printf("densidade populacional\n");
                    printf("Carta 1 venceu!\n");
                    printf("%.2f hab/km² < %.2f hab/km²\n", densidade_popu1, densidade_popu2);
                    printf("o menor ganha\n");
                }else if(densidade_popu2 < densidade_popu1){
                    printf("densidade populacional\n");
                    printf("Carta 2 venceu!\n");
                    printf("%.2f hab/km² < %.2f hab/km²\n", densidade_popu2, densidade_popu1);
                    printf("o menor ganha\n");
                }else{
                    printf("densidade populacional");
                    printf("Empate!\n");
                    printf ("%.2f hab/km² = %.2f hab/km²\n", densidade_popu1, densidade_popu2);
                    printf("o menor ganha\n");  
                    }    
                break;
                case 6:
                // PIB Per Capta
                if(pibpercapta1 > pibpercapta2){
                    printf("pib per capta\n");
                    printf("Carta 1 venceu! \n");
                    printf("%.2f reais > %.2f reais\n", pibpercapta1, pibpercapta2);
                }else if(pibpercapta2 > pibpercapta1){
                    printf("pib per capta\n");
                    printf("Carta 2 venceu! \n");
                    printf("%.2f reais > %.2f reais\n", pibpercapta2, pibpercapta1);
                }else {
                    printf("pib per capta");
                    printf("Empate!");
                    printf(" %.2f reais = %.2f reais\n", pibpercapta1, pibpercapta2);
                    }
                break;
                case 7:
                if(SuperPoder1 > SuperPoder2){
                    printf("pontuacão total");
                    printf("Carta 1 venceu!");
                    printf("%.2lf > %.2lf\n", SuperPoder1, SuperPoder2);
                    printf("parabéns");
                }else if(SuperPoder2 > SuperPoder1){
                    printf("pontuacão total\n");
                    printf("Carta 2 venceu!\n" );
                    printf("%.2lf > %.2lf\n", SuperPoder2, SuperPoder1);
                    printf("parabéns\n");
                }else {
                    printf("Empate!");
                    printf("%.2lf = %.2lf\n", SuperPoder1, SuperPoder2);
                }
                break;
                
                default:
                printf("Opção de comparação inválida.\n");
                break;
        }
         break;
         case 2:
         printf("saindo....");
         break;
         default:
         printf("selecao invalida");
    }
    
    printf("\n deseja tentar novamente?(s/n)");
    while(getchar()!='\n');
    scanf("%c", &repetir);
}   while (repetir=='s'|| repetir=='S');
    
    


    return 0;
}