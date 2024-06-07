#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    const int FILAS = 3;
    const int COLUMNAS = 4;
    int matriz[FILAS][COLUMNAS];
    int filita;
    int columnita;
    int swich = 1;
    int elemento;

    srand(time(0));

    for (int i = 0; i < FILAS; i++) {

        printf("| ");

        for (int j = 0; j < COLUMNAS; j++) {

            matriz[i][j] = rand() % 100;

            if (matriz[i][j] < 10) printf("%d  |", matriz[i][j]);

            else printf("%d |", matriz[i][j]);
        }

        printf("\n");

    }

    printf("\n");

    while (swich) {

        printf("Ingrese la fila del indice que se desea buscar: ");
        scanf("%d", &filita);

        filita--;

        printf("\nAhora ingrese la columna del indice que se desea buscar: ");
        scanf("%d", &columnita);

        columnita--;

        if (filita < 0 or columnita < 0) printf("\nHas ingresado un indice negativo, por favor ingrese indices validos.\n\n");

        else if (filita >= FILAS or columnita >= COLUMNAS) printf("\nHas ingresado un indice fuera del rango de la matriz, por favor ingrese indices validos.\n\n");

        else (swich = 0);

    }

    elemento = matriz[filita][columnita];

    if (elemento % 2 == 0) printf("\nEl numero que se encuentra en la fila %d columna %d es el %d. Es un numero par", filita, columnita, elemento);

    else printf("\nEl numero que se encuentra en la fila %d columna %d es el %d. Es un numero impar", filita, columnita, elemento);

    getch();

    return 0;
}
