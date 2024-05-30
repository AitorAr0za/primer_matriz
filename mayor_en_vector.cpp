#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <cctype>

using namespace std;

int main() {

    int LARGO = 5;
    int numeros[LARGO];
    int mayor;

    for (int i = 0; i < LARGO; i++) {

        int numero;

        printf("Ingrese un numero de indice %d para insertar en el vector: ", i);
        scanf(" %d", &numero);

        numeros[i] = numero;

        if (i == 0) mayor = numeros[i];

        else if (numeros[i] > mayor) mayor = numeros[i];

    }

    printf("El mayor de los numeros ingresados es: %d", mayor);

    return 0;
}
