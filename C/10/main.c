#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;  //declara una variable llamada NUM que puede contener valores enteros.
    printf("Ingrese el numero: ");  // imprime un mensaje en la consola, solicitando al usuario que ingrese un número.
    scanf("%d", &NUM);  //se utiliza para leer la entrada del usuario desde la consola
    if (NUM == 0)  // Esta línea verifica si el valor almacenado en la variable NUM es igual a cero.
        printf("\nNulo"); //esta línea de código imprimirá en la consola el mensaje "Nulo" en una nueva línea.
    else  //Se utiliza para manejar el caso en que la condición del if no se cumple.
        if (pow (-1, NUM) > 0)  //Esta línea verifica si el resultado de elevar -1 a la potencia NUM es mayor que 0.
        printf("\nPar"); //imprime el mensaje "Par" seguido de un salto de línea en la consola.
    else
        printf("\nImpar"); //imprime el mensaje "Impar" seguido de un salto de línea en la consola.
}
