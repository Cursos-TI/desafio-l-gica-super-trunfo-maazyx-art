#include <stdio.h>

int main()
{
	/*cartas*/

	/*carta 1*/
	char estado1 = 'a';
	char cod_carta1[4] = "A01";
	char nome_cidade1[30] = "Guarulhos";
	unsigned long int populacao1 = 1291784;
	float area1 = 318;
	float pib1 = 77000000000;
	int pontos_turisticos1 = 25;
	float densidade_popu1;
	float pibpercapta1;
	double SuperPoder1;
	
	 densidade_popu1 = (float) populacao1 / area1;
	 pibpercapta1 = (float) pib1 / populacao1;
	
	/*carta 2*/

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
	
/*mostrando as cartas*/

	/*carta 1*/
	printf("***revelando a carta %s****\n", nome_cidade1);

	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", cod_carta1);
	printf("Nome da cidade: %s\n", nome_cidade1);
	printf("População: %lu habitantes\n", populacao1);
	printf("Area:%.2f  km²\n", area1);
	printf("Pib: %.2f reais \n", pib1);
	printf("pontos turisticos: %d\n", pontos_turisticos1);


	printf("densidade populacional: %.2f hab/km²\n", densidade_popu1);

	printf("pib per capta: %.2f reais\n", pibpercapta1);

	/*carta 2*/
	printf("***revelando a carta %s****\n", nome_cidade2);

	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", cod_carta2);
	printf("Nome da cidade: %s\n", nome_cidade2);
	printf("População: %lu habitantes\n", populacao2);
	printf("Area:%.2f  km²\n", area2);
	printf("Pib: %.2f reais\n", pib2);
	printf("pontos turisticos: %d\n", pontos_turisticos2);
	printf("densidade populacional: %.2f hab/km²\n", densidade_popu2);
	printf("pib per capta: %.2f reais\n", pibpercapta2);

	printf("***comparando as cartas***\n");

	if (populacao1 > populacao2){
		 printf("carta 1 venceu. população: %lu hab>%luhab \n", populacao1, populacao2);
	}

	else{
		if (populacao2 > populacao1){
			printf("carta 2 venceu. população: %lu hab>%lu hab \n", populacao2, populacao1);
		}
		else{
			printf("empate! populações: %lu hab=%lu hab\n", populacao1, populacao2);
		}
	}



	if (area1 > area2){
		 printf("carta 1 venceu. area: %.2f km²> %.2f km²\n", area1, area2);
	}

	else{
		if (area2 > area1){
			 printf("carta 2 venceu. area: %.2f km²> %.2f km²\n", area2,  area1);
		}
		else{
			 printf("empate! areas: %.2f km² =%.2f km²\n",  area1, area2);
		}
	}

	if (pib1 > pib2){
		 printf("carta 1 venceu. pib: %.2f reais >%.2f reais\n", pib1, pib2);
	}

	else{
		if (pib2 > pib1){
			 printf("carta 2 venceu. pib: %.2f reais >%.2f reais\n", pib2, pib1);
		}
		else{
			 printf("empate! areas: %.2f reais =%.2f reais\n",  pib1, pib2);
        }
	}


	if (pontos_turisticos1 > pontos_turisticos2){
		 printf("carta 1 venceu. pontos turisticos: %d>%d\n", pontos_turisticos1, pontos_turisticos2);
    }

	else{
		if (pontos_turisticos2 > pontos_turisticos1){
			 printf("carta 2 venceu. pontos turisticos: %d>%d\n", pontos_turisticos2 , pontos_turisticos1);
        }
 	    else{
		     printf("empate! areas: %d =%d \n", pontos_turisticos1, pontos_turisticos2);
        }
 	
	}
	
	//o menor valor ganha, valores anteriores as divisões 1.0/densidade_popu1 e 1.0/densidade_popu2 
	
	if(densidade_popu1<densidade_popu2){
		 printf("carta 1 venceu! (a menor densidade ganha) densidade populacional: %.2f hab/km²<%.2f hab/km²\n", densidade_popu1, densidade_popu2);
	}
	else{
		if(densidade_popu2<densidade_popu1){
			 printf("carta 2 venceu! (a menor densidade ganha)densidade populacional: %.2f hab/km²<%.2f hab/km²\n", densidade_popu2 , densidade_popu1 );
        }
		else{
			 printf("empate! densidades populacionais: %.2f hab/km²=%.2f hab/km²\n", densidade_popu1, densidade_popu2);
		}
	}
	  
	if(pibpercapta1>pibpercapta2){
		 printf("carta 1 venceu! pib per capta: %.2f reais>%.2f reais\n", pibpercapta1, pibpercapta2);
	}
	else{
		if(pibpercapta2>pibpercapta1){
		     printf("carta 2 venceu! pib per carta:%.2f reais>%.2f reais\n", pibpercapta2, pibpercapta1);
		}
		else{
			 printf("empate! pibs per capta: %.2f reais=%.2f reais\n", pibpercapta1, pibpercapta2);
		}
	}

				SuperPoder1 = (double)populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0 / densidade_popu1) + pibpercapta1;
					
				//printf("Super Poder 1: %.2lf\n", SuperPoder1);

				SuperPoder2 = (double)populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0 / densidade_popu2) + pibpercapta2;
				
				//printf("Super Poder 2: %.2lf\n", SuperPoder2);
            
    printf("***Vencedor(soma atributos/super poder)***\n");
	
	if(SuperPoder1>SuperPoder2){
		 printf("CIDADE 1 venceu! resultado: %.2lf>%.2lf\n", SuperPoder1, SuperPoder2);
	}
	else{
		if(SuperPoder2>SuperPoder1){
		     printf("CIDADE 2 venceu! resultado: %.2lf>%.2lf \n", SuperPoder2,SuperPoder1);
		}
		else{
			 printf("EMPATE! resultado: %.2lf=%.2lf\n", SuperPoder1, SuperPoder2);
		}
	}



return 0;	
	
}
