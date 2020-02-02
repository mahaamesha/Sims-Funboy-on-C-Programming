#include <stdio.h>
#include <stdlib.h>
#include "Math.h"

/* Selektor */
#define X(P) (P).x
#define Y(P) (P).y

#define Neff(T) (T).Neff
#define MaxEl(T) (T).MaxEl
#define TI(T) (T).TI

/* Mendefinisikan ADT */
typedef struct {
	int x, y;
} Point;

typedef struct {
	int Neff, MaxEl;
	int *T;
} TabInt;

/* Konstruktor Point */
Point makePoint(int x, int y, ) {
    Point P;
    X(P) = x;
    Y(P) = y;

    return P;
}

/* Konstruktor TabInt */
TabInt makeTabInt(int Neff, int MaxEl, int *T) {
    TabInt TI;
    Neff(*T) = 0;
    TI(*T) = (int*) malloc (sizeof(int)* MaxEl);

    return TI;
}

