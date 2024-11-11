//Programa Sobre A Função Logística
//Versão 1.0 
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
	
	//Comando De Regionalização
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
	//True - Tamanho Máximo Da Janela
	
    //Variáveis
    int x;
    char y;
    float K, r, t, P, P0, g, g1, g2, g3, g4, g5, g6, g7, g8, e = 2.7182818284590452353602874713527;
    
    //Título Do Programa
    SetConsoleTitle("Logistics Function Program In Portuguese Language");
    
    //Parte Inicial Do Programa
    printf("\t\t\t\t\t\t|Programa Iniciado|\n");
    printf("\t\t\t\t\t\t|    Versão 1.0   |\n\n");
    printf("\t*Função Logística: P(t) = K/(1 + g*e^(-rt)).");
    printf("\n\n");
    printf("\t*Obs: Onde O Qual g = ((K/P0) - 1).");
    printf("\n\n");
    printf("\t*Significado Das Incógnitas:\n\n");
    printf("\tA Letra t ==> Tempo De Manifestação.\n");
    printf("\tA Letra P ==> Crescimento Da Onda Sigmoide (Limite Superior).");
    printf("\n");
	printf("\tA Letra P0 ==> Ponto de Partida Do Crescimento Da Onda Sigmoide (P Inicial).");  
	printf("\n");
    printf("\tA Letra K ==> Quantidade Populacional Limitada Por Uma Certa Região Existente.");
    printf("\n");
    printf("\tA Letra r ==> Constante Relacionada Com O Problema.");
    printf("\n");
    printf("\tA Letra e ==> Número De Euler.");
	printf("\n\n");
	
	//Gráfico
	printf("\t*Exemplo Do Gráfico Da Função Sigmoide:");
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
    
    //Comando Goto (Reset ou Retorno Para Digitar Novamente Os Dados Das Variáveis
    inicio:
    
    //Menu De Escolha
    printf("\n\n");
    printf("\t\t\t\t\t\t|### - Menu - ###|");
    printf("\n\n");
    printf("\t*Escolha Uma Opção Entre (1) a (5):");
    printf("\n\n");
    printf("\t*Obs: Escolha Uma Variável Que Deseja Achar O Valor, Caso As Outras Já Existam.");
	printf("\n\n");
    printf("\tOpção (1) ==> Achar O Valor Da Variável (r).");
    printf("\n");
    printf("\tOpção (2) ==> Achar O Valor Da Variável (t).");
    printf("\n");
    printf("\tOpção (3) ==> Achar O Valor Da Variável (P).");
    printf("\n");
    printf("\tOpção (4) ==> Achar O Valor Da Variável (P0).");
    printf("\n");
    printf("\tOpção (5) ==> Achar O Valor Da Variável (K).");
    printf("\n\n");
    printf("\t*Escolha sua Opção ==> ");
    scanf("%d",&x);
    
    //Opções Do Menu
    switch(x){
    	case 1:
    		//Armazenamento De Dados Das Variáveis
    		printf("\n");
    		printf("\t*Você Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Opção (1).");
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
    
    		//Encontrando A Variável (r)
    		g = ((K/P0) - 1);
    		g1 = (g*K - g*P);
    		g2 = (P*pow(g,2));
    		r = - ((log(g1/g2))/t);
    		
    		printf("\n");
    		printf("\t*Resultado Próximo Da Variável (r) ==> %.6f...\n", r);
		break;
		case 2:
			//Armazenamento De Dados Das Variáveis	
			printf("\n");
    		printf("\t*Você Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Opção (2).");
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
    
    		//Encontrando A Variável (t)
    		g = ((K/P0) - 1);
    		g1 = (g*K - g*P);
    		g2 = (P*pow(g,2));
    		t = - ((log(g1/g2))/r);
    		
    		printf("\n");
    		printf("\t*Resultado Próximo Da Variável (t) ==> %.6f...\n", t);
		break;
		case 3:
			//Armazenamento De Dados Das Variáveis	
			printf("\n");
    		printf("\t*Você Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Opção (3).");
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
    
    		//Encontrando A Variável (P)
    		g = ((K/P0) - 1);
    		g3 = pow(e,-(r*t));
    		P = (K/(1 + g*g3));
    		
    		printf("\n");
    		printf("\t*Resultado Próximo Da Variável (P) ==> %.6f...\n", P);
		break;
		case 4:
			//Armazenamento De Dados Das Variáveis	
			printf("\n");
    		printf("\t*Você Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Opção (4).");
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
    
    		//Encontrando A Variável (P0)
    		g4 = (1/(K*pow(e,-(t*r))));
    		g5 = (1/(P*pow(e,-(t*r))));
    		g6 = (1/K);
    		g7 = (g5 - g4 + g6);
    		P0 = (1/g7);
    		
    		printf("\n");
    		printf("\t*Resultado Próximo Da Variável (P0) ==> %.6f...\n", P0);
		break;
		case 5:
			//Armazenamento De Dados Das Variáveis	
			printf("\n");
    		printf("\t*Você Fez Sua Escolha!");
    		printf("\n");
    		printf("\t*Basicamente a Opção (5).");
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
    
    		//Encontrando A Variável (K)
    		g8 = (P*pow(e,-(r*t)));
    		K = ((P0*P - g8*P0)/(P0 - g8));
    		
    		printf("\n");
    		printf("\t*Resultado Próximo Da Variável (K) ==> %.6f...\n", K);
		break;	 
	default:
			printf("\n");
			printf("\t*Atenção!");
			printf("\n");
			printf("\t*Opção Inexistente!\n");	   
}
	printf("\n");
	printf("\t*Deseja Digitar Outros Dados Sobre As Opções Disponíveis Do Menu Acima?");
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
	printf("\t*Obrigado Por Usa-ló! :)\n\n");
	system("pause > NULL");
	return 0;
}
