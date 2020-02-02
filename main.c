#include <stdio.h>
#include "head.h"

int main() {
    int pil = 99;
    
    statsAwal();

    printf("start\n");
    printf("nama: %d\n", (crFanboy).name);

    printf("i: %d\n", (crFanboy).hepi);
    printf("i: %d\n", (crFanboy).life);
    printf("i: %d\n", (crFanboy).uang);
    printf("\n");
    scanf("%s", (crFanboy).name);

    while (crFanboy.life = 1)
    {
    printf("------------\n");
    //kondisi awal
    printf("nama: %d\n", (crFanboy).name);
    printf("hepi: %d\n", (crFanboy).hepi);
    
    //input pilihan (1/2/3)
    
    //printf("pil: %d", pil);
    scanf("%d\n", &pil);
    //opsi(pil);
    if (pil = 1) act1();
    else if (pil = 2) act2();
    else if (pil = 3) act3();
    else crFanboy.life = 0;

    //kondisi akhir
    printf("nama: %d\n", (crFanboy).name);
    printf("hepi: %d\n", (crFanboy).hepi);
    
    printf("lagi:\n");
    //scanf("%d", crFanboy.life);
    }

    return 0;
}