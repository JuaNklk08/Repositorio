#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  //las variables SPA, SIM y CIM se inicializan con el valor 0.
    printf("Ingrese el numero de datos que se van a procesar:\t");  //esta línea de código se ejecuta, el mensaje "Ingrese el numero de datos que se van a procesar:"
    scanf("%d", &N);  //esta línea de código se ejecuta, el programa espera a que el usuario ingrese un número entero desde la consola.
    if (N >0)  //para verificar si el valor de la variable "N" es mayor que cero.
    {
        for (I=1; I <= N; I++)  //se ejecutará "N" veces, comenzando desde 1 y terminando en "N"
        {
            printf("\nIngrese el numero %d: ", I);   //esta línea de código se encuentra dentro de un bucle, como imprimirá un mensaje similar a "Ingrese el número:"
            scanf ("%d", &NUM);  //esta línea de código se ejecuta, el programa espera a que el usuario ingrese un número entero desde la consola.
            if (NUM)  //esta línea de código se utiliza para controlar el flujo del programa basado en si NUM tiene un valor distinto de cero.
                if (pow(-1, NUM) > 0)  //esta línea podría estar comprobando si NUM es un número par (ya que elevar -1 a cualquier potencia positiva siempre resulta en 1 para potencias pares y -1 para potencias impares).
                SPA = SPA + NUM;  //esta línea de código es comúnmente utilizada para acumular valores en SPA, donde el valor de NUM se suma al valor actual de SPA, y luego SPA se actualiza con el nuevo valor resultante.
            else
            {
                SIM = SIM + NUM;  //esta línea de código se utiliza para acumular valores en la variable SIM.
                CIM++;  //se ejecuta esta línea de código, el valor de CIM se incrementa en 1. Esencialmente, es una forma abreviada de escribir CIM = CIM + 1;.
            }
        }
        printf("\n La suma de los numeros pares es: %d", SPA);  // esta línea de código imprimirá un mensaje en la consola que indica la suma de los números pares, seguido por el valor de la variable SPA.
        printf("\n El promedio de numeros impares es: %5.2f", (float)(SIM / CIM)); //esta línea de código imprimirá un mensaje en la consola que indica el promedio de los números impares, seguido por el valor del promedio calculado.
    }
    else
        printf("\n El valor de N es incorrecto");  //Esta línea de código se utilizaría típicamente dentro de una estructura condicional (if) para informar al usuario que el valor de N no es aceptable según ciertas condiciones en el programa.
}
