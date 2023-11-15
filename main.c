#include <stdio.h>
#include <stdlib.h>
#include "arvoreBin.h"

int main() {
    int n;
    printf("\nInforme o numero de times: ");
    scanf("%d", &n);

    Time* times = (Time*)malloc(n * sizeof(Time));

    printf("\n=== Simulacao do Chaveamento dos Grupos da Libertadores 2023 ===\n");

    for (int i = 0; i < n; i++) {
        printf("Time %d: \n", i+1);
        scanf("%s",times[i].name);
        printf("\nPotencial: (numero inteiro)");
        scanf("%d",&times[i].potencial);
        times[i].potencial = rand()%100;
    }

    No* raiz = disputar(times, 0, n - 1);

    free(times);
    free(raiz);

    return 0;

}
