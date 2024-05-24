#include <stdio.h>
#include <stdlib.h>

void main(void) //define la función principal (main) en un programa en C.
{
    float X; // declara una variable llamada X que puede contener valores.
    int Y; //declara una variable llamada Y que puede contener valores enteros.
    printf("Ingrese el valor de Y: ");  //imprime un mensaje en la consola, solicitando al usuario que ingrese un valor para la variable Y.
    scanf("%d", &Y); //utilizará la función scanf para leer un valor entero ingresado por el usuario desde la consola y lo asignará a la variable Y.
    if (Y < 0 || Y > 50)  //es una declaración condicional en C que verifica si el valor almacenado en la variable Y es menor que 0 o mayor que 50.
        X = 0; //asigna el valor 0 a la variable X.
    else  //se utiliza para manejar el caso en que la condición del if no se cumple
        if (Y <= 10)  //verifica si el valor almacenado en la variable Y es menor o igual a 10.
        X = 4 / Y - Y; //calcula el valor de la variable X basado en el valor de la variable Y.
    else
        if (Y <= 25) //verifica si el valor almacenado en la variable Y es menor o igual a 25.
        X = pow(Y, 3) - 12;
    else
        X = pow(Y, 2) + pow(Y, 3) - 18; // calcula el valor de la variable X utilizando la función pow para elevar Y a la potencia 2 y a la potencia 3.
    printf("\n\nY = %d\tX = %8.2f", Y, X); // imprime los valores de las variables Y y X en la consola.
}
