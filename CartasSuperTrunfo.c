#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Declaração de variáveis com os atributos das cartas
// Valores inciais atribuidos para inicializacao na memoria evitando "lixo" de outros programas
char LetraEstado1 = 'A', LetraEstado2 = 'A', CódigodaCarta1[4] = "0", CódigodaCarta2[4] = "0", NomedaCidade1[50] = "0", NomedaCidade2[50] = "0";
int População1 = 0, População2 = 0, NúmeroPontosTurísticos1 = 0, NúmeroPontosTurísticos2 = 0;
float ÁreadaCidade1 = 0, ÁreadaCidade2 = 0, PIB1 = 0, PIB2 = 0, DensidadePopulacional1 = 0, PIBperCapita1 = 0, DensidadePopulacional2 = 0, PIBperCapita2 = 0;

// Carta 1: Leitura de dados do usuario
void EntradaDados() {

    printf("-----> Inserção de dados para a Carta 1\n");

    printf("Digite a Letra do Estado (de A a H): ");
    scanf("%c", &LetraEstado1);

    printf("Digite o código da carta (Letra do Estado seguido de dois números): ");
    scanf("%s", CódigodaCarta1);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf("%s", NomedaCidade1);

    printf("Digite o número de habitates: ");
    scanf("%d", &População1);

    printf("Digite a área da cidade (kilômetros quadrados): ");
    scanf("%f", &ÁreadaCidade1);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &NúmeroPontosTurísticos1);

    // Carta 2: Leitura de dados do usuario

    printf("\n-----> Inserção de dados para a Carta 2\n");

    printf("Digite a Letra do Estado (de A a H): ");
    scanf("%c", &LetraEstado2);

    printf("Digite o código da carta (Letra do Estado seguido de dois números): ");
    scanf("%s", &CódigodaCarta2);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf("%s", NomedaCidade2);

    printf("Digite o número de habitates: ");
    scanf("%d", &População2);

    printf("Digite a área da cidade (kilômetros quadrados): ");
    scanf("%f", &ÁreadaCidade2);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &NúmeroPontosTurísticos2);
    }

void RealizarCalculos(){
    DensidadePopulacional1 = (float) População1 / ÁreadaCidade1;
    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    PIBperCapita1 = PIB1 / (float) População1;

    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    PIBperCapita2 = PIB2 / (float) População2;
    }

void ExibirResultados(){
    //Exibição de dados da carta 1
    printf("\n-----> Dados da Carta 1\n");

    printf("Estado: %c\n", LetraEstado1);
    printf("Código: %s\n", CódigodaCarta1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d habitantes\n", População1);
    printf("Área: %.2f km²\n", ÁreadaCidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", NúmeroPontosTurísticos1);
    printf("Densidade Populacional: %f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %f reais\n", PIBperCapita1);

    //Exibição de dados da carta 2
    printf("\n-----> Dados da Carta 2\n");

    printf("Estado: %c\n", LetraEstado2);
    printf("Código: %s\n", CódigodaCarta2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d habitantes\n", População2);
    printf("Área: %.2f km²\n", ÁreadaCidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", NúmeroPontosTurísticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    }

int main(){
    EntradaDados();
    RealizarCalculos();
    ExibirResultados();
    return 0;
    }