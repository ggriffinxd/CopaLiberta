#include <stdlib.h>
#include <stdio.h>
#include "dadosTimes.h"

Time* criarTime(){
    Time* time = (Time*)malloc(sizeof(Time));
    fflush(stdin);
    gets(time->name);
    gets(time->artilheiro);
    scanf("%d",&time->potencial);
    return time;
}
