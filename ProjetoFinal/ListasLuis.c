#include "ListasLuis.h"

pLista cria(){
    pLista aux;
    struct Aluno p1={0, 0, 0, 0, ""};
    aux = (pLista)malloc(sizeof (noLista));
    if(aux != NULL){
        aux->AlunoLista = p1;
        aux->prox = NULL;
    }
    return aux;
}

int vazia(pLista lista){
    if(lista->prox== NULL)return 1;
    else return 0;
}

void procura(pLista lista, int chave, pLista* ant, pLista *atual){
    *ant = lista ;  *atual = lista->prox;
    while((*atual)!= NULL && (*atual)->AlunoLista.num < chave){
        *ant = *atual;
        *atual= (*atual)->prox;
    }
    if((*atual) != NULL && (*atual)->AlunoLista.num != chave){
        *atual = NULL;
    }
}

void elimina(pLista lista, int chave){
    pLista ant, atual;
    procura(lista, chave, &ant,&atual);
    if(atual!=NULL){
        ant->prox = atual->prox;
        free(atual);
    }
}

void insere(pLista lista, struct Aluno p1){
    pLista no, ant, inutil;
    no = (pLista) malloc(sizeof (noLista));
    if (no != NULL){
        no->AlunoLista = p1;
        procura(lista, p1.num, &ant, &inutil);
        no->prox = ant->prox;
        ant->prox = no;
    }
}

void carregar(pLista lista,int numero,int quantia){
    pLista ant, atual;
    procura(lista, numero, &ant,&atual);
    if(atual!=NULL){
        atual->AlunoLista.saldo += quantia;
        printf("saldo= %d", atual->AlunoLista.saldo);
    }
}