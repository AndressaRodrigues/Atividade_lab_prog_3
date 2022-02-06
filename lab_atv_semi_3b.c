#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  
    FILE *arq1;
    FILE *arq2;


    char str[] = "Comparar";
    char str2[] = "Comparar";
    char info1[20];
    char info2[20];

    //cria e popula os arquivos
    if((arq1 = fopen("exercicio2.txt", "w"))==NULL){
      printf("\nFalha ao criar o arquivo 1\n\n");
      return 1;
  } else {
      //inserindo o conteudo no arquivo criado
      fwrite(str , 1 , sizeof(str) , arq1);
      //teste manual
      printf("\nSucesso! Arquivo 1 criado \n");  
      fclose(arq1); 
      }

    if(((arq2 = fopen("exercicio2b.txt", "w"))==NULL)){
      printf("\nFalha ao criar o arquivo 2\n\n");
      return 1;
  }
   else {
      //inserindo o conteudo no arquivo criado
      fwrite(str2 , 1 , sizeof(str) , arq1);
      //teste manual
      printf("\nSucesso! Arquivo 2 criado\n");  
      fclose(arq2); 
      }


    //lê o conteúdo dos arquivos
    if(((arq2 = fopen("exercicio2b.txt", "r"))==NULL)){
      printf("\nFalha ao abrir o arquivo 2\n\n");
      return 1;
    }if((arq1 = fopen("exercicio2.txt", "r"))==NULL){
        printf("\nFalha ao abrir o arquivo 1\n\n");
      return 1;
      } else{
      //copiando o conteúdo do arquivo
      fgets(info1, 19, arq1);
      fgets(info2, 19, arq2);
      //adicionando uma linha para diferenciar
      
      //teste manual
      printf("\nSucesso! Strings lidas\n");   
      fclose(arq1);
      fclose(arq2); 
  }

    //compara os conteúdos e informa o resultado ao usuário
    if(strcmp(info1, info2)!=0){
            printf("\nOs arquivos não tem conteúdo idêntico\n");
        } else {
            printf("\nOs arquivos são idênticos");
        }
    

  return 0;
}