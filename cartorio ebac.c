#include <stdio.h> //COMUNICA COM O USU�RIO
#include <stdlib.h> //MEM�RIA
#include <locale.h> //TEXTO POR TERRIT�RIO
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
         printf("Cadastro n�o localizado!\n"); //
	    }
	 
	 while(fgets(conteudo, 200, file)!= NULL)
	   {
	   	 printf("\nEssas s�o as informa��es do usu�rio: "); //dados de cadastro
		 printf ("%s", conteudo);
		 printf ("\n\n");
	   }
	 
	 system ("pause");
	   
	}

int deletar ()
{
     printf("Voc� escolheu deletar um nome!\n");
	 system("pause");
}

int main ()
    {
	int opcao=0; //definicao  vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	 	
	 system("cls");
	 
	 setlocale (LC_ALL, "portuguese"); // definicao de linguagem
	
	 printf ("\t*CART�RIO DA EBAC*\n"); // inicio do menu
	 printf ("**ESTE SOFTWARE � PARA USO LIVRE***\n\n");
	 
	 printf ("Seleccione a op��o no menu:\n\n");
	 printf ("\t1 - Registrar nomes\n");
	 printf ("\t2 - Consultar nomes\n");
	 printf ("\t3 - Deletar nomes\n\n");
	 printf ("\t4 - Sair do sistema\n\n");
	 
	 printf ("Op��o:"); //fim do menu
	 
	 scanf ("%d",&opcao); //armazenamento de escolha de usuario
	 
	 system("cls");
	 
	 switch(opcao)
	 {
	 	 case 1: //inicio da sele��o
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
		 printf("Essa op��o n�o est� disponpivel!\n");
		 system("pause");
		 break;
		
		// fim da sele��o
	 
	 }
	

	}
	
}
