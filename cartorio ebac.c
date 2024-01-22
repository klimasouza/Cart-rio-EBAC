#include <stdio.h> //COMUNICA COM O USUÁRIO
#include <stdlib.h> //MEMÓRIA
#include <locale.h> //TEXTO POR TERRITÓRIO
#include <string.h> // BIBLIOTECA DE STRINGS

int registro()
{
     char arquivo [40];
	 char cpf [40];
     char nome [40];
     char sobrenome [40];
     char cargo [40];
     
     printf("Digite o cpf a ser cadastrado:");
     scanf ("%s", cpf);
     
     strcpy(arquivo, cpf); // COPIA OS VALORES DAS STRINGS
     
     FILE *file; //CRIA O ARQUIVO NA PASTA
     file = fopen(arquivo, "w");
     fprintf(file, cpf); // SALVA O VALOR DA VARIAVEL
     fclose(file); // FECHA O ARQUIVO
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM VIRGULA
     fprintf(file,",");
     fclose(file);
     
     printf ("Digite o nome a ser cadastrado: ");
     scanf("%s", nome);
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM NOME
     fprintf(file, nome);
     fclose(file);
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM VIRGULA
     fprintf(file, ",");
     fclose(file);
     
     printf ("Digite o sobrenome a ser cadastrado: "); 
     scanf("%s", sobrenome);
	 
	 file - fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM SOBRENOME
     fprintf(file, sobrenome);
     fclose(file);
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM VIRGULA
     fprintf(file, ",");
     fclose(file);
     
     printf ("Digite o cargo a ser cadastrado: ");
     scanf("%s", cargo);
     
     file - fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM CARGO
     fprintf(file, cargo);
     fclose(file);
     
     system("pause");
    		
}

int consulta()
{
     setlocale (LC_ALL, "portuguese"); // definicao de linguagem
     
     char cpf [40];
     char conteudo [200];
	 
	 printf("Digite o cpf a ser consultado: "); //busca de cadastro
     scanf("%s",cpf);
     
     FILE *file;
     file = fopen(cpf,"r");
     
     if(file == NULL)
        {
         printf("Cadastro não localizado!\n"); //
	    }
	 
	 while(fgets(conteudo, 200, file)!= NULL)
	   {
	   	 printf("\nEssas são as informações do usuário: "); //dados de cadastro
		 printf ("%s", conteudo);
		 printf ("\n\n");
	   }
	 
	 system ("pause");
	   
	}

int deletar ()
{
     printf("Você escolheu deletar um nome!\n");
	 system("pause");
}

int main ()
    {
	int opcao=0; //definicao  variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	 	
	 system("cls");
	 
	 setlocale (LC_ALL, "portuguese"); // definicao de linguagem
	
	 printf ("\t*CARTÓRIO DA EBAC*\n"); // inicio do menu
	 printf ("**ESTE SOFTWARE É PARA USO LIVRE***\n\n");
	 
	 printf ("Seleccione a opção no menu:\n\n");
	 printf ("\t1 - Registrar nomes\n");
	 printf ("\t2 - Consultar nomes\n");
	 printf ("\t3 - Deletar nomes\n\n");
	 printf ("\t4 - Sair do sistema\n\n");
	 
	 printf ("Opção:"); //fim do menu
	 
	 scanf ("%d",&opcao); //armazenamento de escolha de usuario
	 
	 system("cls");
	 
	 switch(opcao)
	 {
	 	 case 1: //inicio da seleção
		 registro ();
		 break;
		 
		 case 2:
		 consulta ();
		 break;
		 
		 case 3:
		 deletar();
		 break;
		 
		 case 4:
		 printf ("Obrigada por utilizar o sistema!\n");
		 return 0;
		 break;
		 
		 default:
		 printf("Essa opção não está disponpivel!\n");
		 system("pause");
		 break;
		
		// fim da seleção
	 
	 }
	

	}
	
}
