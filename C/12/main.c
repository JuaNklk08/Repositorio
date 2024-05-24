#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la función principal (main) en un programa en C.
{
    int T, P, N; //declara tres variables enteras en C llamadas T, P y N.
    printf("Ingrese los valores de T, P y N: ");  //imprime un mensaje en la consola, solicitando al usuario que ingrese los valores de las variables T, P y N.
    scanf("%d %d %d", &T, &P, &N); //utilizará la función scanf para leer tres valores enteros ingresados por el usuario desde la consola y los asignará a las variables T, P y N.
    if (P != 0) //es una declaración condicional en C. Esta línea verifica si el valor almacenado en la variable P es diferente de cero.
    {
        if (pow (T / P, N) == (pow(T, N) / pow(P, N))) //es una declaración condicional en C que verifica si dos expresiones son iguales.
            printf("\nSe comprueba la igualdad"); //esta línea de código imprimirá en la consola el mensaje "Se comprueba la igualdad" en una nueva línea.
    }
    else
        printf("\nNo se comprueba la igualdad"); //esta línea de código imprimirá en la consola el mensaje "No se comprueba la igualdad" en una nueva línea.
}
