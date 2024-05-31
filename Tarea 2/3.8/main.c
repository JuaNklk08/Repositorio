#include <stdio.h>
#include <stdlib.h>

void main(void)  //punto de entrada al programa.
{
    int I, NUM; //sta línea de código sirve para declarar dos variables enteras
    long FAC;  //declara una variable llamada "FAC" de tipo "long".
    printf("\nIngrese el numero: ");  //muestra un mensaje en la consola o en la salida estándar, solicitando al usuario que ingrese un número.
    scanf("%d", &NUM);  //esta línea de código se ejecuta, espera a que el usuario ingrese un número entero desde el teclado y almacena ese valor en la variable NUM.
    if (NUM >= 0)  //esta línea de código verifica si el número almacenado en la variable "NUM" es no negativo. Si es así, se ejecutará el bloque de código que sigue a esta línea.
    {
        FAC = 1;   //asigna el valor 1 a la variable "FAC".
        for (I=1; I <= NUM; I++)  //alcance o supere el valor almacenado en "NUM". Cada vez que se ejecuta el bloque de código dentro del bucle, "I" aumentará en 1.
            FAC *= I;  //multiplica el valor actual de la variable "FAC" por el valor actual de la variable "I" y luego asigna el resultado a la variable "FAC".
        printf("El factorial de %d es: %ld", NUM, FAC);  // imprime el mensaje "El factorial de " seguido del número ingresado por el usuario y su correspondiente factorial.
    }
    else  //se usa para definir un bloque de código que se ejecutará si la condición del "if" previo no se cumple.
        printf("\nError en el dato ingresado");  //imprime un mensaje de error en la consola cuando el número ingresado por el usuario no es válido para el cálculo del factorial.
}
