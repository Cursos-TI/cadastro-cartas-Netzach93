#include <stdio.h>
#include <string.h>

    int main(){

        // variáveis da carta 1

        char estado1;
        int populacao1;
        char nomedacidade1[40];
        float area1;
        double pib1;
        int pontosturisticos1;
        char codigo1[4];


        // variáveis da carta 2 

        char estado2;
        int populacao2;
        char nomedacidade2[40];
        float area2;
        double pib2;
        int pontosturisticos2;
        char codigo2[4];

        
            printf("\n\n");
            printf("*-----SUPER-------------------------------*\n");
            printf("*-----------------TRUNFO------------------*\n");
            printf("*------------------------------PAÍSES-----*\n\n");
           
            printf("Vamos cadastrar a carta número 1!!\n");

            printf("Digite um estado: (A a H)\n");
            scanf(" %c", &estado1);

            printf("Digite o número de habitantes da cidade: \n");
            scanf(" %i", &populacao1);
            setbuf(stdin, NULL);

            printf("Digite o nome da cidade: \n");
            fgets(nomedacidade1, 40, stdin);
            nomedacidade1[strcspn(nomedacidade1, "\n")] = 0;
            
            printf("Digite o número de pontos turísticos: \n");
            scanf(" %d", &pontosturisticos1);

            printf("Digite a área da cidade em quilômetros quadrados: \n");
            scanf(" %f", &area1);

            printf("Digite o Pib da cidade em bilhões: \n");
            scanf(" %lf", &pib1);

            printf("Digite o código da carta: (ex: A01 até B04)\n");
            scanf("%s", &codigo1);

            // // // // // // // // // // // // // // // 

            printf("------------------------------------\n");
            printf("Vamos cadastrar a carta número 2!!\n");
            printf("Digite um estado: (A a H)\n");
            scanf(" %c", &estado2);

            printf("Digite o número de habitantes da cidade: \n");
            scanf(" %i", &populacao2);
            setbuf(stdin, NULL);

            printf("Digite o nome da cidade: \n");
            fgets(nomedacidade2, 40, stdin);
            nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

            printf("Digite o número de pontos turísticos: \n");
            scanf(" %d", &pontosturisticos2);

            printf("Digite a área da cidade em quilômetros quadrados: \n");
            scanf(" %f", &area2);

            printf("Digite o Pib da cidade em bilhões: \n");
            scanf(" %lf", &pib2);

            printf("Digite o código da carta: (ex: A01, A02, A03, A04, B01 até B04).\n");
            scanf(" %s", &codigo2);
            printf("\n\n");


            float densidade1 = populacao1 / area1;
            float capita1 = (pib1 * 1000000000.0)/ (float)populacao1;

            float densidade2 = populacao2 / area2;
            float capita2 = (pib2 * 1000000000.0)/ (float)populacao2;

            printf("*****  Carta número 1  *****\n");
            printf("* Estado: %c. \n", estado1);
            printf("* Código: %s. \n", codigo1);
            printf("* Nome da cidade: %s. \n", nomedacidade1);
            printf("* População: %i habitantes. \n", populacao1);
            printf("* Área: %.2f km². \n", area1);
            printf("* PIB: %.2lf bilhoes de reais. \n", pib1);
            printf("* Número de Pontos Turisticos: %d. \n", pontosturisticos1);            
            printf("* Densidade Populacional: %.2f hab/km². \n", densidade1);
            printf("* PIB per Capita: %.2f reais. \n", capita1);

            printf("----------------------------------------\n");
            printf("*****  Carta número 2  *****\n");
            printf("* Estado: %c. \n", estado2);
            printf("* Código: %s. \n", codigo2);
            printf("* Nome da cidade: %s. \n", nomedacidade2);
            printf("* População: %i habitantes. \n", populacao2);
            printf("* Área: %.2f km². \n", area2);
            printf("* PIB: %.2lf bilhoes de reais. \n", pib2);
            printf("* Número de Pontos Turisticos: %d. \n", pontosturisticos2);
            printf("* Densidade Populacional: %.2f hab/km². \n", densidade2);
            printf("* PIB per Capita: %.2f reais. \n", capita2);
            printf("\n");          


            return 0;




    }