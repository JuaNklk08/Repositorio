#include <stdio.h>
#include <stdlib.h>

void main(void) //punto de entrada de un programa.
{
    int I = 2, CAM = 1; //La línea de código "int I = 2, CAM = 1;" declara dos variables enteras en C/C++ llamadas "I" y "CAM", inicializándolas con los valores 2 y 1 respectivamente.
    long SSE = 0;  //declara una variable llamada "SSE" de tipo "long" e inicializa su valor a 0.
    while (I <= 2500)  //esta línea de código establece que el bloque de código asociado se ejecutará mientras el valor de "I" sea menor o igual a 2500.
    {
        SSE = SSE + I;  //esta línea de código acumula la suma de los valores de "I" en la variable "SSE" en cada iteración del bucle while.
        printf("\t %d", I);  //esta línea de código se ejecuta, imprime en la consola el valor de "I" precedido por una tabulación.
        if (CAM)  // esta línea de código verifica si el valor de "CAM" es verdadero (diferente de cero).
        {
            I += 5;  //esta línea de código incrementa el valor de "I" en 5 en cada iteración del bucle o en el flujo de control del programa.
            CAM--;  //después de ejecutar esta línea de código, el valor de "CAM" se reducirá en 1 unidad.
        }
        else
        {
            I += 3;  // incrementa el valor de la variable "I" en 3 unidades.
            CAM++;  //Después de ejecutar esta línea de código, el valor de "CAM" se incrementará en 1 unidad.
        }
    }
    printf("\nLa suma de la serie es: %ld", SSE);  //mprime en la consola el mensaje "La suma de la serie es: " seguido del valor almacenado en la variable "SSE".
}
