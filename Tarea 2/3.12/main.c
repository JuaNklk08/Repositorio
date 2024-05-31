#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;  // Esta línea de código sirve para declarar una variable llamada "NUM" de tipo entero (int).
    printf("Ingresa el numero para calcular la serie: ");  //e utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese un número para calcular una serie, pero no está completo.
    scanf("%d", &NUM);  //se utiliza para capturar la entrada del usuario y almacenarla en una variable llamada "NUM".
    if (NUM > 0)  //si "NUM" es mayor que cero, se imprimirá "NUM es un numero positivo".
    {
        printf("\nSerie de ULAM\n");  //Este código imprimirá "Serie de ULAM" en la consola cuando se ejecute.
        printf("%d \t", NUM);  //se utiliza para imprimir el valor de la variable NUM en la consola, seguido de un carácter de tabulación (\t).
        while (NUM != 1)  //epresenta una estructura de control de flujo en muchos lenguajes de programación, incluyendo C y C++.
        {
            if (pow(-1, NUM) > 0) //es una estructura condicional en la que se está utilizando la función pow() para evaluar una condición.
                NUM = NUM / 2;  //es una expresión que se utiliza para dividir el valor actual de la variable NUM por 2 y luego asignar el resultado de esa división nuevamente a la variable NUM.
            else
                NUM = NUM / 3 + 1;  //La línea de código NUM = NUM / 3 + 1; es una expresión que se utiliza para realizar dos operaciones en la variable NUM
            printf("%d \t", NUM);  //es utilizada para imprimir el valor actual de la variable NUM seguido de un carácter de tabulación en la consola.
        }
    }
    else
        printf("\n NUM debe ser un entero positivo");  //n mensaje en la consola indicando que el valor de la variable NUM debe ser un entero positivo.
}
