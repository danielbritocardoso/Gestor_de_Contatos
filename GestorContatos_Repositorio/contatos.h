#ifndef CONTATOS_H
#define CONTATOS_H

#include<stdio.h>

typedef struct{
    char nome[20];
    char apelido[20];
    char telefone[7];
    char morada[50];
    char email[100];
}contato_cliente;

contato_cliente contato;



#endif