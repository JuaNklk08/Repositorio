#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la función principal de un programa en C o C++ que no toma parámetros ni devuelve valores.
{
    float P, S, R;  // se utiliza para declarar tres variables de tipo float llamadas P, S y R, respectivamente.
    printf("\nIngrese las ventas de los tres vendedores: ");  //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese las ventas de tres vendedores.
    scanf("%f %f %f", &P, &S, &R);  //se utiliza para leer tres valores decimales ingresados por el usuario desde la consola y almacenarlos en las variables P, S y R.
    if (P > S)  //se utiliza para comparar las ventas del primer vendedor (P) con las ventas del segundo vendedor (S) y ejecutar un bloque de código si las ventas del primer vendedor son mayores que las del segundo.
        if (P > R)  //Se utiliza para comparar las ventas del primer vendedor (P) con las ventas del tercer vendedor (R) y ejecutar un bloque de código si las ventas del primer vendedor son mayores que las del tercero.
        if (S > R)
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);  //se utiliza para imprimir en la consola el orden de presentación de las ventas de los vendedores (P, S y R), seguido de los valores correspondientes, con un formato específico.
    else
        printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
    else
        printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);
    else
        if (S > R)
        if (P > R)
        printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
    else
        printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
    else
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);
}
