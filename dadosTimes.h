#ifndef DADOSTIMES_H_
#define DADOSTIMES_H_
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char name[3];
    char artilheiro[11];
    int potencial;
}Time;

Time* criarTime();

#endif // DADOSTIMES_H_

