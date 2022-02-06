#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  
    FILE *arq1;
    FILE *arq2;

    char nome[20];
    char dest[23];
    char str[] = "Algum conteúdo para inserir e copiar";
    char str2[] = "\nCópia do arquivo 1\n";
    char copia;

    //capturando o nome inserido pelo usuário e formatando para criar o arquivo
    printf("\nInsira o nome do arquivo a ser gerado:\n");
    scanf("%s", nome);
    strcpy(dest, nome);
    strcat(dest, ".txt");

    if((arq1 = fopen(dest, "w"))==NULL){
      printf("\nFalha ao abrir o arquivo\n\n");
      return 1;
  } else {
      //inserindo o conteudo no arquivo criado
      fwrite(str , 1 , sizeof(str) , arq1);
      //teste manual
      printf("\nSucesso! Arquivo criado\n");  
      fclose(arq1); 
      }

if(((arq2 = fopen("arquivo_com_outro_nome.txt", "w"))==NULL)){
      printf("\nFalha ao abrir o arquivo\n\n");
      return 1;
  }if((arq1 = fopen(dest, "r"))==NULL){
      printf("\nFalha ao abrir o arquivo\n\n");
      return 1;} else{
      //copiando o conteúdo do arquivo
      while ((copia = fgetc(arq1)) != EOF){
        fputc(copia, arq2);}
      //adicionando uma linha para diferenciar
      fwrite(str2 , 1 , sizeof(str2) , arq2);
      //teste manual
      printf("\nSucesso! Arquivo copiado\n");   
      fclose(arq1);
      fclose(arq2); 
  }
      

  return 0;
}