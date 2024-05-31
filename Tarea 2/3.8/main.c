#include <stdio.h>
#include <stdlib.h>

void main(void)  //punto de entrada al programa.
{
    int I, NUM; //sta l�nea de c�digo sirve para declarar dos variables enteras
    long FAC;  //declara una variable llamada "FAC" de tipo "long".
    printf("\nIngrese el numero: ");  //muestra un mensaje en la consola o en la salida est�ndar, solicitando al usuario que ingrese un n�mero.
    scanf("%d", &NUM);  //esta l�nea de c�digo se ejecuta, espera a que el usuario ingrese un n�mero entero desde el teclado y almacena ese valor en la variable NUM.
    if (NUM >= 0)  //esta l�nea de c�digo verifica si el n�mero almacenado en la variable "NUM" es no negativo. Si es as�, se ejecutar� el bloque de c�digo que sigue a esta l�nea.
    {
        FAC = 1;   //asigna el valor 1 a la variable "FAC".
        for (I=1; I <= NUM; I++)  //alcance o supere el valor almacenado en "NUM". Cada vez que se ejecuta el bloque de c�digo dentro del bucle, "I" aumentar� en 1.
            FAC *= I;  //multiplica el valor actual de la variable "FAC" por el valor actual de la variable "I" y luego asigna el resultado a la variable "FAC".
        printf("El factorial de %d es: %ld", NUM, FAC);  // imprime el mensaje "El factorial de " seguido del n�mero ingresado por el usuario y su correspondiente factorial.
    }
    else  //se usa para definir un bloque de c�digo que se ejecutar� si la condici�n del "if" previo no se cumple.
        printf("\nError en el dato ingresado");  //imprime un mensaje de error en la consola cuando el n�mero ingresado por el usuario no es v�lido para el c�lculo del factorial.
}
