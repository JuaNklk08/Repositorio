#include <stdio.h>
#include <stdlib.h>

void main(void) // Esta l�nea de c�digo se utiliza para definir una funci�n principal en un programa.
{
    int CLA, CAT, ANT, RES;  // est� declarando cuatro variables enteras en un lenguaje de programaci�n como C o C++.
    printf("\nIngrese la clave, categoria y antiguedad del trabajador: "); //Se le solicita al usuario que ingresa la clave, categoria y antiguedad del trabajador.
    scanf("%d %d %d", &CLA, &CAT, &ANT);  // Esta funci�n se utiliza para leer datos de entrada desde la consola (o desde otro flujo de entrada) y almacenarlos en variables espec�ficas.
    switch(CAT) //instrucci�n de entrada en C o C++.
    {
    case 3:
    case 4: if (ANT >= 5)  //se utiliza para tomar decisiones basadas en el valor de una variable o expresi�n.
    RES = 1;  //asigna el valor 1 a la variable RES.
    else
        RES = 0; //asigna el valor 0 a la variable RES.
        break;
    case 2: if (ANT >= 7) ////se utiliza para tomar decisiones basadas en el valor de una variable o expresi�n.
    RES = 1;
    else
        RES = 0;
    break;
    default: RES = 0;  //En este caso, si variable no coincide con ninguno de los casos especificados  se asigna 0.
    break;
    }
    if (RES)
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA); //Se manda un mensaje al usuario.
    else
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", CLA);
}
