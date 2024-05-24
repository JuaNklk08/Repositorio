#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la funci�n principal de un programa en C o C++ que no toma par�metros ni devuelve valores.
{
    int MAT, CAR, SEM;  // se utiliza para declarar tres variables de tipo int llamadas MAT, CAR y SEM, respectivamente.
    float PRO;  //se utiliza para declarar una variable llamada PRO de tipo flotante en C (o C++), que puede utilizarse para almacenar y manipular valores num�ricos con decimales seg�n sea necesario en el programa.
    printf("Ingrese matricula: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese la matr�cula.
    scanf("%d", &MAT);  //se utiliza para leer un valor entero ingresado por el usuario desde la consola y almacenarlo en la variable MAT.
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese un n�mero que represente la carrera deseada. Esto es �til para guiar al usuario durante la interacci�n con el programa.
    scanf("%d", &CAR);  // se utiliza para leer un valor entero ingresado por el usuario desde la consola y almacenarlo en la variable CAR.
    printf("Ingrese semestre: ");  // se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese el n�mero correspondiente al semestre.
    scanf("%d", &SEM);  // se utiliza para leer un valor entero ingresado por el usuario desde la consola y almacenarlo en la variable SEM.
    printf("Ingrese promedio: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese el promedio.
    scanf("%f", &PRO); // se utiliza para leer un valor de punto flotante ingresado por el usuario desde la consola y almacenarlo en la variable PRO.
    switch(CAR)  //se utiliza para tomar decisiones basadas en el valor de una variable en C. En este caso, se evaluar� el valor de CAR y se ejecutar� el bloque de c�digo correspondiente al caso que coincida con ese valor.
    {
        case 1: if (SEM >= 6 && PRO >= 8.5)  //Si la condici�n se cumple, se ejecutar� el primer bloque de c�digo. De lo contrario, se ejecutar� el segundo bloque de c�digo dentro del caso 1.
                    printf("\n%d %d %5.2f", MAT, CAR, PRO);  //esta l�nea de c�digo imprimir� en la consola tres valores: MAT, CAR, y PRO, formateados seg�n el especificador de formato proporcionado.
                    break;  //la instrucci�n break se ejecutar� y el bucle se detendr�, saltando a la l�nea que imprime "Despu�s del bucle".
        case 2: if (SEM >= 5 && PRO >= 9.0)
                    printf("\n%d %d %5.2f", MAT, CAR, PRO);
                    break;
        case 3: if (SEM >= 6 && PRO >= 8.8)
                    printf("\n%d %d %5.2f", MAT, CAR, PRO);
                    break;
        case 4: if (SEM >= 7 && PRO >= 9.0)
                    printf("\n%d %d %5.2f", MAT, CAR, PRO);
                    break;
                    default: printf("\n Error en la carrera");
                    break;
    }
}
