#include <stdio.h>
int main(){


// Variáveis da Carta 1 ******************************************************************************************************
  
char estado1[0]; // como STRING (Desafio Mestre)
char codigo1[96]; //codigo deve conter a letra do estado inicialmente e depois os dois digitos de número. Ex: A01, B02, C03
char cidade1[30]; //string
unsigned long int populacao1; //quantidade. Alterado para unsigned long int para atender ao DESAFIO MESTRE
float area1; //em km quadrados
double pib1; //valor decimal. Alterado para double pois o valor a ser coletado para a variável excede a capacidade de float
int ponto1;
double superpoder1;
float parametro_densidade_superpoder1;
  
// Variáveis da Carta 2 ******************************************************************************************************
  
char estado2[0]; // como STRING (Desafio Mestre)
char codigo2[1]; //codigo deve conter a letra do estado inicialmente e depois os dois digitos de número. Ex: A01, B02, C03
char cidade2[30]; //string
unsigned long int populacao2; //quantidade. Alterado para unsigned long int para atender ao DESAFIO MESTRE
float area2; //em km quadrados
double pib2; //valor decimal. Alterado para double pois o valor a ser coletado para a variável excede a capacidade de float
int ponto2;
double superpoder2;
float parametro_densidade_superpoder2;

// Variáveis do DESAFIO AVENTUREIRO ******************************************************************************************
    // CARTA 1
    float densidadePopulacional1;
    float pibPerCapita1;
    // CARTA 2
    float densidadePopulacional2;
    float pibPerCapita2;

// Variáveis do DESAFIO MESTRE para comparação entre os atributos

    int comparacao_PontosTuristicos;
    int comparacao_Populacao;
    int comparacao_Area;
    int comparacao_Pib;
    // DESAFIO AVENTUREIRO
    int comparacao_DensidadePopulacional;
    int comparacao_PibPercapita;
    // DESAFIO MESTRE
    int comparacao_SuperPoder;


  
  
// Iniciando a caputura de dados junto ao usuário ****************************************************************************
  
printf("Olá usuário(a), hoje você poderá cadastrar as informações para criação de duas cartas de Super Trunfo de CIDADES\n \n");
    printf("\n");
printf("IMPORTANTE: Ao informar os dados numéricos, não utilize separadores de casas decimas como pontos e virgulas e nem descrições como milhão/bihão\n \n");
printf("pois podem impactar nos cálculos. Digite apenas o numeral, exemplo 180000 \n \n");
  
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
scanf("%lu", &populacao1);
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

// DESAFIO MESTRE - Cálculo do Super Poder da Cidade.................................
//FUNÇÃO IF - para evitar divisão por zero e valores negativos
float parametro_densidade_superpoder1 = 0;
if (densidadePopulacional1 > 0) {
    parametro_densidade_superpoder1 = 1.0 / densidadePopulacional1;
}
superpoder1 = ((float)populacao1 + area1 + pib1 + (float)ponto1 + pibPerCapita1) + parametro_densidade_superpoder1;
  

// IMPRESSÃO DAS INFORMAÇÕES********************
printf("Segue abaixo, as informações cadastradas da primeira carta: \n");
printf("Carta 1 \n");
printf("Estado: %.1s\n", estado1);
printf("Código: %s\n", codigo1); //concatenação
printf("Nome da cidade: %s\n", cidade1);
printf("População: %lu\n",populacao1);
printf("Área: %.2f km² \n", area1);
printf("PIB: R$%.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", ponto1);
printf("\n \n");

// Calculando as variáveis de densidade populacional e PIB per capita (Carta 1) DESAFIO AVENTUREIRO
  
    densidadePopulacional1 = (float)populacao1 / area1;
    printf("A densidade populacional é: %.2f hab/km²\n", densidadePopulacional1);
    pibPerCapita1 = pib1 / populacao1;
    printf("O PIB per capita é: %.2f\n", pibPerCapita1);
    printf("\n");
  
// DESAFIO MESTRE - imprimir o valor do Super Poder da Cidade 1
    printf("Super Poder %s: %.2f\n", cidade1, superpoder1); 
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
scanf("%lu", &populacao2);
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

// DESAFIO MESTRE - Cálculo do Super Poder da Cidade.................................
//FUNÇÃO IF - para evitar divisão por zero e valores negativos
float parametro_densidade_superpoder2 = 0;
if (densidadePopulacional2 > 0) {
    parametro_densidade_superpoder2 = 1.0 / densidadePopulacional2;
}
superpoder2 = ((float)populacao2 + area2 + pib2 + (float)ponto2 + pibPerCapita2) + parametro_densidade_superpoder2;
  

// IMPRESSÃO DAS INFORMAÇÕES********************
printf("Segue abaixo, as informações cadastradas da SEGUNDA CARTA: \n");
printf("Carta 2 \n");
printf("Estado: %.1s\n", estado2);
printf("Código: %s\n", codigo2); //concatenação
printf("Nome da cidade: %s\n", cidade2);
printf("População: %lu\n",populacao2);
printf("Área: %.2f km² \n", area2);
printf("PIB: R$%.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", ponto2);

// Calculando as variáveis de densidade populacional e PIB per capita (Carta 2) DESAFIO AVENTUREIRO
  
    densidadePopulacional2 = (float)populacao2 / area2;
    printf("A densidade populacional é: %.2f hab/km²\n", densidadePopulacional2);
    pibPerCapita2 = pib1 / populacao2;
    printf("O PIB per capita é: %.2f\n", pibPerCapita2);
    printf("\n");
  
// DESAFIO MESTRE - imprimir o valor do Super Poder da Cidade 1
    printf("Super Poder %s: %.2f\n", cidade2, superpoder2); 
    printf("\n");

  
// DESAFIO MESTRE - COMPARAÇÃO ENTRE AS INFORMAÇÕES DE DUAS CARTAS PARA DETERMINAR QUAL É A VENCEDORA ==============================

printf("Agora que cadastramos as duas cartas, vamos verificar qual carta é a vencedora, ou seja, que possui maior Super Poder \n");


  //*************REVISAR ESTA PARTE ABAIXO **********************************************************
  
//Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
//Exemplo de Saída (após a entrada dos dados):

//Comparação de Cartas:
//População: Carta 1 venceu (1)
//Área: Carta 1 venceu (1)
//PIB: Carta 1 venceu (1)
//Pontos Turísticos: Carta 1 venceu (1)
//Densidade Populacional: Carta 2 venceu (0)
//PIB per Capita: Carta 1 venceu (1)
//Super Poder: Carta 1 venceu (1)

  
  //Comparação das cartas

    comparacao_PontosTuristicos = ponto1 > ponto2;
    comparacao_Populacao = populacao1 > populacao2;
    comparacao_Area = area1 > area2;
    comparacao_Pib = pib1 > pib2;
    comparacao_DensidadePopulacional = densidadePopulacional1 < densidadePopulacional2; // DESAFIO AVENTUREIRO
    comparacao_PibPercapita = pibPerCapita1 > pibPerCapita2; // DESAFIO AVENTUREIRO
    comparacao_SuperPoder = superpoder1 > superpoder2; // DESAFIO MESTRE

  
    printf("\nComparação de Cartas:\n");
    printf("Legenda: (1) a primeria cidade é a vencedora\n");
    printf("Legenda: (0) a segunda cidade é a vencedora\n");

    printf("Pontos Turísticos (%s vs %s): %d\n", cidade1, cidade2, comparacao_PontosTuristicos);
    printf("\nPopulação (%s vs %s): %d\n", cidade1, cidade2, comparacao_Populacao);
    printf("Área (%s vs %s): %d\n", cidade1, cidade2, comparacao_Area);
    printf("PIB (%s vs %s): %d\n", cidade1, cidade2, comparacao_Pib);
    printf("Densidade Populacional (%s vs %s): %d\n", cidade1, cidade2, comparacao_DensidadePopulacional);
    printf("PIB per Capita (%s vs %s): %d\n", cidade1, cidade2, comparacao_PibPercapita);
    printf("Super Poder (%s vs %s): %d\n", cidade1, cidade2, comparacao_SuperPoder);


return 0;
}
