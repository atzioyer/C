#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20
#define USUARIOS 10

int* registrados = 0;
int** matrix;
int totaldesalidas=0;
int count();

void registrar();
void entradaosalida(int, int);
void header();
void horario();
