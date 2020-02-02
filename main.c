#include <stdio.h>
#include "head.h"

int main() {
    int pil;

    initAct(&act[0],"Sleep",0,0,-10,15,0, 30);
    initAct(&act[1],"Eat",10,5,-5,20,-10, 15);
    initAct(&act[2],"Bath",5,0,35,5,0, 5);
    initAct(&act[3],"Sport",5,15,-15,15,-5,-20);
    initAct(&act[4],"Work",-20,15,-20,-15,40,-25);
    initAct(&act[5],"Hobby",20,25,-5,-5,-15,-10);
    initAct(&act[6],"Pray",10,5,0,5,0,0);
    initAct(&act[7],"Hangout",15,10,-10,-10,-20,-10);
    initAct(&act[8],"Study",-15,5,-5,-10,0,-20);
    initAct(&act[9],"Party",30,25,-10,5,-25,-15);
    initAct(&act[10],"Zero",-5,-5,-5,-5,0,-5);

    statsAwal();    //inisiaisasi stats awal

    printf("START\n");
    printf("What's your name? ");
    scanf("%s", (crFanboy).name);
    printf("\nHello, %s\n", (crFanboy).name);
    printf("This is your initial condition.\n");
    pStats();   //cetak kondisi awal
    printf("\nGET YOUR FIRST 100_MONEY\n");    //objektif game

    while (crFanboy.life == 1) {
    printf("----------------------------------\n");

    //input pilihan (1 s.d 10)
    pAct();     //print opsi activities
    printf("\nWhat's next?");
    scanf("%d", &pil);
    if (pil == 1) Action(&crFanboy, &act[pil-1]);
    else if (pil == 2) Action(&crFanboy, &act[pil-1]);
    else if (pil == 3) Action(&crFanboy, &act[pil-1]);
    else if (pil == 4) Action(&crFanboy, &act[pil-1]);
    else if (pil == 5) Action(&crFanboy, &act[pil-1]);
    else if (pil == 6) Action(&crFanboy, &act[pil-1]);
    else if (pil == 7) Action(&crFanboy, &act[pil-1]);
    else if (pil == 8) Action(&crFanboy, &act[pil-1]);
    else if (pil == 9) Action(&crFanboy, &act[pil-1]);
    else if (pil == 10) Action(&crFanboy, &act[pil-1]);
    else Action(&crFanboy, &act[10]);

    valid(&crFanboy);
    printf("%s' Stats\n", crFanboy.name);
    pStats();   //cetak kondisi akhir
    //scanf("%d", crFanboy.life);
    }

    return 0;
}