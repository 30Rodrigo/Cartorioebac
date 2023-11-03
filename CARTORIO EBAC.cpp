#include <stdio.h> //Biblioteca de comunica��o com o usuario 
#include <stdlib.h> //biblioteca de aloca��o de espa�o de memoria
#include <locale.h> // Biblioteca de aloca��o de texto por regi�o 
#include <string.h> //Biblioteca que cuida das string

    int registro() // Fun��o responsavel por cadastrar usuarios no sistema
    {
    	// inicio da cria��o de variaveis/string
    	char arquivo[40];
    	char cpf[40];
    	char nome[40];
    	char sobrenome[40];
    	char cargo[40];
    	// final da cria��o de variaveis/string	
    	
        printf("Digite o CPF:   "); // coletando informa��o do usuario
		scanf("%s", cpf);	// refere-se a strings
		
		strcpy(arquivo, cpf); // Responsavel por copiar os valores da string
		
		FILE *file; // Criar o arquivo
		file = fopen(arquivo, "w"); // criar o arquivo, w significa escrever
		fprintf(file,cpf); // salvar o valor da variavel
		fclose(file); // fechar o arquivo
		
		file = fopen(arquivo, "a"); // criar o arquivo 
		fprintf(file, ","); // salvar o valor da variavel
		fclose(file); // fechar o arquivo
		
		printf("Digite o nome: "); // coletando informa��es do usuario
		scanf("%s", nome); //refere-se a string
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file,nome); // salvar o valor da variavel
		fclose(file); // fechar o arquivo
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file, ","); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		printf("Digite sobrenome: "); // coletando informa��o do usuario
		scanf("%s", sobrenome); // refere-se a strings
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file,sobrenome); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file, ","); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		printf("Digite o cargo: ");// coletando informa��o do usuario
		scanf("%s", cargo); // refere-se a strings
		
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file,cargo); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file, ","); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		system("pause");
				
	}
	
	int consultar()
	{
		// inicio da cria��o de variaveis/string
		
		setlocale(LC_ALL, "portuguese"); // Definindo a linguagem
		
	    char cpf[40];
		char conteudo[200];
		// final da cria��o de variaveis/string	
		
		printf("Digite o cpf: "); // coletando informa��o do usuario
		scanf("%s", cpf);//refere-se a string
		
		FILE *file; // criar arquivo
		file = fopen(cpf,"r"); // salvar o valor da variavel r significa ler
		
		if(file == NULL) // responsavel por identificar a informa��o inserida pelo usuario
		{
			printf("Arquivo n�o localizado!.\n");
		}
		
		while(fgets(conteudo, 200, file) != NULL)
		{
			printf("\nEssas s�o as informa��es do usuario: "); // resposta ao usuario
			printf("%s", conteudo); // strings
			printf("\n\n"); // pular linhas
		}
		    system("pause");
	}
	
	int deletar()
	{
		char cpf[40];
		
		printf("Digite o CPF a ser deletado: ");
		scanf("%s",cpf);
		
		remove(cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
			printf("Usuario n�o encontrado!.\n");
			system("pause");
		}
		
		
	}
	
int main()
{
	int opcao=0; // Definindo Variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
 {
 	 system("cls");
	
	 setlocale(LC_ALL, "portuguese"); // Definindo a linguagem
	
	
	 printf("### CART�RIO DA EBAC ###\n\n"); // Inicio do menu
	 printf("Escolha a op��o desejada do menu:\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n");
	 printf("\t4 - Sair\n\n");
	 printf("Op��o: "); // fim do menu
	
	 scanf("%d", &opcao); // armazenando a escolha do usuario 
	
	 system("cls"); // limpar a tela
	 
	 
	 switch(opcao) // inicio da sele��o do menu
	 {
	 	
	 	case 1:
	 	registro(); // chamar a fun��o
		break;
		
		case 2:
		consultar();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("Obrigado por ultilizar o sistema!\n");
		return 0;
		break;
		
		default:
		printf("Op��o indisponivel\n");
		system("pause");
		
		//fim da sele��o		
	 }
	 
	
		
	}
	
 } 

