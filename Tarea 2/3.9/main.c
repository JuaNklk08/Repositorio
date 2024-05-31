#include <stdio.h>
#include <stdlib.h>

void main(void) //punto de entrada de un programa.
{
    int I = 2, CAM = 1; //La l�nea de c�digo "int I = 2, CAM = 1;" declara dos variables enteras en C/C++ llamadas "I" y "CAM", inicializ�ndolas con los valores 2 y 1 respectivamente.
    long SSE = 0;  //declara una variable llamada "SSE" de tipo "long" e inicializa su valor a 0.
    while (I <= 2500)  //esta l�nea de c�digo establece que el bloque de c�digo asociado se ejecutar� mientras el valor de "I" sea menor o igual a 2500.
    {
        SSE = SSE + I;  //esta l�nea de c�digo acumula la suma de los valores de "I" en la variable "SSE" en cada iteraci�n del bucle while.
        printf("\t %d", I);  //esta l�nea de c�digo se ejecuta, imprime en la consola el valor de "I" precedido por una tabulaci�n.
        if (CAM)  // esta l�nea de c�digo verifica si el valor de "CAM" es verdadero (diferente de cero).
        {
            I += 5;  //esta l�nea de c�digo incrementa el valor de "I" en 5 en cada iteraci�n del bucle o en el flujo de control del programa.
            CAM--;  //despu�s de ejecutar esta l�nea de c�digo, el valor de "CAM" se reducir� en 1 unidad.
        }
        else
        {
            I += 3;  // incrementa el valor de la variable "I" en 3 unidades.
            CAM++;  //Despu�s de ejecutar esta l�nea de c�digo, el valor de "CAM" se incrementar� en 1 unidad.
        }
    }
    printf("\nLa suma de la serie es: %ld", SSE);  //mprime en la consola el mensaje "La suma de la serie es: " seguido del valor almacenado en la variable "SSE".
}
