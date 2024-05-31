#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  //las variables SPA, SIM y CIM se inicializan con el valor 0.
    printf("Ingrese el numero de datos que se van a procesar:\t");  //esta l�nea de c�digo se ejecuta, el mensaje "Ingrese el numero de datos que se van a procesar:"
    scanf("%d", &N);  //esta l�nea de c�digo se ejecuta, el programa espera a que el usuario ingrese un n�mero entero desde la consola.
    if (N >0)  //para verificar si el valor de la variable "N" es mayor que cero.
    {
        for (I=1; I <= N; I++)  //se ejecutar� "N" veces, comenzando desde 1 y terminando en "N"
        {
            printf("\nIngrese el numero %d: ", I);   //esta l�nea de c�digo se encuentra dentro de un bucle, como imprimir� un mensaje similar a "Ingrese el n�mero:"
            scanf ("%d", &NUM);  //esta l�nea de c�digo se ejecuta, el programa espera a que el usuario ingrese un n�mero entero desde la consola.
            if (NUM)  //esta l�nea de c�digo se utiliza para controlar el flujo del programa basado en si NUM tiene un valor distinto de cero.
                if (pow(-1, NUM) > 0)  //esta l�nea podr�a estar comprobando si NUM es un n�mero par (ya que elevar -1 a cualquier potencia positiva siempre resulta en 1 para potencias pares y -1 para potencias impares).
                SPA = SPA + NUM;  //esta l�nea de c�digo es com�nmente utilizada para acumular valores en SPA, donde el valor de NUM se suma al valor actual de SPA, y luego SPA se actualiza con el nuevo valor resultante.
            else
            {
                SIM = SIM + NUM;  //esta l�nea de c�digo se utiliza para acumular valores en la variable SIM.
                CIM++;  //se ejecuta esta l�nea de c�digo, el valor de CIM se incrementa en 1. Esencialmente, es una forma abreviada de escribir CIM = CIM + 1;.
            }
        }
        printf("\n La suma de los numeros pares es: %d", SPA);  // esta l�nea de c�digo imprimir� un mensaje en la consola que indica la suma de los n�meros pares, seguido por el valor de la variable SPA.
        printf("\n El promedio de numeros impares es: %5.2f", (float)(SIM / CIM)); //esta l�nea de c�digo imprimir� un mensaje en la consola que indica el promedio de los n�meros impares, seguido por el valor del promedio calculado.
    }
    else
        printf("\n El valor de N es incorrecto");  //Esta l�nea de c�digo se utilizar�a t�picamente dentro de una estructura condicional (if) para informar al usuario que el valor de N no es aceptable seg�n ciertas condiciones en el programa.
}
