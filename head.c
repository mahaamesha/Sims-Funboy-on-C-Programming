#include<stdio.h>
#include<string.h>
#include "head.h"

void statsAwal() {
    strcpy(crFanboy.name, "_Hylmi");
    (crFanboy).life = 1;
    (crFanboy).happiness = 40;
    (crFanboy).social = 40;
    (crFanboy).hygiene = 40;
    (crFanboy).health = 40;
    (crFanboy).money = 40;
    (crFanboy).energy = 50;
}

void initAct(activities *a,char _name[30], int _impHp, int _impSc, int _impHy, int _impHt, int _impMn, int _impEn, int _imp0) {
    strcpy((*a).name, _name );
    (*a).impHappiness = _impHp;
    (*a).impSocial = _impSc;
    (*a).impHygiene = _impHy;
    (*a).impHealth = _impHt;
    (*a).impMoney = _impMn;
    (*a).impEnergy = _impEn;
    (*a).imp0 = _imp0;
}

void Action(fanboy *p, activities *a) {
    (*p).happiness += (*a).impHappiness;
    (*p).health += (*a).impHealth;
    (*p).social += (*a).impSocial;
    (*p).hygiene += (*a).impHygiene;
    (*p).money += (*a).impMoney;
    (*p).energy += (*a).impEnergy;
}

void valid(fanboy *st) {
    if ((*st).money >= 100) {printf("YOU WIN");}

    if ((*st).happiness<0) {(*st).happiness=0;}
    if ((*st).happiness>100) {(*st).happiness=100;}

    if ((*st).social<0) {(*st).social=0;}
    if ((*st).social>100) {(*st).social=100;}

    if ((*st).hygiene<0) {(*st).hygiene=0;}
    if ((*st).hygiene>100) {(*st).hygiene=100;}

    if ((*st).health<=0) {(*st).life=0;printf("WASTED");}   //die
    if ((*st).health>100) {(*st).health=100;}

    if ((*st).energy<=0) {(*st).life=0; printf("WASTED");}    //die
    if ((*st).energy>100) {(*st).energy=100;}
}

void pStats() {
    printf("Happiness: %d\n", (crFanboy).happiness);
    printf("Social: %d\n", (crFanboy).social);
    printf("Hygiene: %d\n", (crFanboy).hygiene);
    printf("Health: %d\n", (crFanboy).health);
    printf("Money: %d\n", (crFanboy).money);
    printf("Energy: %d\n", (crFanboy).energy);
}

void pAct() {
    printf("\n1. Sleep\n");
    printf("2. Eat\n");
    printf("3. Bath\n");
    printf("4. Sport\n");
    printf("5. Work\n");
    printf("6. Hobby\n");
    printf("7. Pray\n");
    printf("8. Hangout\n");
    printf("9. Study\n");
    printf("10. Party\n");
}