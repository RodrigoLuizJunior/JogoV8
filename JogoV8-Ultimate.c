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

    
    do { //La�o de repeti��o para a op��o de dificuldade
        system("cls"); //Limpa tela
       	
       	printf(" #####                       #####                  \n#     #    #####  ######    #     # #    # # ###### \n");
       	printf("#          #    # #         #     # #    # #     #  \n#          #    # #####     #     # #    # #    #   \n");
       	printf("#          #    # #         #   # # #    # #   #    \n#     #    #    # #         #    #  #    # #  #     \n #####     #####  ######     #### #  ####  # ###### \n\n\n");
        printf("\n");
		printf("+----------------------------------+\n");
        printf("�             M E N U              �\n");
        printf("�----------------------------------�\n");
        printf("�  1. jogar                        �\n");
        printf("�  2. Op��es                       �\n");
        printf("�  3. Cr�dito                      �\n");
        printf("�  4. Sair                         �\n");
        printf("+----------------------------------+\n");
        printf("\n");
        printf("Escolha uma op��o: ");
	
        escolha = getch() - '0'; // L� a tecla pressionada como um n�mero

        switch (escolha) { // Coloque aqui o c�digo para iniciar um novo jogo e escolher a Dificuldade
            case 1:
            	
            	do{
            		system("cls");
            		printf("*****************************************\n");
                    printf("*                                       *\n");
                    printf("*   Qual ser� o seu nome de jogador ?   *\n");
                    printf("*                                       *\n");
                    printf("*****************************************\n");
    
            		
            		gets(player[i].nome);
            		fflush(stdin);
					pontuacao[i]=0;//Variavel para guardar a pontua��o
					
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
                                printf("� 1-  Qual � a fun��o da biblioteca <stdio.h> em C?  �\n");
                                printf("+----------------------------------------------------+\n\n");
                			    printf("1. Manipula��o de datas e hor�rios\n2. Entrada e sa�da de dados\n3. Manipula��o de strings\n4. Manipula��o de arquivos\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 1
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 1
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 2-  Qual � a extens�o de arquivo padr�o para programas em C?  �\n");
                                printf("+---------------------------------------------------------------+\n\n");
                				
								printf("1. .cpp\n2. .txt\n3. .c\n4. .java\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 2
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 2
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 3-  Como voc� declara uma vari�vel inteira em C?  �\n");
                                printf("+---------------------------------------------------+\n\n");
								
                				printf("1. var x;\n2. integer x;\n3. int x;\n4. float x;\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 3
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 3
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 4-  O que � um ''loop'' em C?  �\n");
                                printf("+--------------------------------+\n\n");
                                
                				printf("1. Uma fun��o que executa opera��es matem�ticas.\n2. Uma instru��o que encerra o programa.\n3. Uma estrutura de controle que repete um bloco de c�digo.\n4. Uma declara��o de vari�vel.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 4
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 4
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 5- Qual � o operador de igualdade em C? �\n");
                                printf("+-----------------------------------------+\n\n");
                                
                				printf("1. =\n2. :=\n3. -.\n4. ==\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 5
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 5
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 6-  Como voc� encerra um programa em C de maneira adequada? �\n");
                                printf("+-------------------------------------------------------------+\n\n");
								
                				printf("1. Usando a fun��o exit()\n2. Fechando a janela do terminal.\n3. Removendo a declara��o main().\n4. Pressionando a tecla ''Enter''.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 6
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 6
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("�  7-  Qual � a sa�da de dados padr�o em C?  �\n");
                                printf("+--------------------------------------------+\n\n");
								
                				printf("1. stdout\n2. stdio\n3. stddata\n4. outdata\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 7
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 7
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 8-  Qual � o operador usado para acessar os membros de uma estrutura em C? �\n");
                                printf("+----------------------------------------------------------------------------+\n\n");
                                
                				printf("1. :\n2. ->\n3. ::\n4. .\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 8
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 8
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 9-  Como voc� faz um coment�rio de uma linha em C? �\n");
                                printf("+----------------------------------------------------+\n\n");
								
                				printf("1. /* Este � um coment�rio */\n2. // Este � um coment�rio\n3. -- Este � um coment�rio\n4. # Este � um coment�rio\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 9
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 9
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 50 pontos!!\n\n");
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
                                printf("� 10-  Qual � a fun��o scanf() usada para fazer em C? �\n");
                                printf("+-----------------------------------------------------+\n\n");
								
                				printf("1. Exibir uma mensagem na tela.\n2. Escrever dados em um arquivo.\n3. Ler dados de entrada do teclado.\n4. Realizar c�lculos matem�ticos.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 10
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 10
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				pontuacao[i]=pontuacao[i]+50;
        						printf("                    Parab�ns!!\n");
   								printf("        Voc� finalizou a dificuldade Facil!\n");
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
                                printf("� 1-  Qual das seguintes fun��es � usada para calcular o comprimento de uma string na linguagem C?  �\n");
                                printf("+---------------------------------------------------------------------------------------------------+\n\n");
								
                				printf("1. strsize()\n2. length()\n3. size()\n4. strlen()\n\n");
                				printf("\nQual das op��es est� correta?\n\n");//Quest�o numero 1
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 1
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("� 2-  Qual � o resto da divis�o 7/4 ?  �\n");
                                printf("+--------------------------------------+\n\n");
								
								
								resposta=0;
								printf("\n1. 3\n2. 0\n3. 2\n4. 1\n\n"); //Quest�o numero 2
                				printf("\nQual das op��es est� correta?\n\n");
               					scanf("%i", &resposta);
           						fflush(stdin);
                					
                			} while ((resposta>4) || (resposta<=0));//Pergunta 2
							
							if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("�  3-  Qual das seguintes fun��es da biblioteca padr�o C (stdio.h)   �\n");
								printf("�      � usada para ler uma string de um stream de entrada?          �\n");
                                printf("+--------------------------------------------------------------------+\n\n");
          						
           						printf("\n\n\n1. fprint()\n2. scanf()\n3. puts()\n4. strread()\n\n"); 
                				printf("\nQual das op��es est� correta?\n\n"); //Quest�o 3
                				scanf("%i", &resposta);
   								fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 3
							
							if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("�  4-  Em C, qual � a biblioteca padr�o usada para opera��es   �\n");
								printf("�            de entrada e sa�da, como printf e scanf?          �\n");
                                printf("+--------------------------------------------------------------+\n\n");
          						
								printf("\n\n\n1. math.h\n2. string.h\n3. stdlib.h\n4. stdio.h\n\n"); 
                				printf("\nQual das op��es est� correta?\n\n"); //Quest�o 4
           						scanf("%i", &resposta);
       							fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 4
							
							if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("�   5-  Qual � a diferen�a entre uma vari�vel local e uma vari�vel global em C?   �\n");
                                printf("+---------------------------------------------------------------------------------+\n\n");
          						
								
								printf("\n1. Vari�veis locais s�o declaradas dentro de uma fun��o, enquanto vari�veis globais s�o declaradas fora de qualquer fun��o.\n\n2. Vari�veis locais podem ser acessadas em qualquer lugar do programa, enquanto vari�veis globais s� podem ser acessadas dentro da fun��o em que foram declaradas.\n");
							    printf("\n3. N�o h� diferen�a entre vari�veis locais e globais em C.\n\n4. Vari�veis locais podem ser usadas em qualquer fun��o, enquanto vari�veis globais s� podem ser usadas na fun��o em que foram declaradas.\n\n");
               					printf("\nQual das op��es est� correta?\n\n"); //Quest�o 5
           						scanf("%i", &resposta);
     							fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 5
							
							if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("�   6-  Qual � o resultado da seguinte opera��o 7+29*4/2?     �\n");
                                printf("+-------------------------------------------------------------+\n\n");
                                
                				printf("\n1. 93\n2. 65\n3. 94\n4. 66\n\n"); 
               					printf("\nQual das op��es est� correta?\n\n"); //Questao 6
           						scanf("%i", &resposta);
   								fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 6
							
							if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("�   7-  Como se da um valor a uma constante?   �\n");
                                printf("+----------------------------------------------+\n\n");
                                
          						
                				printf("\n1. #define nome_da_constante = valor_da_constante \n\n 2. const nome_da_constante valor_da_constante \n\n 3. define const = valor \n\n 4. #define nome_da_constante valor_da_constante \n\n"); 
                				printf("\n\nQual das op��es est� correta?\n\n"); //Questao 7
               					scanf("%i", &resposta);
           						fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 7
							
							if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
              					printf("\n[8] Observe o c�digo: \n\n  #include <stdio.h>\n  main (){	\n    int x;	\n    x=10;	\n    while(x==10){	\n    printf(""Execu��o"");\n    }\n  }\n\n"); 
								
								printf("+--------------------------------------------------------------------------------------------+\n");
                                printf("�   8-  Se esse c�digo for executado, Quantas vezes o la�o de repeti��o ira ser executado?   �\n");
                                printf("+--------------------------------------------------------------------------------------------+\n\n");
								 
								printf("\n 1. 10 vezes \n 2. 11 vezes \n 3. Nenhuma vez \n 4. Nenhuma das alternativas \n\n"); 
                				printf("\nQual das op��es est� correta?\n\n"); //Questao 8
    							scanf("%i", &resposta);
                				fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 8
							
							if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("�   9-  Qual � a diferen�a entre as fun��es printf e scanf na linguagem C?   �\n");
                                printf("+----------------------------------------------------------------------------+\n\n");
          						
                				printf("\n 1. A fun��o printf imprime uma mensagem na tela, e a fun��o scanf l� uma entrada do teclado. \n\n 2. A fun��o printf l� uma entrada do teclado, e a fun��o scanf imprime uma mensagem na tela. \n\n 3. A fun��o printf imprime uma mensagem no arquivo, e a fun��o scanf l� uma entrada do arquivo. \n\n 4. A fun��o printf l� uma entrada do arquivo, e a fun��o scanf imprime uma mensagem no arquivo. \n\n"); 
             					printf("\nQual das op��es est� correta?\n\n"); //Questao 9
              					scanf("%i", &resposta);
              					fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 9
							
							if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 100 pontos!!\n\n");
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
                                printf("�   10-   Qual o valor final da varivel 'c' ? �\n");
                                printf("+---------------------------------------------+\n\n");
                				
								printf("\n 1. 3 \n 2. 2 \n 3. 2.5 \n 4. Nenhuma das alternativas \n\n"); 
  								printf("\nQual das op��es est� correta?\n\n"); //Questao 10
      							scanf("%i", &resposta);
    							fflush(stdin);
                								
							} while ((resposta>4) || (resposta<=0));//Qustao 10
							
							if (resposta==2){
                				printf("\nResposta Correta!\n");
                				pontuacao[i]=pontuacao[i]+100;
        						printf("                    Parab�ns!!\n");
   								printf("        Voc� finalizou a dificuldade m�dia!\n");
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
							do{ //Quest�o numero 1
								system("cls");
								printf("+--------------------------------------------------------------------------+\n");
                                printf("�  1-  Uma poss�vel pergunta de m�ltipla escolha sobre a linguagem C �:?   �\n");
								printf("�                                                                          �\n");
								printf("�               Qual � a sa�da do seguinte programa em C?                  �\n");
                                printf("+--------------------------------------------------------------------------+\n\n");
								
                				printf("#include <stdio.h>\nint main()\n{\n   int x = 10, y = 20;\n   if (x == y)\n     printf('x e y s�o iguais');\n");
                				printf("   else\n     printf('x e y s�o diferentes');\n   return 0;\n}\n\n");
                				printf("+----------------------------------+\n");
                                printf("�   Qual das op��es est� correta?  �\n");
                                printf("+----------------------------------+\n\n");
                				
                				
                				printf("1. x e y s�o iguais\n2. x e y s�o diferentes\n3. Erro de compila��o\n4. Nenhuma das alternativas anteriores\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 1
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 2
								system("cls");
								printf("+--------------------------------------------------------+\n");
                                printf("�   2- Qual � o significado da palavra-chave const em C  �\n");
                                printf("+--------------------------------------------------------+\n\n");
            
                				printf("1. Define uma constante simb�lica que pode ser usada em vez de um valor literal. \n\n2. Indica que o valor de uma vari�vel n�o pode ser alterado ap�s sua declara��o.\n\n");
                				printf("3. Especifica que um par�metro de uma fun��o n�o pode ser modificado dentro da fun��o.\n\n4. Todas as alternativas anteriores est�o corretas.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 2
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 3
								system("cls");
								printf("+--------------------------------------------------------------------------+\n");
                                printf("�   3- Qual � o resultado da execu��o do seguinte trecho de c�digo em C?   �\n");
                                printf("+--------------------------------------------------------------------------+\n\n\n");
								
                			
                				printf("#include <stdio.h>\nint main() {\n  int x = 10, y = 20;\n  x = x + y;\n  y = x - y;\n  x = x - y;\n  printf(''x = %d, y = %d\n', x, y);\n  return 0;\n}\n\n");
                				printf("\n1. x = 10, y = 20 \n2. x = 20, y = 10\n3. x = 30, y = -10\n4. Nenhuma das alternativas\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 3
                			
                			if (resposta==2){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 4
								system("cls");
								printf("+--------------------------------------------------------------------------------------+\n");
                                printf("�   4-  Qual � o conceito que define a capacidade de uma fun��o chamar a si mesma ou   �\n");
								printf("�          outra fun��o, criando uma nova inst�ncia da fun��o a cada chamada?          �\n");
                                printf("+--------------------------------------------------------------------------------------+\n\n");
                                
								printf("1. Recursividade.\n2. Itera��o.\n3. Modulariza��o.\n4. Polimorfismo.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 4
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 5
								system("cls");
								printf("+--------------------------------------------------------+\n");
                                printf("�   5- Qual � o conceito correto de um ponteiro em C?    �\n");
                                printf("+--------------------------------------------------------+\n\n\n");
								                			
                				printf("1. Um ponteiro � uma vari�vel que armazena um valor inteiro que representa um endere�o de mem�ria.\n\n2.Um ponteiro � uma vari�vel que armazena um valor hexadecimal que representa um endere�o de mem�ria.\n\n");
                				printf("3. Um ponteiro � uma vari�vel que armazena um valor bin�rio que representa um endere�o de mem�ria.\n\n4.Nenhuma das alternativas.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 5
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 6
								system("cls");
								printf("+-----------------------------------------------------------+\n");
                                printf("�   6- Qual � a diferen�a entre os operadores & e * em C?   �\n");
                                printf("+-----------------------------------------------------------+\n\n\n");
								
                				
                				printf("1. O operador & retorna o endere�o de uma vari�vel, enquanto o operador * retorna o valor armazenado em um endere�o.\n\n2. O operador & retorna o valor armazenado em um endere�o, enquanto o operador * retorna o endere�o de uma vari�vel.\n\n");
                				printf("3. O operador & retorna o valor l�gico da conjun��o entre duas express�es, enquanto o operador * retorna o valor da multiplica��o entre duas express�es.\n\n4.Nenhuma das alternativas.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 6
                			
                			if (resposta==1){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 7
								system("cls");
								printf("+------------------------------------------------------------+\n");
                                printf("�   7- Qual � a diferen�a entre os operadores == e = em C?   �\n");
                                printf("+------------------------------------------------------------+\n\n\n");
                                
                				
                				printf("1. O operador == � usado para atribuir um valor a uma vari�vel, enquanto o operador = � usado para comparar dois valores.\n\n2. O operador == � usado para verificar se dois valores s�o diferentes, enquanto o operador = � usado para verificar se dois valores s�o iguais\n\n");
                				printf("3. O operador == � usado para verificar se dois valores s�o iguais, enquanto o operador = � usado para verificar se dois valores s�o diferentes.\n\n4. O operador == � usado para verificar se dois valores s�o iguais, enquanto o operador = � usado para verificar se dois valores s�o diferentes.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 7
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 8
								system("cls");
								printf("+------------------------------------------------------------------------------+\n");
                                printf("�   8- Qual � a diferen�a entre os tipos de dados char e unsigned char em C?   �\n");
                                printf("+------------------------------------------------------------------------------+\n\n\n");
                                
                				
                				printf("1. O tipo char pode armazenar caracteres alfanum�ricos, enquanto o tipo unsigned char pode armazenar apenas caracteres num�ricos.\n\n2. O tipo char pode armazenar valores inteiros de 8 bits, enquanto o tipo unsigned char pode armazenar valores inteiros de 16 bits.\n\n");
                				printf("3. O tipo char pode armazenar valores positivos e negativos, enquanto o tipo unsigned char pode armazenar apenas valores positivos.\n\n4. O tipo char pode armazenar valores decimais, enquanto o tipo unsigned char pode armazenar valores bin�rios.\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 8
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 9
								system("cls");
								printf("+------------------------------------------------------+\n");
                                printf("�   9- Qual � o resultado da seguinte opera��o em C?   �\n");
                                printf("+------------------------------------------------------+\n\n\n");
								
                				
                				printf("#include <stdio.h>\nint main() {\n  int x = 10, y = 3;\nx = x << y;\n\n");
                				printf("1. x � igual a 13\n2. x � igual a 80\n3. x � igual a 5\n4. x � igual a 30\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 9
                			
                			if (resposta==4){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
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
							
							do{ //Quest�o numero 10
								system("cls");
								printf("+--------------------------------------------------+\n");
                                printf("�   10- Qual ser� o valor de mysteryFunction(6)?   �\n");
                                printf("+--------------------------------------------------+\n\n\n");
                                
                				printf("10.Qual ser� o valor de mysteryFunction(6)?\n\n");
                				printf("int mysteryFunction(int n) {\n  if (n <= 0) {\n    return 0;\n  } else {\n    return n + mysteryFunction(n - 2);\n  }\n}\n\n\n");
                				printf("1. 6\n2. 7\n3. 8\n4. 9\n\n");
                				printf("\nQual das op��es est� correta?\n\n");
                				scanf("%i", &resposta);
                				fflush(stdin);
                			
                			} while ((resposta>4) || (resposta<=0));//Pergunta 10
                			
                			if (resposta==3){
                				printf("\nResposta Correta!\n");
                				printf("Voc� ganhou 250 pontos!!\n\n");
                				printf("                    Parab�ns!!\n");
   								printf("        Voc� finalizou a dificuldade Dificil!\n");
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
                		
                		case 4: //Op��o Voltar a tela de Menu
                			system("cls");
                			
                			break;
                			
                		default:
                			printf("\n\n                                      -Op��o inv�lida. Tente novamente!\n\n");
							printf("\n                                        -Pressione Enter para voltar-");
                			getch();
                			break;
                		
					}
				} while ((dificuldade>4) || (dificuldade<=0)); //La�o de repeti��o para a op��o de dificuldade
		
                break;
            case 2:
                printf("\nAbrindo op��es...\n");
                // Coloque aqui o c�digo para exibir as op��es do jogo
                	system("cls");
                	
                	do{
                		printf("+----------------------------------+\n");
	       				printf("�  1. Como Jogar                   �\n");
	        			printf("�  2. Placar de Pontua��es         �\n");
	        			printf("�  3. Voltar                       �\n");
	                	printf("+----------------------------------+\n");
	                	scanf("%i", &opcao);
	                	fflush(stdin);
                		
					} while ((opcao>3) || (opcao<=0));
                		
	                	
               		 	switch (opcao){
				
                			case 1:{
               		 			system("cls");
                			
                				printf("+-------------------------------------------------------------------------+\n");
                				printf("� O Jogador escolhe uma dificuldade entre Facil/Medio/Dificil.            �\n");
                				printf("� S�o 10 perguntas idenpendente da dificuldade escolhida. Ao acertar      �\n");
                				printf("� na pergunta, o jogador acumula ontos e avan�a para a proxima pergunta.  �\n");
                				printf("� Ao errar a pergunta voc� retorna ao come�o do jogo.                     �\n");
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
        							printf("�           P L A C A R            �\n");
        							printf("+----------------------------------+\n");
        							
                					for(x=0;x<i;x++){
										printf("\n %i� %s : %i pontos.", x+1,player[x].nome, pontuacao[x]);
										
									}
                						
                					printf("\n\nGostaria de sair(1-Sim/2-N�o): ");
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
                printf("\nOp��o inv�lida. Tente novamente.\n");
                break;
        }

        printf("\n                                        -Pressione uma tecla para continuar...");
        getch(); // Aguarda uma tecla antes de continuar
    } while (escolha != 4);

    return 0;
}
