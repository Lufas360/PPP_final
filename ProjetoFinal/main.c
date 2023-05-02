#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ListasLuis.h"

char nome[50];
char *ptr = nome;


int main() {
    //setbuf(stdout,0);
    noLista *Alunolista = cria();
    do{
        printf("1-Inserir \n"
               "2-Carregar cartao\n"
               "3-Sair\n");
        int option, numero, saldo, ano, quantia, turma;
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("nome:  ");
                //while(getchar() != "\n"){
                scanf("%s", nome);
                //}
                printf("ano: ");
                scanf("%d", ano);
                printf("Turma: ");
                scanf("%d", turma);
                numero = numgen(ptr);
                printf("Numero do aluno: %d\n", numero);
                saldo = 0;
                struct Aluno p1={numero, saldo,ano,turma,nome};
                insere(Alunolista, p1);
                break;
            case 2:
                printf("Numero do aluno: ");
                scanf("%d", numero);
                printf("Quantia: ");
                scanf("%d", quantia);
                carregar(Alunolista, numero, quantia);
                break;
            case 3:
                break;
            default:
                break;
        }
    }while (option != 8);
    return 0;
}
