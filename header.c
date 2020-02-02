#include <stdio.h>
#include "header.h"

//struct fanboy crFanboy;

crFanboy.life = 1;
crFanboy.exp = 0;
crFanboy.energy = 100;
crFanboy.brain = 20;
crFanboy.money = 20;
crFanboy.strenghLvl, crFanboy.healthLvl, crFanboy.mentalLvl, crFanboy.spiritLvl, crFanboy.loveLvl, crFanboy.happinessLvl, crFanboy.hungerLvl = 20;

int *numChoice;

int sleep(int countSleep) {
    struct fanboy crFanboy;
    crFanboy.energy += 50;
    crFanboy.healthLvl += 10;
    crFanboy.mentalLvl += 5;
    crFanboy.spiritLvl += 5;
    crFanboy.hungerLvl -= 10;
};
int study() {
    //
};
int bath() {
    //
};
int sport() {
    //
};
int job() {
    //
};
int hobby() {
    //
};
int pray() {
    //
};
int party() {
    //
};
int bff() {
    //
};
int eat() {
    //
};

void prtAct(int _life) {
    if (crFanboy.life = 1)
    {
        printf("What next?\n");
        printf("1. Sleep\n");
        printf("2. Study\n");
        printf("3. Take a Bath\n");
        printf("4. Doing Sport\n");
        printf("5. Work\n");
        printf("6. Hoobby\n");
        printf("7. Pray\n");
        printf("8. Join Party\n");
        printf("9. Friend Time\n");
        printf("10. Eat\n");
        printf("99. Exit\n");
        printf("Input (1-10): \n");
    }
};

void prtStat() {};
void myChoice(int *_numChoice) {
    if (*numChoice = 1) {sleep(crAct.cSleep);}
    else if (*numChoice = 2) {study(crAct.cStudy);}
    else if (*numChoice = 3) {bath(crAct.cBath);}
    else if (*numChoice = 4) {sport(crAct.cSport);}
    else if (*numChoice = 5) {job(crAct.cJob);}
    else if (*numChoice = 6) {hobby(crAct.cHobby);}
    else if (*numChoice = 7) {pray(crAct.cPray);}
    else if (*numChoice = 8) {party(crAct.cParty);}
    else if (*numChoice = 9) {bff(crAct.cBff);}
    else if (*numChoice = 10) {eat(crAct.cEat);}
    else {crFanboy.life = 0;}   //dead
};

int valid() {
    if (crFanboy.healthLvl = 100)
    {
        printf("winhealth");
    }
    else if (crFanboy.mentalLvl = 100)
    {
        printf("winmental");
    }
    else if (crFanboy.spiritLvl = 100)
    {
        printf("winspirit");
    }
    else if (crFanboy.strenghLvl = 100)
    {
        printf("winstr");
    }
    else
    {
        //if there is remain time, make lose identification
        printf("lose");
    }
    
    return crFanboy.life = 0;
};*/