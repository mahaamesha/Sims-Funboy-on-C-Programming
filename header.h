#include <stdio.h>
//#ifndef header.h
//#define header.h

typedef struct fanboy {
    char name;
    int life;
    int exp, energy, brain, money;
    int strenghLvl, healthLvl, mentalLvl, spiritLvl, loveLvl, happinessLvl, hungerLvl;
}crFanboy;

typedef struct cAct {
    int *cSleep, *cStudy, *cBath, *cSport, *cJob;
    int *cHobby, *cPray, *cParty, *cBff, *cEat;
}crAct;

typedef struct date {
    int *tgl;
    int *bln;
    int *thn;
}crDate;

typedef struct time {
    int *jj;
    int *mm;
}crTime;

int fexp() {};
int fenergy() {};

int sleep() {};
int study() {};
int bath() {};
int sport() {};
int job() {};
int hobby() {};
int pray() {};
int party() {};
int bff() {};
int eat() {};

void prtAct() {};
void prtStat() {};
void myChoice() {};
void valid() {};