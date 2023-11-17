#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

struct jogadores {
    char nome[10];
};

main() {
	
	struct jogadores player[20];
	
	setlocale(LC_ALL, "Portuguese");
	
    int escolha, dificuldade, resposta, pontuacao[20], i=0, x=0, y=0, opcao, continuar, tmb=0;

    
    do { //Laço de repetição para a opção de dificuldade
        system("cls"); //Limpa tela
       	
       	printf(" #####                       #####                  \n#     #    #####  ######    #     # #    # # ###### \n");
       	printf("#          #    # #         #     # #    # #     #  \n#          #    # #####     #     # #    # #    #   \n");
       	printf("#          #    # #         #   # # #    # #   #    \n#     #    #    # #         #    #  #    # #  #     \n #####     #####  ######     #### #  ####  # ###### \n\n\n");
        printf("\n");
		printf("+----------------------------------+\n");
        printf("¦             M E N U              ¦\n");
        printf("¦----------------------------------¦\n");
        printf("¦  1. jogar                        ¦\n");
        printf("¦  2. Opções                       ¦\n");
        printf("¦  3. Crédito                      ¦\n");
        printf("¦  4. Sair                         ¦\n");
        printf("+----------------------------------+\n");
        printf("\n");
        printf("Escolha uma opção: ");
	
        escolha = getch() - '0'; // Lê a tecla pressionada como um número

        switch (escolha) { // Coloque aqui o código para iniciar um novo jogo e escolher a Dificuldade
            case 1:
            	
            	do{
            		system("cls");
            		printf("*****************************************\n");
                    printf("*                                       *\n");
                    printf("*   Qual será o seu nome de jogador ?   *\n");
                    printf("*                                       *\n");
                    printf("*****************************************\n");
    
            		
            		gets(player[i].nome);
            		fflush(stdin);
					pontuacao[i]=0;//Variavel para guardar a pontuação
					
					system("cls");
					printf("*******************************\n");
                    printf("*                             *\n");
                    printf("*   Escolha uma dificuldade   *\n");
                    printf("*                             *\n");
                    printf("*******************************\n\n");
                	
					printf("[1] Facil\n[2] Normal\n[3] Dificil\n[4] Voltar\n");
    
                	dificuldade = getch() - '0';
                
                	switch (dificuldade) {
				
                		case 1: 
                		
                		do{
                				system("cls");
                				printf("+----------------------------------------------------+\n");
                                printf("¦ 1-  Qual é a função da biblioteca <stdio.h> em C?  ¦\n");
                                printf("+----------------------------------------------------+\n\n");
                			    printf("1. Manipulação de datas e horários\n2. Entrada e saída de dados\n3. Manipulação de strings\n4. Manipulação de arquivos\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 1
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 1
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
						
							do{
								system("cls");
								printf("+---------------------------------------------------------------+\n");
                                printf("¦ 2-  Qual é a extensão de arquivo padrão para programas em C?  ¦\n");
                                printf("+---------------------------------------------------------------+\n\n");
                				
								printf("1. .cpp\n2. .txt\n3. .c\n4. .java\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 2
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 2
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
								printf("+---------------------------------------------------+\n");
                                printf("¦ 3-  Como você declara uma variável inteira em C?  ¦\n");
                                printf("+---------------------------------------------------+\n\n");
								
                				printf("1. var x;\n2. integer x;\n3. int x;\n4. float x;\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 3
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 3
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
								printf("+--------------------------------+\n");
                                printf("¦ 4-  O que é um ''loop'' em C?  ¦\n");
                                printf("+--------------------------------+\n\n");
                                
                				printf("1. Uma função que executa operações matemáticas.\n2. Uma instrução que encerra o programa.\n3. Uma estrutura de controle que repete um bloco de código.\n4. Uma declaração de variável.\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 4
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 4
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
								printf("+-----------------------------------------+\n");
                                printf("¦ 5- Qual é o operador de igualdade em C? ¦\n");
                                printf("+-----------------------------------------+\n\n");
                                
                				printf("1. =\n2. :=\n3. -.\n4. ==\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 5
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 5
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
			                    printf("+-------------------------------------------------------------+\n");
                                printf("¦ 6-  Como você encerra um programa em C de maneira adequada? ¦\n");
                                printf("+-------------------------------------------------------------+\n\n");
								
                				printf("1. Usando a função exit()\n2. Fechando a janela do terminal.\n3. Removendo a declaração main().\n4. Pressionando a tecla ''Enter''.\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 6
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 6
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
								printf("+--------------------------------------------+\n");
                                printf("¦  7-  Qual é a saída de dados padrão em C?  ¦\n");
                                printf("+--------------------------------------------+\n\n");
								
                				printf("1. stdout\n2. stdio\n3. stddata\n4. outdata\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 7
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 7
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
								printf("+----------------------------------------------------------------------------+\n");
                                printf("¦ 8-  Qual é o operador usado para acessar os membros de uma estrutura em C? ¦\n");
                                printf("+----------------------------------------------------------------------------+\n\n");
                                
                				printf("1. :\n2. ->\n3. ::\n4. .\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 8
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 8
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
								printf("+----------------------------------------------------+\n");
                                printf("¦ 9-  Como você faz um comentário de uma linha em C? ¦\n");
                                printf("+----------------------------------------------------+\n\n");
								
                				printf("1. /* Este é um comentário */\n2. // Este é um comentário\n3. -- Este é um comentário\n4. # Este é um comentário\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 9
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 9
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 50 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+50;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{
								system("cls");
								printf("+-----------------------------------------------------+\n");
                                printf("¦ 10-  Qual é a função scanf() usada para fazer em C? ¦\n");
                                printf("+-----------------------------------------------------+\n\n");
								
                				printf("1. Exibir uma mensagem na tela.\n2. Escrever dados em um arquivo.\n3. Ler dados de entrada do teclado.\n4. Realizar cálculos matemáticos.\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 10
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 10
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				pontuacao[i]=pontuacao[i]+50;
        						printf("                    Parabéns!!\n");
   								printf("        Você finalizou a dificuldade Facil!\n");
                				printf("         Marcando um total de %i pontos!\n", pontuacao[i]);
           						printf("\n                                        -Pressione Enter para continuar-");
           						i=i+1; // Variavel para controlar as listas
           						resposta = getch() - '0';
              					system("cls"); 
								break;
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
                			
						
						break; //Dificuldade Facil
                	
                		case 2: //Dificuldade Normal
                			do{
								system("cls");
								printf("+---------------------------------------------------------------------------------------------------+\n");
                                printf("¦ 1-  Qual das seguintes funções é usada para calcular o comprimento de uma string na linguagem C?  ¦\n");
                                printf("+---------------------------------------------------------------------------------------------------+\n\n");
								
                				printf("1. strsize()\n2. length()\n3. size()\n4. strlen()\n\n");
                				printf("\nQual das opções está correta?\n\n");//Questão numero 1
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 1
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
						
							do{//Pergunta 2
								system("cls");
								printf("+--------------------------------------+\n");
                                printf("¦ 2-  Qual é o resto da divisão 7/4 ?  ¦\n");
                                printf("+--------------------------------------+\n\n");
								
								
								resposta=0;
								printf("\n1. 3\n2. 0\n3. 2\n4. 1\n\n"); //Questão numero 2
                				printf("\nQual das opções está correta?\n\n");
               					scanf("%i", &resposta);
           						fflush(stdin);
                					
                			} while ((resposta>4) || (resposta<=0));//Pergunta 2
							
							if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {//Qustao 3
          						system("cls");
          						printf("+--------------------------------------------------------------------+\n");
                                printf("¦  3-  Qual das seguintes funções da biblioteca padrão C (stdio.h)   ¦\n");
								printf("¦      é usada para ler uma string de um stream de entrada?          ¦\n");
                                printf("+--------------------------------------------------------------------+\n\n");
          						
           						printf("\n\n\n1. fprint()\n2. scanf()\n3. puts()\n4. strread()\n\n"); 
                				printf("\nQual das opções está correta?\n\n"); //Questão 3
                				scanf("%i", &resposta);
   								fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 3
							
							if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {//Qustao 4
          						system("cls");
          						printf("+--------------------------------------------------------------+\n");
                                printf("¦  4-  Em C, qual é a biblioteca padrão usada para operações   ¦\n");
								printf("¦            de entrada e saída, como printf e scanf?          ¦\n");
                                printf("+--------------------------------------------------------------+\n\n");
          						
								printf("\n\n\n1. math.h\n2. string.h\n3. stdlib.h\n4. stdio.h\n\n"); 
                				printf("\nQual das opções está correta?\n\n"); //Questão 4
           						scanf("%i", &resposta);
       							fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 4
							
							if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {									//Qustao 5
          						system("cls");
          						printf("+---------------------------------------------------------------------------------+\n");
                                printf("¦   5-  Qual é a diferença entre uma variável local e uma variável global em C?   ¦\n");
                                printf("+---------------------------------------------------------------------------------+\n\n");
          						
								
								printf("\n1. Variáveis locais são declaradas dentro de uma função, enquanto variáveis globais são declaradas fora de qualquer função.\n\n2. Variáveis locais podem ser acessadas em qualquer lugar do programa, enquanto variáveis globais só podem ser acessadas dentro da função em que foram declaradas.\n");
							    printf("\n3. Não há diferença entre variáveis locais e globais em C.\n\n4. Variáveis locais podem ser usadas em qualquer função, enquanto variáveis globais só podem ser usadas na função em que foram declaradas.\n\n");
               					printf("\nQual das opções está correta?\n\n"); //Questão 5
           						scanf("%i", &resposta);
     							fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 5
							
							if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {									//Qustao 6
          						system("cls");
          						printf("+-------------------------------------------------------------+\n");
                                printf("¦   6-  Qual é o resultado da seguinte operação 7+29*4/2?     ¦\n");
                                printf("+-------------------------------------------------------------+\n\n");
                                
                				printf("\n1. 93\n2. 65\n3. 94\n4. 66\n\n"); 
               					printf("\nQual das opções está correta?\n\n"); //Questao 6
           						scanf("%i", &resposta);
   								fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 6
							
							if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {									//Qustao 7
          						system("cls");
          						printf("+----------------------------------------------+\n");
                                printf("¦   7-  Como se da um valor a uma constante?   ¦\n");
                                printf("+----------------------------------------------+\n\n");
                                
          						
                				printf("\n1. #define nome_da_constante = valor_da_constante \n\n 2. const nome_da_constante valor_da_constante \n\n 3. define const = valor \n\n 4. #define nome_da_constante valor_da_constante \n\n"); 
                				printf("\n\nQual das opções está correta?\n\n"); //Questao 7
               					scanf("%i", &resposta);
           						fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 7
							
							if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {									//Qustao 8
          						system("cls");
              					printf("\n[8] Observe o código: \n\n  #include <stdio.h>\n  main (){	\n    int x;	\n    x=10;	\n    while(x==10){	\n    printf(""Execução"");\n    }\n  }\n\n"); 
								
								printf("+--------------------------------------------------------------------------------------------+\n");
                                printf("¦   8-  Se esse código for executado, Quantas vezes o laço de repetição ira ser executado?   ¦\n");
                                printf("+--------------------------------------------------------------------------------------------+\n\n");
								 
								printf("\n 1. 10 vezes \n 2. 11 vezes \n 3. Nenhuma vez \n 4. Nenhuma das alternativas \n\n"); 
                				printf("\nQual das opções está correta?\n\n"); //Questao 8
    							scanf("%i", &resposta);
                				fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 8
							
							if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {									//Qustao 9
          						system("cls");
          						printf("+----------------------------------------------------------------------------+\n");
                                printf("¦   9-  Qual é a diferença entre as funções printf e scanf na linguagem C?   ¦\n");
                                printf("+----------------------------------------------------------------------------+\n\n");
          						
                				printf("\n 1. A função printf imprime uma mensagem na tela, e a função scanf lê uma entrada do teclado. \n\n 2. A função printf lê uma entrada do teclado, e a função scanf imprime uma mensagem na tela. \n\n 3. A função printf imprime uma mensagem no arquivo, e a função scanf lê uma entrada do arquivo. \n\n 4. A função printf lê uma entrada do arquivo, e a função scanf imprime uma mensagem no arquivo. \n\n"); 
             					printf("\nQual das opções está correta?\n\n"); //Questao 9
              					scanf("%i", &resposta);
              					fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 9
							
							if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 100 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+100;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do {									//Qustao 10
          						system("cls");
                				printf("\n[10] \n\n #include <stdio.h> \n    main() { \n      int a = 5, b = 2, c; \n      c = a / b; \n    } \n\n"); 
                				printf("+---------------------------------------------+\n");
                                printf("¦   10-   Qual o valor final da varivel 'c' ? ¦\n");
                                printf("+---------------------------------------------+\n\n");
                				
								printf("\n 1. 3 \n 2. 2 \n 3. 2.5 \n 4. Nenhuma das alternativas \n\n"); 
  								printf("\nQual das opções está correta?\n\n"); //Questao 10
      							scanf("%i", &resposta);
    							fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 10
							
							if (resposta==2){
                				printf("\nResposta Correta!\n");
                				pontuacao[i]=pontuacao[i]+100;
        						printf("                    Parabéns!!\n");
   								printf("        Você finalizou a dificuldade média!\n");
                				printf("         Marcando um total de %i pontos!\n", pontuacao[i]);
           						printf("\n                                        -Pressione Enter para continuar-");
           						i=i+1; // Variavel para controlar as listas
           						resposta = getch() - '0';
              					system("cls"); 
								break;
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							
							
							
						break;// Break da Dificuldade Normal
                	
                		case 3: 
							do{ //Questão numero 1
								system("cls");
								printf("+--------------------------------------------------------------------------+\n");
                                printf("¦  1-  Uma possível pergunta de múltipla escolha sobre a linguagem C é:?   ¦\n");
								printf("¦                                                                          ¦\n");
								printf("¦               Qual é a saída do seguinte programa em C?                  ¦\n");
                                printf("+--------------------------------------------------------------------------+\n\n");
								
                				printf("#include <stdio.h>\nint main()\n{\n   int x = 10, y = 20;\n   if (x == y)\n     printf('x e y são iguais');\n");
                				printf("   else\n     printf('x e y são diferentes');\n   return 0;\n}\n\n");
                				printf("+----------------------------------+\n");
                                printf("¦   Qual das opções está correta?  ¦\n");
                                printf("+----------------------------------+\n\n");
                				
                				
                				printf("1. x e y são iguais\n2. x e y são diferentes\n3. Erro de compilação\n4. Nenhuma das alternativas anteriores\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 1
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 2
								system("cls");
								printf("+--------------------------------------------------------+\n");
                                printf("¦   2- Qual é o significado da palavra-chave const em C  ¦\n");
                                printf("+--------------------------------------------------------+\n\n");
            
                				printf("1. Define uma constante simbólica que pode ser usada em vez de um valor literal. \n\n2. Indica que o valor de uma variável não pode ser alterado após sua declaração.\n\n");
                				printf("3. Especifica que um parâmetro de uma função não pode ser modificado dentro da função.\n\n4. Todas as alternativas anteriores estão corretas.\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 2
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 3
								system("cls");
								printf("+--------------------------------------------------------------------------+\n");
                                printf("¦   3- Qual é o resultado da execução do seguinte trecho de código em C?   ¦\n");
                                printf("+--------------------------------------------------------------------------+\n\n\n");
								
                			
                				printf("#include <stdio.h>\nint main() {\n  int x = 10, y = 20;\n  x = x + y;\n  y = x - y;\n  x = x - y;\n  printf(''x = %d, y = %d\n', x, y);\n  return 0;\n}\n\n");
                				printf("\n1. x = 10, y = 20 \n2. x = 20, y = 10\n3. x = 30, y = -10\n4. Nenhuma das alternativas\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 3
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 4
								system("cls");
								printf("+--------------------------------------------------------------------------------------+\n");
                                printf("¦   4-  Qual é o conceito que define a capacidade de uma função chamar a si mesma ou   ¦\n");
								printf("¦          outra função, criando uma nova instância da função a cada chamada?          ¦\n");
                                printf("+--------------------------------------------------------------------------------------+\n\n");
                                
								printf("1. Recursividade.\n2. Iteração.\n3. Modularização.\n4. Polimorfismo.\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 4
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 5
								system("cls");
								printf("+--------------------------------------------------------+\n");
                                printf("¦   5- Qual é o conceito correto de um ponteiro em C?    ¦\n");
                                printf("+--------------------------------------------------------+\n\n\n");
								                			
                				printf("1. Um ponteiro é uma variável que armazena um valor inteiro que representa um endereço de memória.\n\n2.Um ponteiro é uma variável que armazena um valor hexadecimal que representa um endereço de memória.\n\n");
                				printf("3. Um ponteiro é uma variável que armazena um valor binário que representa um endereço de memória.\n\n4.Nenhuma das alternativas.\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 5
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 6
								system("cls");
								printf("+-----------------------------------------------------------+\n");
                                printf("¦   6- Qual é a diferença entre os operadores & e * em C?   ¦\n");
                                printf("+-----------------------------------------------------------+\n\n\n");
								
                				
                				printf("1. O operador & retorna o endereço de uma variável, enquanto o operador * retorna o valor armazenado em um endereço.\n\n2. O operador & retorna o valor armazenado em um endereço, enquanto o operador * retorna o endereço de uma variável.\n\n");
                				printf("3. O operador & retorna o valor lógico da conjunção entre duas expressões, enquanto o operador * retorna o valor da multiplicação entre duas expressões.\n\n4.Nenhuma das alternativas.\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 6
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 7
								system("cls");
								printf("+------------------------------------------------------------+\n");
                                printf("¦   7- Qual é a diferença entre os operadores == e = em C?   ¦\n");
                                printf("+------------------------------------------------------------+\n\n\n");
                                
                				
                				printf("1. O operador == é usado para atribuir um valor a uma variável, enquanto o operador = é usado para comparar dois valores.\n\n2. O operador == é usado para verificar se dois valores são diferentes, enquanto o operador = é usado para verificar se dois valores são iguais\n\n");
                				printf("3. O operador == é usado para verificar se dois valores são iguais, enquanto o operador = é usado para verificar se dois valores são diferentes.\n\n4. O operador == é usado para verificar se dois valores são iguais, enquanto o operador = é usado para verificar se dois valores são diferentes.\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 7
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 8
								system("cls");
								printf("+------------------------------------------------------------------------------+\n");
                                printf("¦   8- Qual é a diferença entre os tipos de dados char e unsigned char em C?   ¦\n");
                                printf("+------------------------------------------------------------------------------+\n\n\n");
                                
                				
                				printf("1. O tipo char pode armazenar caracteres alfanuméricos, enquanto o tipo unsigned char pode armazenar apenas caracteres numéricos.\n\n2. O tipo char pode armazenar valores inteiros de 8 bits, enquanto o tipo unsigned char pode armazenar valores inteiros de 16 bits.\n\n");
                				printf("3. O tipo char pode armazenar valores positivos e negativos, enquanto o tipo unsigned char pode armazenar apenas valores positivos.\n\n4. O tipo char pode armazenar valores decimais, enquanto o tipo unsigned char pode armazenar valores binários.\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 8
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 9
								system("cls");
								printf("+------------------------------------------------------+\n");
                                printf("¦   9- Qual é o resultado da seguinte operação em C?   ¦\n");
                                printf("+------------------------------------------------------+\n\n\n");
								
                				
                				printf("#include <stdio.h>\nint main() {\n  int x = 10, y = 3;\nx = x << y;\n\n");
                				printf("1. x é igual a 13\n2. x é igual a 80\n3. x é igual a 5\n4. x é igual a 30\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 9
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				pontuacao[i]=pontuacao[i]+250;
                				printf(" Pontos totais: %i", pontuacao[i]);
                				printf("\n                                        -Pressione Enter para continuar-");
                				resposta = getch() - '0';
                				system("cls");
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							do{ //Questão numero 10
								system("cls");
								printf("+--------------------------------------------------+\n");
                                printf("¦   10- Qual será o valor de mysteryFunction(6)?   ¦\n");
                                printf("+--------------------------------------------------+\n\n\n");
                                
                				printf("10.Qual será o valor de mysteryFunction(6)?\n\n");
                				printf("int mysteryFunction(int n) {\n  if (n <= 0) {\n    return 0;\n  } else {\n    return n + mysteryFunction(n - 2);\n  }\n}\n\n\n");
                				printf("1. 6\n2. 7\n3. 8\n4. 9\n\n");
                				printf("\nQual das opções está correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 10
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Você ganhou 250 pontos!!\n\n");
                				printf("                    Parabéns!!\n");
   								printf("        Você finalizou a dificuldade Dificil!\n");
                				printf("         Marcando um total de %i pontos!\n", pontuacao[i]);
           						printf("\n                                        -Pressione Enter para continuar-");
           						i=i+1; // Variavel para controlar as listas
           						resposta = getch() - '0';
              					system("cls"); 
								break;
							} else {
								printf("\n\nResposta Incorreta!\n\n");
								printf("\n                                        -Pressione Enter para voltar-");
								i=i+1; // Variavel para controlar as listas
                				resposta = getch() - '0';
								resposta=900; 
								break;
							}
							
							
						break; //Dificuldade Dificil
                		
                		case 4: //Opção Voltar a tela de Menu
                			system("cls");
                			
                			break;
                			
                		default:
                			printf("\n\n                                      -Opção inválida. Tente novamente!\n\n");
							printf("\n                                        -Pressione Enter para voltar-");
                			getch();
                			break;
                		
					}
				} while ((dificuldade>4) || (dificuldade<=0)); //Laço de repetição para a opção de dificuldade
		
                break;
            case 2:
                printf("\nAbrindo opções...\n");
                // Coloque aqui o código para exibir as opções do jogo
                	system("cls");
                	
                	do{
                		printf("+----------------------------------+\n");
	       				printf("¦  1. Como Jogar                   ¦\n");
	        			printf("¦  2. Placar de Pontuações         ¦\n");
	        			printf("¦  3. Voltar                       ¦\n");
	                	printf("+----------------------------------+\n");
	                	scanf("%i", &opcao);
	                	fflush(stdin);
                		
					} while ((opcao>3) || (opcao<=0));
                		
	                	
               		 	switch (opcao){
				
                			case 1:{
               		 			system("cls");
                			
                				printf("+-------------------------------------------------------------------------+\n");
                				printf("¦ O Jogador escolhe uma dificuldade entre Facil/Medio/Dificil.            ¦\n");
                				printf("¦ São 10 perguntas idenpendente da dificuldade escolhida. Ao acertar      ¦\n");
                				printf("¦ na pergunta, o jogador acumula ontos e avança para a proxima pergunta.  ¦\n");
                				printf("¦ Ao errar a pergunta você retorna ao começo do jogo.                     ¦\n");
                				printf("+-------------------------------------------------------------------------+\n");
                				
								break;
							} 
                	
              		  		case 2:{
              		  			
              		  			system("cls");
                				fflush(stdin);
                				
                				
                				for (x=0;x<i-1;x++){
                					for (y=1;y<i;y++){
                						if(pontuacao[y] > pontuacao[x]){
                							tmb=pontuacao[x];
                							pontuacao[x]=pontuacao[y];
                							pontuacao[y]=tmb;
										}
									}
								}
                				
                				do{
                					system("cls");
                					
                					printf("+----------------------------------+\n");
        							printf("¦           P L A C A R            ¦\n");
        							printf("+----------------------------------+\n");
        							
                					for(x=0;x<i;x++){
										printf("\n %iº %s : %i pontos.", x+1,player[x].nome, pontuacao[x]);
										
									}
                						
                					printf("\n\nGostaria de sair(1-Sim/2-Não): ");
									scanf("%i", &continuar);
									fflush(stdin);
									
								} while (continuar!=1);
								
								break;
							}
							
							case 3:{
								system("cls");
								
								break;
							}
                		
							
                		}
                
                break;
            case 3:
            	system("cls");
            	printf("***********************************\n");
                printf(" *                                 *\n");
                printf("  *  Rodrigo Luiz Cardoso Junior    *\n");
                printf("   * Angelo Flavio Zanata            *\n");
                printf("   * Anthony Henrique Nogueira Alves  *\n");
                printf("   * Bruno Geraldo Lima              *\n");
                printf("  *                                 *\n");
                printf(" *                                 *\n");
                printf("********************************** \n\n");
                
			
			    printf("    ******** \n");
                printf("  *  _    _  *  \n");
                printf(" *  (O    (O  * \n");
                printf(" *      >     * \n");
				printf("  *     U    * \n");
                printf("   *        *  \n");
                printf("     ******   \n");

			
				break;
				// Coloqui aqui os creditos   
            case 4:
                printf("\nSaindo do jogo. Adeus!\n");
                break;
            default:
                printf("\nOpção inválida. Tente novamente.\n");
                break;
        }

        printf("\n                                        -Pressione uma tecla para continuar...");
        getch(); // Aguarda uma tecla antes de continuar
    } while (escolha != 4);

    return 0;
}
