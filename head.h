#include<stdio.h>
#include<string.h>

typedef struct {
    char name[30];
    int life, energy;
    int happiness, social, hygiene, health, money;
}fanboy;
fanboy crFanboy;

typedef struct {
    char name[30];
    int impHappiness;
    int impSocial;
    int impHygiene;
    int impHealth;
    int impMoney;
    int impEnergy;
    int imp0;
}activities;
activities act[11];

void statsAwal();
void initAct();
void Action(fanboy *p, activities *a);
void valid();
void pStats();
void pAct();