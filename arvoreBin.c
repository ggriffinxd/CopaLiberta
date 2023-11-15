#include <stdlib.h>
#include <stdio.h>
#include "arvoreBin.h"

No* criarArvore(Time x, No *esq, No *dir){
    No *r = (No*)malloc(sizeof(No));

    r->time = x;
    r->esquerda = esq;
    r->direita = dir;

    return r;
}

No* procurarNo(No *arv, Time x){
    No *esq;

    if(arv == NULL || arv->time.name == x.name)
        return arv;

    esq = procurarNo(arv->esquerda,x);

    if(esq != NULL)
        return esq;
    return procurarNo(arv->direita,x);
};

int numero_nos(No *arv){
    if(arv == NULL)
        return 0;
    return numero_nos(arv->esquerda) + numero_nos(arv->direita) + 1;
}

int altura(No *arv){
    int h_esq = 0, h_dir = 0;

    if(arv == NULL)
        return 0;
    h_esq = altura(arv->esquerda);
    h_dir = altura(arv->direita);

    return 1+(h_esq>h_dir?h_esq:h_dir);
}

void criarTime(Time *time){
    fflush(stdin);
    gets(time->name);
    scanf("%d",&time->potencial);
}


No* disputar (Time *times, int l, int r){
    int m = (l+r)/2;

    No *t = criarArvore(times[m],NULL,NULL);

    if(l < r){
        t->esquerda = disputar(times,l,m);
        t->direita = disputar(times,m+1,r);
        if(t->esquerda->time.potencial > t->direita->time.potencial)
            t->time = t->esquerda->time;
        else
            t->time = t->direita->time;
    }
    return t;
}

void inordem(No *arv){
    if(arv){
        inordem(arv->esquerda);
        printf("-[= %5s =]-- ",arv->time.name);
        printf("\n\n");
        inordem(arv->direita);
        printf("\t\t");
    }
}
