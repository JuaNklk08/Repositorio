#include <stdio.h>
#include <stdlib.h>

void main(void) // define la función principal (main) en un programa en C.
{
    int CLA, TIE; //declara dos variables enteras en C llamadas CLA y TIE.
    float COS; //declara una variable llamada COS que puede contener valores
    printf("Ingresa la clave y el tiempo: "); //es una instrucción en C que imprime un mensaje en la consola, solicitando al usuario que ingrese la clave y el tiempo.
    scanf("%d %d", &CLA, &TIE); //utilizará la función scanf para leer dos valores enteros ingresados por el usuario desde la consola y los asignará a las variables CLA y TIE.
    switch(CLA) //se utiliza para realizar una selección de múltiples casos basada en el valor de una expresión o variable.
    {
        case 1: COS = TIE * 0.13 / 60; break; // es un caso dentro de una declaración switch en C.
        case 2: COS = TIE * 0.11 / 60; break;
        case 5: COS = TIE * 0.22 / 60; break;
        case 6: COS = TIE * 0.19 / 60; break;
        case 7:
        case 9: COS = TIE * 0.17 / 60; break;
        case 10: COS = TIE * 0.20 / 60; break;
        case 15: COS = TIE * 0.39 / 60; break;
        case 20: COS = TIE * 0.28 / 60; break;
        default : COS = -1; break;
    }
    if (COS != -1) //erifica si el valor almacenado en la variable COS es diferente de -1.
        printf("\n\nClave: %d\tTiempo: %d\Costo: %6.2f", CLA, TIE, COS); //imprime los valores de las variables CLA, TIE y COS en la consola.
    else
        printf("\nError en la clave"); //esta línea de código imprimirá en la consola el mensaje "Error en la clave" en una nueva línea.
}
