#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la función principal de un programa en C o C++ que no toma parámetros ni devuelve valores.
{
    float PRE, NPR; //se utiliza para declarar dos variables de tipo float, PRE y NPR, que pueden ser utilizadas en el programa para almacenar y manipular valores de punto flotante.
    printf("Ingrese el precio del producto: "); // se utiliza para solicitar al usuario que ingrese el precio de un producto
    scanf("%f", &PRE); //se utiliza para permitir al usuario ingresar un número decimal (el precio del producto en este caso), que se almacena en la variable PRE para su posterior uso en el programa.
    if (PRE < 1500)  // se utiliza para verificar si el precio del producto es menor que 1500, lo que permite tomar decisiones basadas en el valor del precio.
        NPR = PRE * 1.11;  //se utiliza para calcular el nuevo precio del producto (NPR) aplicando un incremento del 11% al precio original (PRE).
    else  // Se utiliza para ejecutar un bloque de código cuando la condición del if no se cumple
        NPR = PRE * 1.08; //se utiliza para calcular el nuevo precio del producto (NPR) aplicando un aumento del 8% al precio original (PRE).
    printf("\nNuevo precio del producto: %8.2f", NPR);  // se utiliza para imprimir el nuevo precio del producto (NPR) en la consola
}
