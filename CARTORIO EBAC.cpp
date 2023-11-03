#include <stdio.h> //Biblioteca de comunicação com o usuario 
#include <stdlib.h> //biblioteca de alocação de espaço de memoria
#include <locale.h> // Biblioteca de alocação de texto por região 
#include <string.h> //Biblioteca que cuida das string

    int registro() // Função responsavel por cadastrar usuarios no sistema
    {
    	// inicio da criação de variaveis/string
    	char arquivo[40];
    	char cpf[40];
    	char nome[40];
    	char sobrenome[40];
    	char cargo[40];
    	// final da criação de variaveis/string	
    	
        printf("Digite o CPF:   "); // coletando informação do usuario
		scanf("%s", cpf);	// refere-se a strings
		
		strcpy(arquivo, cpf); // Responsavel por copiar os valores da string
		
		FILE *file; // Criar o arquivo
		file = fopen(arquivo, "w"); // criar o arquivo, w significa escrever
		fprintf(file,cpf); // salvar o valor da variavel
		fclose(file); // fechar o arquivo
		
		file = fopen(arquivo, "a"); // criar o arquivo 
		fprintf(file, ","); // salvar o valor da variavel
		fclose(file); // fechar o arquivo
		
		printf("Digite o nome: "); // coletando informações do usuario
		scanf("%s", nome); //refere-se a string
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file,nome); // salvar o valor da variavel
		fclose(file); // fechar o arquivo
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file, ","); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		printf("Digite sobrenome: "); // coletando informação do usuario
		scanf("%s", sobrenome); // refere-se a strings
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file,sobrenome); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		file = fopen(arquivo, "a"); // criar arquivo
		fprintf(file, ","); // salvar o valor da variavel
		fclose(file); // fechar arquivo
		
		printf("Digite o cargo: ");// coletando informação do usuario
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
		// inicio da criação de variaveis/string
		
		setlocale(LC_ALL, "portuguese"); // Definindo a linguagem
		
	    char cpf[40];
		char conteudo[200];
		// final da criação de variaveis/string	
		
		printf("Digite o cpf: "); // coletando informação do usuario
		scanf("%s", cpf);//refere-se a string
		
		FILE *file; // criar arquivo
		file = fopen(cpf,"r"); // salvar o valor da variavel r significa ler
		
		if(file == NULL) // responsavel por identificar a informação inserida pelo usuario
		{
			printf("Arquivo não localizado!.\n");
		}
		
		while(fgets(conteudo, 200, file) != NULL)
		{
			printf("\nEssas são as informações do usuario: "); // resposta ao usuario
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
			printf("Usuario não encontrado!.\n");
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
	
	
	 printf("### CARTÓRIO DA EBAC ###\n\n"); // Inicio do menu
	 printf("Escolha a opção desejada do menu:\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n");
	 printf("\t4 - Sair\n\n");
	 printf("Opção: "); // fim do menu
	
	 scanf("%d", &opcao); // armazenando a escolha do usuario 
	
	 system("cls"); // limpar a tela
	 
	 
	 switch(opcao) // inicio da seleção do menu
	 {
	 	
	 	case 1:
	 	registro(); // chamar a função
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
		printf("Opção indisponivel\n");
		system("pause");
		
		//fim da seleção		
	 }
	 
	
		
	}
	
 } 

