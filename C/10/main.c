#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;  //declara una variable llamada NUM que puede contener valores enteros.
    printf("Ingrese el numero: ");  // imprime un mensaje en la consola, solicitando al usuario que ingrese un n�mero.
    scanf("%d", &NUM);  //se utiliza para leer la entrada del usuario desde la consola
    if (NUM == 0)  // Esta l�nea verifica si el valor almacenado en la variable NUM es igual a cero.
        printf("\nNulo"); //esta l�nea de c�digo imprimir� en la consola el mensaje "Nulo" en una nueva l�nea.
    else  //Se utiliza para manejar el caso en que la condici�n del if no se cumple.
        if (pow (-1, NUM) > 0)  //Esta l�nea verifica si el resultado de elevar -1 a la potencia NUM es mayor que 0.
        printf("\nPar"); //imprime el mensaje "Par" seguido de un salto de l�nea en la consola.
    else
        printf("\nImpar"); //imprime el mensaje "Impar" seguido de un salto de l�nea en la consola.
}
