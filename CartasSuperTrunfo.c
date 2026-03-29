#include <stdio.h>
#include <string.h>

    int main(){

        // variáveis da carta 1

        char estado1;
        unsigned long int populacao1;
        char nomedacidade1[40];
        float area1;
        double pib1;
        int pontosturisticos1;
        char codigo1[4];
        
        // variáveis da carta 2 

        char estado2;
        unsigned long int populacao2;
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

            printf("Digite um estado: (A a H)\n");                  // imprime algo na tela
            scanf(" %c", &estado1);                                 // guarda a resposta na respectiva variavel

            printf("Digite o número de habitantes da cidade: \n");
            scanf(" %lu", &populacao1);                             // guarda a resposta na respectiva variavel
            setbuf(stdin, NULL);                        

            printf("Digite o nome da cidade: \n");
            fgets(nomedacidade1, 40, stdin);                        // guarda a resposta na respectiva variavel
            nomedacidade1[strcspn(nomedacidade1, "\n")] = 0;        // necessidade para ler uma string com espaços    
            
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
            scanf(" %lu", &populacao2);
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


            float densidade1 = (float)populacao1 / area1;
            float capita1 = (pib1 * 1000000000.0)/ (float)populacao1;

            float densidade2 = (float)populacao2 / area2;
            float capita2 = (pib2 * 1000000000.0)/ (float)populacao2;

            double superpoder1 = (double)populacao1 + area1 + pib1 + (double)pontosturisticos1 + (1.0 /densidade1) + capita1;
            double superpoder2 = (double)populacao2 + area2 + pib2 + (double)pontosturisticos2 + (1.0 / densidade2) + capita2;
            
            int resultado1 = populacao1 >= populacao2;
            int resultado2 = area1 >= area2;
            int resultado3 = pib1 >= pib2;
            int resultado4 = pontosturisticos1 >= pontosturisticos2;
            int resultado5 = densidade1 <= densidade2;
            int resultado6 = capita1 >= capita2;
            int resultado7 = superpoder1 >= superpoder2;

            
            printf("*****  Carta número 1  *****\n");
            printf("* Estado: %c \n", estado1);
            printf("* Código: %s \n", codigo1);
            printf("* Nome da cidade: %s. \n", nomedacidade1);
            printf("* População: %lu habitantes. \n", populacao1);
            printf("* Área: %.2f km². \n", area1);
            printf("* PIB: %.2lf bilhoes de reais. \n", pib1);
            printf("* Número de Pontos Turisticos: %d. \n", pontosturisticos1);            
            printf("* Densidade Populacional: %.2f hab/km². \n", densidade1);
            printf("* PIB per Capita: %.2f reais. \n", capita1);
            printf("** Super Poder: %.2f!! **\n", superpoder1);

            printf("--------------------------------------\n");
            printf("*****  Carta número 2  *****\n");
            printf("* Estado: %c \n", estado2);
            printf("* Código: %s \n", codigo2);
            printf("* Nome da cidade: %s. \n", nomedacidade2);
            printf("* População: %lu habitantes. \n", populacao2);
            printf("* Área: %.2f km². \n", area2);
            printf("* PIB: %.2lf bilhoes de reais. \n", pib2);
            printf("* Número de Pontos Turisticos: %d. \n", pontosturisticos2);
            printf("* Densidade Populacional: %.2f hab/km². \n", densidade2);
            printf("* PIB per Capita: %.2f reais. \n", capita2);
            printf("** Super Poder: %.2f !! **\n", superpoder2);
            printf("\n");   
            printf("--------------------------------------\n");      


            // AQUI COMEÇA A COMPARAÇÃO ENTRE CARTAS
            
            printf("É hora de comparar as cartas, que a mais forte VENÇA !!!!\n\n");
            printf("População: %i\n", resultado1);
            printf("Área: %i\n", resultado2);      
            printf("PIB: %i\n", resultado3); 
            printf("Pontos Turísticos: %i\n", resultado4);
            printf("Densidade Populacional: %i\n", resultado5);
            printf("PIB per Capita: %i\n", resultado6);
            printf("Super Poder: %i\n", resultado7);







            return 0;




    }