#include <stdio.h>
#include <string.h>

    int main(){

// --- VARIÁVEIS DAS CARTAS ---
         char estado1, estado2;
         char nomedacidade1[40], nomedacidade2[40];
         char codigo1[4], codigo2[4];
         unsigned long int populacao1, populacao2;
         float area1, area2;
         double pib1, pib2;
         int pontosturisticos1, pontosturisticos2;


    // --- VARIÁVEIS DE ESCOLHA E ARMAZENAMENTO ---

         int opcao1, opcao2;
         double valor1_attr1, valor2_attr1; // Atributo 1 de ambas as cartas
         double valor1_attr2, valor2_attr2; // Atributo 2 de ambas as cartas
         char nomeAttr1[30], nomeAttr2[30];


            printf("\n\n");
            printf("-----SUPER-------------------------------\n");
            printf("-----------------TRUNFO------------------\n");
            printf("------------------------------PAÍSES-----\n\n");
           
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
            double capita1 = (pib1 * 1000000000.0)/ (double)populacao1;

            float densidade2 = (float)populacao2 / area2;
            double capita2 = (pib2 * 1000000000.0)/ (double)populacao2;

            double superpoder1 = (double)populacao1 + area1 + pib1 + (double)pontosturisticos1 + (1.0 /densidade1) + capita1;
            double superpoder2 = (double)populacao2 + area2 + pib2 + (double)pontosturisticos2 + (1.0 / densidade2) + capita2;
        




                printf("Escolha o primeiro atributo para comparação:\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turísticos\n");
                printf("5 - Densidade Populacional (Menor vence)\n");
                printf("6 - Super Poder\n");
                scanf("%d", &opcao1);

                printf("Escolha o segundo atributo para comparação: \n");
                scanf("%d", &opcao2);

                if (opcao2 == opcao1) {


                        printf("O segundo atributo não pode ser igual ao primeiro!!\n");
                        printf("Escolha novamente o segundo atributo para comparação: \n\n");
                        printf("1 - População\n");
                        printf("2 - Área\n");
                        printf("3 - PIB\n");
                        printf("4 - Pontos Turísticos\n");
                        printf("5 - Densidade Populacional (Menor vence)\n");
                        printf("6 - Super Poder\n\n");
                        scanf("%d", &opcao2);
                }



// --- ARMAZENAMENTO ATRIBUTO 1 ---
                switch(opcao1) {
                 case 1: valor1_attr1 = (double)populacao1; valor2_attr1 = (double)populacao2; strcpy(nomeAttr1, "População"); break;
                 case 2: valor1_attr1 = area1; valor2_attr1 = area2; strcpy(nomeAttr1, "Área"); break;
                 case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; strcpy(nomeAttr1, "PIB"); break;
                 case 4: valor1_attr1 = pontosturisticos1; valor2_attr1 = pontosturisticos2; strcpy(nomeAttr1, "Pontos Turísticos"); break;
                 case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; strcpy(nomeAttr1, "Densidade"); break;
                 case 6: valor1_attr1 = superpoder1; valor2_attr1 = superpoder2; strcpy(nomeAttr1, "Super Poder"); break;
                 default: valor1_attr1 = 0; valor2_attr1 = 0; strcpy(nomeAttr1, "Inválido"); break;
    }

    // --- ARMAZENAMENTO ATRIBUTO 2
                switch(opcao2) {
                 case 1: valor1_attr2 = (double)populacao1; valor2_attr2 = (double)populacao2; strcpy(nomeAttr2, "População"); break;
                 case 2: valor1_attr2 = area1; valor2_attr2 = area2; strcpy(nomeAttr2, "Área"); break;
                 case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; strcpy(nomeAttr2, "PIB"); break;
                 case 4: valor1_attr2 = pontosturisticos1; valor2_attr2 = pontosturisticos2; strcpy(nomeAttr2, "Pontos Turísticos"); break;
                 case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; strcpy(nomeAttr2, "Densidade"); break;
                 case 6: valor1_attr2 = superpoder1; valor2_attr2 = superpoder2; strcpy(nomeAttr2, "Super Poder"); break;
                 default: valor1_attr2 = 0; valor2_attr2 = 0; strcpy(nomeAttr2, "Inválido"); break;
    }

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    printf(" %s vs %s\n", nomedacidade1, nomedacidade2);

    // Comparação do Atributo 1
    int res1 = (opcao1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    printf("%s: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %s\n", 
            nomeAttr1, valor1_attr1, valor2_attr1, (valor1_attr1 == valor2_attr1) ? "Empate" : (res1 ? "Carta 1 Venceu" : "Carta 2 Venceu!!!"));

    // Comparação do Atributo 2
    int res2 = (opcao2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
    printf("%s: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %s\n", 
            nomeAttr2, valor1_attr2, valor2_attr2, (valor1_attr2 == valor2_attr2) ? "Empate" : (res2 ? "Carta 1 Venceu" : "Carta 2 Venceu!!!"));

    // --- NOVA LÓGICA: SOMA DOS ATRIBUTOS ---
    double soma1 = valor1_attr1 + valor1_attr2;
    double soma2 = valor2_attr1 + valor2_attr2;

    printf("\n--- DESFECHO FINAL (SOMA DOS ATRIBUTOS) ---\n");
    printf("Soma Total Carta 1 (%s): %.2f\n", nomedacidade1, soma1);
    printf("Soma Total Carta 2 (%s): %.2f\n", nomedacidade2, soma2);

    // Comparação da Soma Final
    if (soma1 > soma2) {
        printf("\nRESULTADO FINAL: %s VENCEU A RODADA !!!\n", nomedacidade1);
    } else if (soma2 > soma1) {
        printf("\nRESULTADO FINAL: %s VENCEU A RODADA !!!\n", nomedacidade2);
    } else {
        printf("\nRESULTADO FINAL: EMPATE TÉCNICO NA SOMA!\n");
    }

    return 0;
}

/*

        switch (opcao) {
                case 1:
                        printf("Atributo: População\n");
                        printf("Comparação das cartas: Carta 1 (%s) vs Carta 2 (%s)\n", nomedacidade1, nomedacidade2);
                        printf("População Carta 1: %lu (%s)\nPopulação Carta 2: %lu (%s)\n", populacao1, nomedacidade1, populacao2, nomedacidade2);
                        
                if (populacao1 > populacao2) { 
                        printf("Vencedor: Carta 1 !!!!");

                } else if (populacao2 > populacao1) {
                        printf("Vencedor: Carta 2 !!!!");
                } else {
                        printf("Empate\n");
                }
                break;

                case 2:                             // 1521.11 Carta 1       1200.25 Carta 2
                        printf("Atributo: Área\n");
                        printf("Comparação das cartas: Carta 1 (%s) vs Carta 2 (%s)\n", nomedacidade1, nomedacidade2);
                        printf("Área Carta 1: %.2f (%s) \nÁrea Carta 2:  %.2f (%s)\n", area1, nomedacidade1, area2, nomedacidade2);  

                if (area1 > area2) {
                        printf("Vencedor: Carta 1 !!!!");

                } else if (area2 > area1) {
                printf("Vencedor: Carta 2 !!!!");

                } else {
                        printf("Empate!!\n");
                }
                break;

                case 3:                           // 699.28 carta 1     300.50 carta 2
                        printf("Atributo: PIB\n");
                        printf("Comparação das cartas: Carta 1 (%s) vs Carta 2 (%s)\n", nomedacidade1, nomedacidade2);
                        printf("PIB Carta 1: %.2f Bilhões de reais. (%s) \nPIB Carta 2: %.2f Bilhões de reais. (%s)\n", pib1, nomedacidade1, pib2, nomedacidade2);

                if (pib1 > pib2) {  
                        printf("Vencedor: Carta 1 !!!!");

                } else if (pib2 > pib1) {
                        printf("Vencedor: Carta 2 !!!!");

                } else {
                        printf("Empate\n");
                }
                break;
                
                case 4:                             // 50 Carta 1           30 Carta 2
                        printf("Atributo: Pontos Turisticos\n");
                        printf("Comparação das cartas: Carta 1 (%s) vs Carta 2 (%s)\n", nomedacidade1, nomedacidade2);
                        printf("Pontos Turisticos Carta 1: %i (%s) \nPontos Turisticos Carta 2: %i (%s)\n", pontosturisticos1, nomedacidade1, pontosturisticos2, nomedacidade2);
                        
                if (pontosturisticos1 > pontosturisticos2) {
                        printf("Vencedor: Carta 1 !!!");

                } else if (pontosturisticos2 > pontosturisticos1) {
                        printf("Vencedor: Carta 2 !!!");
                } else {
                        printf("Empate\n");
                }
                break;

                case 5:
                        printf("Atributo: Densidade Populacional\n");
                        printf("Comparação das cartas: Carta 1 (%s) vs Carta 2 (%s) \n", nomedacidade1, nomedacidade2);
                        printf("Densidade Populacional Carta 1: %.2f (%s) \nDensidade Populacional Carta 2: %.2f (%s)\n", densidade1, nomedacidade1, densidade2, nomedacidade2);
                        
                if (densidade1 < densidade2) {
                        printf("Vencedor: Carta 1 !!!");

                } else if (densidade2 < densidade1) {
                        printf("Vencedor: Carta 2 !!!");

                } else {
                        printf("Empate\n");
                }
                break;                

                case 6:
                        printf("Atributo: Superpoder\n");
                        printf("Comparação das cartas: Carta 1 (%s) vs Carta 2 (%s) \n", nomedacidade1, nomedacidade2);
                        printf("SuperPoder Carta 1: %.2f (%s) \nSuperPoder Carta 2: %.2f (%s)\n", superpoder1, nomedacidade1, superpoder2, nomedacidade2);
                        
                if (superpoder1 > superpoder2) { 
                        printf("Vencedor: Carta 1 !!!");
                } else if (superpoder2 > superpoder1) {
                        printf("Vencedor: Carta 2 !!!");
                } else {
                        printf("Empate\n");
                }
                break;  

                default: 
                printf("Opção Inválida, por favor escolha um número de 1 a 6.\n");
        
                break;

                }

                return 0;

                        */
        
            /*


        

        char estado1;
        unsigned long int populacao1;
        char nomedacidade1[40];
        float area1;
        double pib1;
        int pontosturisticos1;
        char codigo1[4];
        int opcao;



            int resultado1 = populacao1 >= populacao2;
            int resultado2 = area1 >= area2;
            int resultado3 = pib1 >= pib2;
            int resultado4 = pontosturisticos1 >= pontosturisticos2;
            int resultado5 = densidade1 <= densidade2;
            int resultado6 = capita1 >= capita2;
            int resultado7 = superpoder1 >= superpoder2;


            
            printf("*  Carta número 1  *\n");                  
            printf("* Estado: %c \n", estado1);
            printf("* Código: %s \n", codigo1);
            printf("* Nome da cidade: %s. \n", nomedacidade1);
            printf("* População: %lu habitantes. \n", populacao1);
            printf("* Área: %.2f km². \n", area1);
            printf("* PIB: %.2lf bilhoes de reais. \n", pib1);
            printf("* Número de Pontos Turisticos: %d. \n", pontosturisticos1);            
            printf("* Densidade Populacional: %.2f hab/km². \n", densidade1);
            printf("* PIB per Capita: %.2f reais. \n", capita1);
            printf("* Super Poder: %.2f!! *\n", superpoder1);

            printf("--------------------------------------\n");
            printf("*  Carta número 2  *\n");
            printf("* Estado: %c \n", estado2);
            printf("* Código: %s \n", codigo2);
            printf("* Nome da cidade: %s. \n", nomedacidade2);
            printf("* População: %lu habitantes. \n", populacao2);
            printf("* Área: %.2f km². \n", area2);
            printf("* PIB: %.2lf bilhoes de reais. \n", pib2);
            printf("* Número de Pontos Turisticos: %d. \n", pontosturisticos2);
            printf("* Densidade Populacional: %.2f hab/km². \n", densidade2);
            printf("* PIB per Capita: %.2f reais. \n", capita2);
            printf("* Super Poder: %.2f !! *\n", superpoder2);
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
        

                printf("Comparação das cartas (Atributo: População)\n\n");

            if(populacao1 >= populacao2) {
                printf("Carta 1: %s x Carta 2: %s\n", nomedacidade1, nomedacidade2);
                printf("Carta 1: %lu\n", populacao1);
                printf("Carta 2: %lu\n", populacao2);
                printf("Carta 1 VENCEUU!!! (%s)!!!\n\n", nomedacidade1);
            } else { 
                printf("Carta 1: %s x Carta 2: %s\n", nomedacidade1, nomedacidade2);
                printf("Carta 1: %lu\n", populacao1);
                printf("Carta 2: %lu\n", populacao2);
                printf("Carta 2 VENCEU!!! (%s)!!!\n\n", nomedacidade2);
            }
            return 0;


        */