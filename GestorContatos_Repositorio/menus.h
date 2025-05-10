#ifndef MENUS_H
#define MENUS_H

#include<stdio.h>
#include<stdlib.h>

int listarContatos_menu(int opcao2);
int procurarContato_menu();
int adicionarContatos_menu();
int main_menu();

int main_menu(){
    int opcao;

    while(1){
    system("cls");
    printf("+--------- MENU ---------+");
    printf("\n1.Listar Contatos;");
    printf("\n2.Procurar Contato;");
    printf("\n3.Adicionar Contato;");
    printf("\nExit (0);");
        printf("\n\nEscolha:");
        scanf("%d",&opcao);

            switch (opcao){
                case 1:
                    listarContatos_menu(opcao);
                break;
                    case 2:
                        procurarContato_menu(opcao);
                    break;
                        case 3:
                            adicionarContatos_menu(opcao);
                        break;
                            default:
                                return 0;
            }

}

}

int listarContatos_menu(int opcao2){
    system("cls");

    while(1){
    printf("+--------- LISTA CONTATOS ---------+");

    //--------Listar Contatos Armanzenados ------------+
    // (Listar todos os contatos armazenados na ficheiro contatos.txt);
    //-------------------------------------------------+

        printf("\nRealizar acao:");
        printf("\n1. Modificar;");
        printf("\n2. Deletar;");
        printf("\n3. Favoritar;");
        printf("\nVOLTAR (0)");
             printf("\n\nEscolha:");
                scanf("%d",&opcao2);

                switch (opcao2){
                    case 1:
                        printf("Modificar");
                        break;
                            case 2:
                                printf("Deletar");
                                break;
                                    case 3:
                                        printf("Favoritar");
                                        break;
                                            default:
                                            return 0;
                }


}}

int procurarContato_menu(){
    system("cls");

     printf("+--------- PESQUISA CONTATOS ---------+");

        printf("Qual o metodo de pesquisa:");
        printf("1. Nome;");
        printf("2. Numero telefone;");
        printf("3. Email;");
        printf("VOLTAR (0)");


return 0;
}

int adicionarContatos_menu(){
    system("cls");

     printf("+--------- ADICIONAR CONTATO ---------+");

        printf("Nome:");
        printf("Apelido:");
        printf("Telefone:");
        printf("Morada:");
        printf("Email:");

        return 0;
}

#endif