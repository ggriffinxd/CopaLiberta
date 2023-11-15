#ifndef ARVOREBIN_H_
#define ARVOREBIN_H_
#include <stdlib.h>
#include <stdio.h>

typedef struct Time{
    char name[20];
    int potencial;
}Time;

void criarTime(Time *time);

typedef struct No{
    Time time;
    struct No *esquerda, *direita;
}No;

No* criarArvore(Time x, No *esq, No *dir);

No* procurarNo(No *arv, Time x);

int numero_nos(No *arv);

int altura(No *arv);

No* disputar (Time *times, int l, int r);


#endif // ARVOREBIN_H_

