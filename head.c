#include<stdio.h>
#include<string.h>
#include "head.h"

void statsAwal() {
    strcpy(crFanboy.name, "_Hylmi");
    (crFanboy).life = 1;
    (crFanboy).hepi = 10;
    (crFanboy).sosial = 10;
    (crFanboy).uang = 1000;
}

int act1Impact[3] = {10, 10, -10};
int act2Impact[3] = {5, 5, -5};
int act3Impact[3] = {1, 1, -1};


void act1() {
    (crFanboy).hepi += act1Impact[0]*10;
    (crFanboy).sosial += act1Impact[1]*5;
    (crFanboy).uang += act1Impact[2]*7;
}

void act2() {
    (crFanboy).hepi += act2Impact[0]*10;
    (crFanboy).sosial += act2Impact[1]*5;
    (crFanboy).uang += act2Impact[2]*7;
}

void act3() {
    (crFanboy).hepi += act3Impact[0]*10;
    (crFanboy).sosial += act3Impact[1]*5;
    (crFanboy).uang += act3Impact[2]*7;
}

/*
void opsi(int _pil) {
    printf("pill:%d\n", _pil);
    if (_pil = 1) {act1();}
    else if (_pil = 2) {act2();}
    else if (_pil = 3) {act3();}
    else {crFanboy.life = 0;}
}*/