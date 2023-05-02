//
// Created by Luis Henriques on 17/05/2022.
//

#ifndef PROJETOFINAL_LISTASLUIS_H
#define PROJETOFINAL_LISTASLUIS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <malloc.h>

struct Aluno{
    int num, saldo, ano, turma;
    char nome[50];
};

typedef struct noLista{
    struct Aluno AlunoLista;
    struct noLista * prox;
}noLista;

typedef noLista * pLista;

pLista cria();
int vazia(pLista lista);
void procura(pLista lista, int chave, pLista* ant, pLista *atual);
void elimina(pLista lista, int chave);
void insere(pLista lista, struct Aluno p1);
int numgen(char *ptr);
void carregar(pLista lista,int numero,int quantia);



#endif //PROJETOFINAL_LISTASLUIS_H
