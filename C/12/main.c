#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la funci�n principal (main) en un programa en C.
{
    int T, P, N; //declara tres variables enteras en C llamadas T, P y N.
    printf("Ingrese los valores de T, P y N: ");  //imprime un mensaje en la consola, solicitando al usuario que ingrese los valores de las variables T, P y N.
    scanf("%d %d %d", &T, &P, &N); //utilizar� la funci�n scanf para leer tres valores enteros ingresados por el usuario desde la consola y los asignar� a las variables T, P y N.
    if (P != 0) //es una declaraci�n condicional en C. Esta l�nea verifica si el valor almacenado en la variable P es diferente de cero.
    {
        if (pow (T / P, N) == (pow(T, N) / pow(P, N))) //es una declaraci�n condicional en C que verifica si dos expresiones son iguales.
            printf("\nSe comprueba la igualdad"); //esta l�nea de c�digo imprimir� en la consola el mensaje "Se comprueba la igualdad" en una nueva l�nea.
    }
    else
        printf("\nNo se comprueba la igualdad"); //esta l�nea de c�digo imprimir� en la consola el mensaje "No se comprueba la igualdad" en una nueva l�nea.
}
