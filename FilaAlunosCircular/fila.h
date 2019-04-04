#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define TRUE 1
#define FALSE 0

typedef struct heroi {
    char nome[40];
    float nota;
} Heroi;

int init();
int finish();
int entra(Heroi a);
int sai(Heroi *pa);
int cheia();
int vazia();


#endif // FILA_H_INCLUDED
