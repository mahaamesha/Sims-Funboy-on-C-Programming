#include <stdio.h>
#include "header.h"

int main() {
    struct fanboy crFanboy;
    struct cAct crAct;
    struct date crDate;
    struct time crTime;

    int *numChoice;

    printf("STATS LIFE\n");
    printf("\n");

    printf("Input nama: ");
    scanf(&*crFanboy.name);
    printf("Game Start\n");
    printf("Do what do you want, %s\n", &crFanboy.name);
    printf("\n");

    while (crFanboy.life != 0)
    //printf("%s", &crFanboy.life);
    {
        prtAct(crFanboy.life);
        scanf("%d", &*numChoice);
        myChoice(*numChoice);
        crFanboy.exp += (1 + (1 / *crFanboy.exp));
        valid(crFanboy); //cek stats
        prtStat();
    }
    return 0;
}