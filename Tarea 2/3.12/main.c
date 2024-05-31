#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;  // Esta l�nea de c�digo sirve para declarar una variable llamada "NUM" de tipo entero (int).
    printf("Ingresa el numero para calcular la serie: ");  //e utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese un n�mero para calcular una serie, pero no est� completo.
    scanf("%d", &NUM);  //se utiliza para capturar la entrada del usuario y almacenarla en una variable llamada "NUM".
    if (NUM > 0)  //si "NUM" es mayor que cero, se imprimir� "NUM es un numero positivo".
    {
        printf("\nSerie de ULAM\n");  //Este c�digo imprimir� "Serie de ULAM" en la consola cuando se ejecute.
        printf("%d \t", NUM);  //se utiliza para imprimir el valor de la variable NUM en la consola, seguido de un car�cter de tabulaci�n (\t).
        while (NUM != 1)  //epresenta una estructura de control de flujo en muchos lenguajes de programaci�n, incluyendo C y C++.
        {
            if (pow(-1, NUM) > 0) //es una estructura condicional en la que se est� utilizando la funci�n pow() para evaluar una condici�n.
                NUM = NUM / 2;  //es una expresi�n que se utiliza para dividir el valor actual de la variable NUM por 2 y luego asignar el resultado de esa divisi�n nuevamente a la variable NUM.
            else
                NUM = NUM / 3 + 1;  //La l�nea de c�digo NUM = NUM / 3 + 1; es una expresi�n que se utiliza para realizar dos operaciones en la variable NUM
            printf("%d \t", NUM);  //es utilizada para imprimir el valor actual de la variable NUM seguido de un car�cter de tabulaci�n en la consola.
        }
    }
    else
        printf("\n NUM debe ser un entero positivo");  //n mensaje en la consola indicando que el valor de la variable NUM debe ser un entero positivo.
}
