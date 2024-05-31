#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I; //declara una variable llamada I que puede almacenar valores enteros.
    float SAL, NOM; // se declara y se inicializan las variables SAL y NOM.
    NOM = 0;   // se le asigna la variable NOM con el valor 0.
    for (I=1; I<=15; I++)   //se utiliza para iterar desde 1 hasta 15, incrementando I en una unidad en cada iteración.

{
    printf("\Ingrese el salario del profesor%d:\t", I);  // se solicita al usuario que ingrese el salario del profesor.
    scanf("%f", &SAL);  // El programa espera que el usuario ingrese un número, luego lee ese valor y lo almacena en la variable SAL, que luego puede ser utilizada en el programa.
    NOM = NOM + SAL;  //Este comando suma el valor de la variable SAL al valor actual de la variable NOM y luego asigna el resultado nuevamente a NOM.
}
printf("\nEl total de la nomina es: %.2f", NOM); //Con este comando se imprime el valor final de la variable NOM, que contiene la suma de los salarios de los profesores, con un máximo de dos decimales
}
