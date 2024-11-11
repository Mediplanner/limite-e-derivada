//Software Medplanner (Programa Em Baixo Valor)
//Versão 0.1
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

int main(){
	
	//Comando De Regionalização
	setlocale(LC_ALL, "Portuguese");

//Tamanho Da Tela do Programa
	CONSOLE_FONT_INFOEX font;
	
	font.cbSize = sizeof(font); 
	font.nFont = 0;
	font.dwFontSize.X = 0;
	font.dwFontSize.Y = 22;
	font.FontFamily = FF_MODERN;
	font.FontWeight = FW_BOLD;
	wcscpy(font.FaceName, L"Consolas");
	
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &font);
	//Obs 1: False - Somente Na Janela Atual
	//Obs 2: True - Tamanho Máximo Da Janela
	
	//Título Do Software
    SetConsoleTitle("Medplanner in Low Value - Version 0.1");
    
	//Classic Command Prompt
	system("color 0A");
	
	//Variáveis 1
	int x;
	char y[50];
	
	printf("  __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __\n");
    printf(" |                    #                                                                           #                   |\n");
    printf(" |                    #                      YPP5Y?!^.            .:^~!77?7                       #                   |\n");
    printf(" |                    #                      5GGGGBBGPJ!.      .^!7???????7                       #                   |\n");
    printf(" |                    #                      5GGGGYYPGBGP?:  .~7???7!!????7                       #                   |\n");
    printf(" |                    #                      5GGGG:    !GGGY????^    .????7                       #                   |\n");
    printf(" |                    #                      5GGGG:     ~GY????^     .????7                       #                   |\n");
    printf(" |                    #                      5GGGG:      J????7      .????7                       #                   |\n");
    printf(" |                    #                      YGPPP:      ~????~      .7???7                       #                   |\n");
    printf(" |                    #                                                                           #                   |\n");
    printf(" |                    #                                ..........                                 #                   |\n");
    printf(" |                    #                               |MEDPLANNER|                                #                   |\n");
    printf(" |                    #                                ¨¨¨¨¨¨¨¨¨¨                                 #                   |\n");
    printf(" |                    #                                   ####                                    #                   |\n");
    printf(" |                    #                                ,,,,,,,,,,                                 #                   |\n");
    printf(" |                    #                               |BEM VINDO!|                                #                   |\n");
    printf(" |                    #                                **********                                 #                   |\n");
    printf(" | _ _ _ _ _ _ _ _ _  #_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _# _ _ _ _ _ _ _ _ _ |\n\n");
	printf("\t\t\t\t\t\t Como Podemos Te Ajudar?\n\n");
	printf("\t\t\t\t\t **** Digite Uma Das Opções Abaixo ****\n");
	printf("                                              ____________________________ \n");
	printf("                                             | 1 - Cadastro | 3 - Voltar  |\n");
	printf("                                             | 2 -  Login   | 4 - Sair    |\n");
	printf("                                              ****************************\n\n");
	
	printf("\t- Digite Uma Opção ==> ");
	scanf("%d",&x);
	
	//Opções De Escolha
	switch(x){
		case 1:
			printf("\n");
			printf("\tATENÇÃO!");
			printf("\n\n");
			printf("\tFUNÇÃO NÃO DISPONÍVEL NO MOMENTO!");
		break;
		case 2:
			while(1){
				
				//Limpa A Tela
				system("cls");
				
				//Variáveis 2
    			char usuario[50];
    			char senha[50];
    			char c;
    			char i;
    			char usuariocorreto[] = "usuario";
				char senhacorreta[] = "senha123"; 
    			//Declarando Usuário E Senha
    			printf("\nCPF: ");
    			scanf("%s",&usuario);
    			fflush(stdin);
    			printf("\nSenha: ");
    		
    			//Senha Com Símbolos De Asteriscos (*)
    			while((c = _getch())!= '\r'){
    			
				//Ocultando A Senha		
    			if(c == 8 && i > 0){
    					
    			printf("\b\b");
    			i--;
				}
				else{
				
				senha[i++] = c;
				printf("*");
				}
				senha[i] = '\0';
				}		
	
			//Confirmação De Dados	
			if(strcmp(usuario,usuariocorreto) == 0 && strcmp(senha,senhacorreta) == 0){
			
			system("cls");
			printf("\nO Nome DE Usuário E A Senha Estão Corretos");
			break;
				}	
			else{
			
				printf("\nDados De Login Incorretos");
				printf("\n*Aperte Enter Para Continuar");
				}		
			}	
		break;
		case 3:
			printf("\n");
			printf("\tATENÇÃO!");
			printf("\n\n");
			printf("\tFUNÇÃO NÃO DISPONÍVEL NO MOMENTO!");
		break;
		case 4:
			printf("\n");
			printf("\tATENÇÃO!");
			printf("\n\n");
			printf("\tFUNÇÃO NÃO DISPONÍVEL NO MOMENTO!");
		break;
	default:
			printf("\nVocê Não Escolheu Nenhuma Das Opções Disponíveis");		
	}

	system("pause > NULL");
	return 0;	
}
