#include<stdio.h>

#include "menus.h"
#include "contatos.h"


int main(){
    char nome[20];

    // Criar um arquivo txt

 FILE *arquivo;

 arquivo = fopen("contatos.txt", "a");

if( arquivo == NULL){
    printf("Erro ao abrir o arquivo para adicao.\n"); 
    return 1;
}

fprintf(arquivo, "%s", nome);
fclose(arquivo);

printf("\n\nInformacoes adicionadas com sucesso!\n\n");
    return 0;

}