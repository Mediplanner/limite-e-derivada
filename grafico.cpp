//Programa Sobre A Fun��o Log�stica
//Vers�o 1.0 
//Autor: Pedro Henrique Garcia Dos Santos

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <limits.h>
#include <iostream>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int main(void){
	
	//Comando De Regionaliza��o
    setlocale(LC_ALL, "Portuguese");
    
	//Tamanho Da Tela Do Programa
	CONSOLE_FONT_INFOEX font;
	
	font.cbSize = sizeof(font); 
	font.nFont = 0;
	font.dwFontSize.X = 0;
	font.dwFontSize.Y = 20;
	font.FontFamily = FF_MODERN;
	font.FontWeight = FW_BOLD;
	wcscpy(font.FaceName, L"Consolas");
	
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &font);
	//False - Somente Na Janela Atual
	//True - Tamanho M�ximo Da Janela
	
    //Vari�veis
    int x;
    char y;
    float K, r, t, P, P0, g, g1, g2, g3, g4, g5, g6, g7, g8, e = 2.7182818284590452353602874713527;
    
    //T�tulo Do Programa
    SetConsoleTitle("Logistics Function Program In Portuguese Language");
    
    //Parte Inicial Do Programa
    printf("\t\t\t\t\t\t|Programa Iniciado|\n");
    printf("\t\t\t\t\t\t|    Vers�o 1.0   |\n\n");
    printf("\t*Fun��o Log�stica: P(t) = K/(1 + g*e^(-rt)).");
    printf("\n\n");
    printf("\t*Obs: Onde O Qual g = ((K/P0) - 1).");
    printf("\n\n");
    printf("\t*Significado Das Inc�gnitas:\n\n");
    printf("\tA Letra t ==> Tempo De Manifesta��o.\n");
    printf("\tA Letra P ==> Crescimento Da Onda Sigmoide (Limite Superior).");
    printf("\n");
	printf("\tA Letra P0 ==> Ponto de Partida Do Crescimento Da Onda Sigmoide (P Inicial).");  
	printf("\n");
    printf("\tA Letra K ==> Quantidade Populacional Limitada Por Uma Certa Regi�o Existente.");
    printf("\n");
    printf("\tA Letra r ==> Constante Relacionada Com O Problema.");
    printf("\n");
    printf("\tA Letra e ==> N�mero De Euler.");
	printf("\n\n");
	
	//Gr�fico
	printf("\t*Exemplo Do Gr�fico Da Fun��o Sigmoide:");
	printf("\n\n\n");
	printf("\t\tP(t) ==> Crescimento Populacional");
	printf("\n");
	printf("\t\t                                        :J.               .        .       .    ");
	printf("\n");
	printf("\t\t .:.   .        .       .        .      .!        ..........................    ");
    printf("\n");
    printf("\t\t       .                .                ~      ....                            ");
    printf("\n");
    printf("\t\t       .                .                ~    ...         .                .    ");
    printf("\n");
    printf("\t\t ::.   .       ..       .        .       ~   ..   .       .        .       .    ");
    printf("\n");
    printf("\t\t       .                .                ~  ..            .                     ");
    printf("\n");
    printf("\t\t       .                .                ~ :.             .                .    ");
    printf("\n");
    printf("\t\t ::.   .       ..       .        .       ~:.      .       .        .       .    ");
    printf("\n");
    printf("\t\t       .                .                !.               .                     ");
    printf("\n");
    printf("\t\t       .                .               .!                .                     ");
    printf("\n");
    printf("\t\t ::.   .       ..       .        .     .:~        .       .        .       .    ");
    printf("\n");
    printf("\t\t       .                .             .: ~                .                .    ");
    printf("\n");
    printf("\t\t       .                .            .:  ~                .                     ");
    printf("\n");
    printf("\t\t :.    .       ..       .        .  ..   ~        .       .        .       .    ");
    printf("\n");
    printf("\t\t       .                .        ....    ~                .                .    ");
    printf("\n");
    printf("\t\t                               ....      ~                                      ");
    printf("\n");
    printf("\t\t ..^!.::::::::::^:::::::^:::^:::::.::.:::!::..:::::.:::::.:::::.::::..:::.:::.!~");
    printf("\n");
    printf("\t\t . :^..:.......::.......:...............^5:.......:.......:........:.......:..^:");
    printf("\n");
    printf("\t\t      .::.     ...     .::      ...     .:.      ..      .:.      .:      .::   ");
    printf("\n");
    printf("\t\t                                                                     t ==> Tempo\n\n");
    printf("\n\n");
    printf("\t*Resolvendo O Problema:");
    
    //Comando Goto (Reset ou Retorno Para Digitar Novamente Os Dados Das Vari�veis
    inicio:
    
    //Menu De Escolha
    printf("\n\n");
    printf("\t\t\t\t\t\t|### - Menu - ###|");
    printf("\n\n");
    printf("\t*Escolha Uma Op��o Entre (1) a (5):");
    printf("\n\n");
    printf("\t*Obs: Escolha Uma Vari�vel Que Deseja Achar O Valor, Caso As Outras J� Existam.");
	printf("\n\n");
    printf("\tOp��o (1) ==> Achar O Valor Da Vari�vel (r).");
    printf("\n");
    printf("\tOp��o (2) ==> Achar O Valor Da Vari�vel (t).");
    printf("\n");
    printf("\tOp��o (3) ==> Achar O Valor Da Vari�vel (P).");
    printf("\n");
    printf("\tOp��o (4) ==> Achar O Valor Da Vari�vel (P0).");
    printf("\n");
    printf("\tOp��o (5) ==> Achar O Valor Da Vari�vel (K).");
    printf("\n\n");
    printf("\t*Escolha sua Op��o ==> ");
    scanf("%d",&x);
    
    //Op��es Do Menu
    switch(x){
    	case 1:
    		//Armazenamento De Dados Das Vari�veis
    		printf("\n");
    		printf("\t*Voc� Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Op��o (1).");
    		printf("\n\n");
    		printf("\t*Digite Aqui o Valor de (t) ==> ");
			scanf("%f",&t);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (P) ==> ");
			scanf("%f",&P);
			printf("\n");
    		printf("\t*Digite Aqui o Valor de (P0) ==> ");
			scanf("%f",&P0);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (K) ==> ");
			scanf("%f",&K);
    
    		//Encontrando A Vari�vel (r)
    		g = ((K/P0) - 1);
    		g1 = (g*K - g*P);
    		g2 = (P*pow(g,2));
    		r = - ((log(g1/g2))/t);
    		
    		printf("\n");
    		printf("\t*Resultado Pr�ximo Da Vari�vel (r) ==> %.6f...\n", r);
		break;
		case 2:
			//Armazenamento De Dados Das Vari�veis	
			printf("\n");
    		printf("\t*Voc� Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Op��o (2).");
    		printf("\n\n");
    		printf("\t*Digite Aqui o Valor de (r) ==> ");
			scanf("%f",&r);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (P) ==> ");
			scanf("%f",&P);
			printf("\n");
    		printf("\t*Digite Aqui o Valor de (P0) ==> ");
			scanf("%f",&P0);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (K) ==> ");
			scanf("%f",&K);
    
    		//Encontrando A Vari�vel (t)
    		g = ((K/P0) - 1);
    		g1 = (g*K - g*P);
    		g2 = (P*pow(g,2));
    		t = - ((log(g1/g2))/r);
    		
    		printf("\n");
    		printf("\t*Resultado Pr�ximo Da Vari�vel (t) ==> %.6f...\n", t);
		break;
		case 3:
			//Armazenamento De Dados Das Vari�veis	
			printf("\n");
    		printf("\t*Voc� Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Op��o (3).");
    		printf("\n\n");
    		printf("\t*Digite Aqui o Valor de (r) ==> ");
			scanf("%f",&r);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (t) ==> ");
			scanf("%f",&t);
			printf("\n");
    		printf("\t*Digite Aqui o Valor de (P0) ==> ");
			scanf("%f",&P0);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (K) ==> ");
			scanf("%f",&K);
    
    		//Encontrando A Vari�vel (P)
    		g = ((K/P0) - 1);
    		g3 = pow(e,-(r*t));
    		P = (K/(1 + g*g3));
    		
    		printf("\n");
    		printf("\t*Resultado Pr�ximo Da Vari�vel (P) ==> %.6f...\n", P);
		break;
		case 4:
			//Armazenamento De Dados Das Vari�veis	
			printf("\n");
    		printf("\t*Voc� Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Op��o (4).");
    		printf("\n\n");
    		printf("\t*Digite Aqui o Valor de (r) ==> ");
			scanf("%f",&r);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (t) ==> ");
			scanf("%f",&t);
			printf("\n");
    		printf("\t*Digite Aqui o Valor de (P) ==> ");
			scanf("%f",&P);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (K) ==> ");
			scanf("%f",&K);
    
    		//Encontrando A Vari�vel (P0)
    		g4 = (1/(K*pow(e,-(t*r))));
    		g5 = (1/(P*pow(e,-(t*r))));
    		g6 = (1/K);
    		g7 = (g5 - g4 + g6);
    		P0 = (1/g7);
    		
    		printf("\n");
    		printf("\t*Resultado Pr�ximo Da Vari�vel (P0) ==> %.6f...\n", P0);
		break;
		case 5:
			//Armazenamento De Dados Das Vari�veis	
			printf("\n");
    		printf("\t*Voc� Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Op��o (5).");
    		printf("\n\n");
    		printf("\t*Digite Aqui o Valor de (r) ==> ");
			scanf("%f",&r);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (t) ==> ");
			scanf("%f",&t);
			printf("\n");
    		printf("\t*Digite Aqui o Valor de (P) ==> ");
			scanf("%f",&P);
			printf("\n");
			printf("\t*Digite Aqui o Valor de (P0) ==> ");
			scanf("%f",&P0);
    
    		//Encontrando A Vari�vel (K)
    		g8 = (P*pow(e,-(r*t)));
    		K = ((P0*P - g8*P0)/(P0 - g8));
    		
    		printf("\n");
    		printf("\t*Resultado Pr�ximo Da Vari�vel (K) ==> %.6f...\n", K);
		break;	 
	default:
			printf("\n");
			printf("\t*Aten��o!");
			printf("\n");
			printf("\t*Op��o Inexistente!\n");	   
}
	printf("\n");
	printf("\t*Deseja Digitar Outros Dados Sobre As Op��es Dispon�veis Do Menu Acima?");
	printf("\n");
	printf("\t*Selecione [S/N]: ");
	scanf("%s", &y);
	fflush(stdin);
	
	if(y == 's' || y == 'S'){
		goto inicio;
}
	
	//Parte Final Do Programa
	printf("\n");
	printf("\t*Fim Do Programa.");
	printf("\n");
	printf("\t*Obrigado Por Usa-l�! :)\n\n");
	system("pause > NULL");
	return 0;
}
