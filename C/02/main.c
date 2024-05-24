#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la función principal de un programa en C o C++ que no toma parámetros ni devuelve valores.
{
    float PRE, NPR; //declara dos variables de tipo float llamadas PRE y NPR, que se pueden usan para almacenar y manipular valores de punto flotante en un programa en C o C++.
    printf("Ingrese el precido del producto: ");
    scanf("%f", &PRE); //lo utilizamos para mostrar un mensaje al usuario en la consola, solicitando que ingrese el precio de un producto.
    if (PRE < 1500)  //evalúa si el valor de PRE es menor que 1500 y ejecuta diferentes bloques de código en función de esa evaluación.
    {
        NPR = PRE * 1.11;  //Este calculara un nuevo valor basado en el precio original PRE, aplicando un aumento del 11%, y asigna el resultado a la variable NPR.
        printf("\nNuevo precio: %7.2f", NPR); // imprime el valor de la variable NPR en la consola con un formato específico
    }
}
