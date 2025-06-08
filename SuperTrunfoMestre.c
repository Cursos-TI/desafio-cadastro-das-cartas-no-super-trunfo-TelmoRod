#include <stdio.h>
int main(){


// Variáveis da Carta 1 ******************************************************************************************************
  
char estado1[0]; // como STRING (Desafio Mestre)
char codigo1[96]; //codigo deve conter a letra do estado inicialmente e depois os dois digitos de número. Ex: A01, B02, C03
char cidade1[30]; //string
int populacao1; //quantidade
float area1; //em km quadrados
float pib1; //valor decimal
int ponto1;
  
// Variáveis da Carta 2 ******************************************************************************************************
  
char estado2[0]; // como STRING (Desafio Mestre)
char codigo2[1]; //codigo deve conter a letra do estado inicialmente e depois os dois digitos de número. Ex: A01, B02, C03
char cidade2[30]; //string
int populacao2; //quantidade
float area2; //em km quadrados
float pib2; //valor decimal
int ponto2;

// Variáveis do DESAFIO AVENTUREIRO ******************************************************************************************
    // CARTA 1
    float densidadePopulacional1;
    float pibPerCapita1;
    // CARTA 2
    float densidadePopulacional2;
    float pibPerCapita2;
  
// Iniciando a caputura de dados junto ao usuário ****************************************************************************
  
printf("Olá usuário(a), hoje você poderá cadastrar as informações para criação de duas cartas de Super Trunfo de CIDADES\n \n");
printf("Para iniciarmos, insira as informações da PRIMEIRA CIDADE \n \n");

//Iniciando coleta de informações da PRIMEIRA CARTA de cidade -----------------------------------------------------------------

// LETRA DO ESTADO
printf("Digite uma letra de 'A' até 'H' que represente o Estado da primeira cidade:");
scanf("%s.1\n", &estado1);
printf("\n");

// CÓDIGO DE 1 A 4
printf("Agora, vamos incluir o código da primeira cidade. \n");
printf("O código deve conter a LETRA escolhida para o Estado seguida de 01, 02, 03 ou 04. Exemplo: H01, B03. \n");
printf("Seguindo a instrução acima, digite o código da primeira cidade:");
scanf("%s.3", &codigo1);
printf("\n");

//NOME DA CIDADE
printf("Digite o nome da primeira cidade:");
scanf("%s", &cidade1);
printf("\n");

//POPULAÇÃO
printf("Digite a quantidade de habitantes da primeira cidade:");
scanf("%d", &populacao1);
printf("\n");

//ÁREA
printf("Digite o tamanho da área da sua primeira cidade (km²):");
scanf("%f", &area1);
printf("\n");

//PIB
printf("Digite o PIB da sua primeira cidade:");
scanf("%f", &pib1);
printf("\n");

//NUMERO DE PONTOS TURISTICOS
printf("Digite a quantidade de pontos turísticos da sua primeira cidade:");
scanf("%d", &ponto1);
printf("\n");

// IMPRESSÃO DAS INFORMAÇÕES********************
printf("Segue abaixo, as informações cadastradas da primeira carta: \n");
printf("Carta 1 \n");
printf("Estado: %.1s\n", estado1);
printf("Código: %s\n", codigo1); //concatenação
printf("Nome da cidade: %s\n", cidade1);
printf("População: %d\n",populacao1);
printf("Área: %.2f km² \n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", ponto1);
printf("\n \n");

// Calculando as variáveis de densidade populacional e PIB per capita (Carta 1) DESAFIO AVENTUREIRO
  
densidadePopulacional1 = populacao1 / area1;
printf("A densidade populacional é: %.2f\n", densidadePopulacional1);
pibPerCapita1 = pib1 / populacao1;
printf("O PIB per capita é: %.2f\n", pibPerCapita1);
printf("\n");
printf("\n");
  
  
  //Iniciando coleta de informações da SEGUNDA CARTA de cidade -------------------------------------------------------------------

printf("Agora, vamos iniciar o cadastro da SEGUNDA CARTA de Cidade!\n \n");

// LETRA DO ESTADO
printf("Digite uma letra de 'A' até 'H' que represente o Estado da segunda cidade:");
scanf("%s.1\n", &estado2);
printf("\n");

// CÓDIGO DE 1 A 4
printf("Agora, vamos incluir o código da segunda cidade. \n");
printf("O código deve conter a LETRA escolhida para o Estado seguida de 01, 02, 03 ou 04. Exemplo: H01, B03. \n");
printf("Seguindo a instrução acima, digite o código da segunda cidade:");
scanf("%s.3", &codigo2);
printf("\n");

//NOME DA CIDADE
printf("Digite o nome da segunda cidade:");
scanf("%s", &cidade2);
printf("\n");

//POPULAÇÃO
printf("Digite a quantidade de habitantes da segunda cidade:");
scanf("%d", &populacao2);
printf("\n");

//ÁREA
printf("Digite o tamanho da área da sua segunda cidade (km²):");
scanf("%f", &area2);
printf("\n");

//PIB
printf("Digite o PIB da sua segunda cidade:");
scanf("%f", &pib2);
printf("\n");

//NUMERO DE PONTOS TURISTICOS
printf("Digite a quantidade de pontos turísticos da sua segunda cidade:");
scanf("%d", &ponto2);
printf("\n");

// IMPRESSÃO DAS INFORMAÇÕES********************
printf("Segue abaixo, as informações cadastradas da SEGUNDA CARTA: \n");
printf("Carta 2 \n");
printf("Estado: %.1s\n", estado2);
printf("Código: %s\n", codigo2); //concatenação
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n",populacao2);
printf("Área: %.2f km² \n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", ponto2);

// Calculando as variáveis de densidade populacional e PIB per capita (Carta 2) DESAFIO AVENTUREIRO
  
  densidadePopulacional2 = populacao2 / area2;
  printf("A densidade populacional é: %.2f\n", densidadePopulacional2);
  pibPerCapita2 = pib1 / populacao2;
  printf("O PIB per capita é: %.2f\n", pibPerCapita2);
  printf("\n");

// DESAFIO MESTRE - COMPARAÇÃO ENTRE AS INFORMAÇÕES DE DUAS CARTAS PARA DETERMINAR QUAL É A VENCEDORA
// ATRIBUTO ESCOLHIDO: POPULAÇÃO
printf("Agora que cadastramos as duas cartas, vamos verificar qual carta é a vencedora, ou seja, que possui maior atributo \n");
printf("O atributo selecionado para comparação é o atributo POPULAÇÃO \n");
printf("Vejamos a população total das duas cidades e qual delas é a vencedora: \n");
printf("\n");


return 0;
}
