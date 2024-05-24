#include <stdio.h>
#include <stdlib.h>

void main(void) //define la función principal de un programa en C o C++ que no toma parámetros ni devuelve valores.
{
    float PRO; //declara una variable PRO de tipo float que se puede usar para almacenar y manipular números decimales en un programa en C o C++.
    printf("Ingrese el promedio del alumno: ");  // se utiliza para solicitar al usuario que ingrese el promedio del alumno
    scanf("%f", &PRO);  // se utiliza para permitir al usuario ingresar un número decimal, que se almacena en la variable PRO para su posterior uso en el programa.
    if (PRO >= 6.0) //e utiliza para tomar decisiones basadas en el valor de la variable PRO. Si el promedio es mayor o igual a 6.0, se considera que el alumno ha aprobado; de lo contrario, se considera que ha reprobado.
        printf("\nAprobado"); //utiliza para imprimir el mensaje "Aprobado" en la consola
    else
        printf("\nReprobado"); //utiliza para imprimir el mensaje "Reprobado" en la consola
}
