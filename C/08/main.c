#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la función principal de un programa en C o C++ que no toma parámetros ni devuelve valores.
{
    int MAT, CAR, SEM;  // se utiliza para declarar tres variables de tipo int llamadas MAT, CAR y SEM, respectivamente.
    float PRO;  //se utiliza para declarar una variable llamada PRO de tipo flotante en C (o C++), que puede utilizarse para almacenar y manipular valores numéricos con decimales según sea necesario en el programa.
    printf("Ingrese matricula: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese la matrícula.
    scanf("%d", &MAT);  //se utiliza para leer un valor entero ingresado por el usuario desde la consola y almacenarlo en la variable MAT.
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese un número que represente la carrera deseada. Esto es útil para guiar al usuario durante la interacción con el programa.
    scanf("%d", &CAR);  // se utiliza para leer un valor entero ingresado por el usuario desde la consola y almacenarlo en la variable CAR.
    printf("Ingrese semestre: ");  // se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese el número correspondiente al semestre.
    scanf("%d", &SEM);  // se utiliza para leer un valor entero ingresado por el usuario desde la consola y almacenarlo en la variable SEM.
    printf("Ingrese promedio: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese el promedio.
    scanf("%f", &PRO); // se utiliza para leer un valor de punto flotante ingresado por el usuario desde la consola y almacenarlo en la variable PRO.
    switch(CAR)  //se utiliza para tomar decisiones basadas en el valor de una variable en C. En este caso, se evaluará el valor de CAR y se ejecutará el bloque de código correspondiente al caso que coincida con ese valor.
    {
        case 1: if (SEM >= 6 && PRO >= 8.5)  //Si la condición se cumple, se ejecutará el primer bloque de código. De lo contrario, se ejecutará el segundo bloque de código dentro del caso 1.
                    printf("\n%d %d %5.2f", MAT, CAR, PRO);  //esta línea de código imprimirá en la consola tres valores: MAT, CAR, y PRO, formateados según el especificador de formato proporcionado.
                    break;  //la instrucción break se ejecutará y el bucle se detendrá, saltando a la línea que imprime "Después del bucle".
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
