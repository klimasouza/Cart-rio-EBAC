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
     
     printf("Digite o cpf a ser cadastrado:"); // TELA PARA DIGITAÇÃO DO CPF
     scanf ("%s", cpf);
     
     strcpy(arquivo, cpf); // COPIA OS VALORES DAS STRINGS
     
     FILE *file; //CRIA O ARQUIVO NA PASTA
     file = fopen(arquivo, "w");
     fprintf(file, cpf); // SALVA O VALOR DA VARIAVEL
     fclose(file); // FECHA O ARQUIVO
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM VIRGULA
     fprintf(file,",");
     fclose(file);
     
     printf ("Digite o nome a ser cadastrado: "); // TELA PARA DIGITAÇÃO DO NOME
     scanf("%s", nome);
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM NOME
     fprintf(file, nome);
     fclose(file);
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM VIRGULA
     fprintf(file, ",");
     fclose(file);
     
     printf ("Digite o sobrenome a ser cadastrado: "); // TELA PARA DIGITAÇÃO DO SOBRENOME
     scanf("%s", sobrenome);
	 
	 file - fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM SOBRENOME
     fprintf(file, sobrenome);
     fclose(file);
     
     file = fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM VIRGULA
     fprintf(file, ",");
     fclose(file);
     
     printf ("Digite o cargo a ser cadastrado: "); // TELA PARA DIGITAÇÃO DO CARGO
     scanf("%s", cargo);
     
     file - fopen(arquivo, "a"); //ATUALIZA O ARQUIVO COM CARGO
     fprintf(file, cargo);
     fclose(file);
     
     system("pause");
	 
	 // FIM DA SELEÇÃO
    		
}

int consulta()
{
     setlocale (LC_ALL, "portuguese"); // DEFINICAO DE LINGUAGEM
     
     char cpf [40];
     char conteudo [200];
	 
	 printf("Digite o cpf a ser consultado: "); //BUSCA DE CADASTRO
     scanf("%s",cpf);
     
     FILE *file; // ABRIR ARQUIVO PARA LEITURA
     file = fopen(cpf,"r");
          
     if(file == NULL)
        {
         printf("Cadastro não localizado!\n"); //CADASTROS INVÁLIDOS
	    }
	 
	 while(fgets(conteudo, 200, file)!= NULL)
	   {
	   	 printf("\nEssas são as informações do usuário: "); //DADOS DE CADASTRO EM TELA
		 printf ("%s", conteudo);
		 printf ("\n\n");
	   }
	 
	 system ("pause");
	 
	 // FIM DA SELEÇÃO
	   
	}

int deletar ()
{
     char cpf[40];
     
     printf("Digite o CPF a ser deletado:"); // SELEÇÃO DO CPF A SER DELETADO
     scanf("%s,cpf");
     
     remove(cpf); // REMOVER ARQUIVO
     
     printf("O CPF foi deletado!"); // CONFIRMAÇÃO DO CPF DELETADO
     system("pause");
     
     FILE *file; // ABRIR ARQUIVO
     file = fopen(cpf,"r"); // LER ARQUIVO
     
     if(file == NULL) // CPF NÃO ENCONTRADO
     {
     	printf ("O usuário não se encontra no sistema! \n");
     	system ("pause");
	 }
	 
	 // FIM DA SELEÇÃO
}

int main ()
   {
    	
     int opcao=0; //DEFINIÇÃO DE VARIÁVEIS
	 int laco=1;
	 char senhadigitada[10] = "a"; // DEFINIÇÃO DE SENHA
	
	 printf ("*CARTÓRIO DA EBAC*\n\n"); // PÁGINA DA SENHA
	 printf ("Login de administrador!\n\n Digite a sua senha:");
	 scanf ("%s", senhadigitada);	
    	
	   if(senhadigitada[10] == "admin")
	   {
		
	       for(laco=1;laco=1;)
		   {
	 	 	 setlocale (LC_ALL, "portuguese"); // DEFINIÇÃO DE LINGUAGEM
	
	 	 	 printf ("*CARTÓRIO DA EBAC*\n"); // INÍCIO DE MENU
	 	 	 printf ("**ESTE SOFTWARE É PARA USO LIVRE***\n\n"); // COPYRIGHT 
	 
	 		 printf ("Seleccione a opção no menu:\n\n"); //MENU DE SELEÇÃO
	 		 printf ("\t1 - Registrar nomes\n");
	 		 printf ("\t2 - Consultar nomes\n");
	 		 printf ("\t3 - Deletar nomes\n\n");
			 printf ("\t4 - Sair do sistema\n\n");
	 	 	 printf ("Opção:"); //FIM DO MENU
	 
	 		 scanf ("%d",&opcao); //ARMAZENAMENTO DE ESCOLHA DE USUÁRIO
	 
	 		 system("cls"); // LIMPA A TELA
	 
	 	       switch(opcao)
	 	       {	
	 			 case 1: //INICIO DA SELEÇÃO DAS FUNÇÕES
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
			     printf("Essa opção não está disponivel!\n");
			     system("pause");
			     break;
			   }
			}   	//FIM DA SELEÇÃO
		}
		
	else
	 printf("Senha incorreta!");	
				
   }

    
	
