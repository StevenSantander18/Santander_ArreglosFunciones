#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar una matriz aleatoria
void generarMatrizAleatoria(int fil, int col, int matriz[fil][col]) {
    for (int i = 0; i < fil; ++i) {
        for (int j = 0; j < col; ++j) {
            matriz[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
            printf("%d\t", matriz[i][j]);
        }
        printf(" \n");
    }
}

// Función para sumar dos matrices
void sumarMatrices(int fil, int col, int matriz1[fil][col], int matriz2[fil][col], int resultado[fil][col]) {
    printf("Suma de las matrices:\n");
    for (int i = 0; i < fil; ++i) {
        for (int j = 0; j < col; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    int fil;
    int col;

    // Solicitar al usuario las dimensiones de las matrices
    printf("Ingrese el número de filas: ");
    scanf("%d", &fil);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &col);

    int matriz1[fil][col];
    int matriz2[fil][col];
    int resultado[fil][col];

    // Llamada a función para generar la matriz 1
    printf("matriz1\n");
    generarMatrizAleatoria(fil, col, matriz1);

    // Llamada a función para generar la matriz 2
    printf("matriz2\n");
    generarMatrizAleatoria(fil, col, matriz2);

    // Llamada a función para sumar las matrices
    sumarMatrices(fil, col, matriz1, matriz2, resultado);

    return 0;
}
