#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la función principal de un programa en C o C++ que no toma parámetros ni devuelve valores.
{
    float SAL;  // puede ser utilizada en el programa para almacenar y manipular valores numéricos con decimales.
    int NIV;  //e utiliza para declarar una variable de tipo int llamada NIV, que puede ser utilizada en el programa para almacenar y manipular valores numéricos enteros.
    printf("Ingrese el nivel academico del profesor: ");  // se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese el nivel académico del profesor.
    scanf("%d", &NIV);  //e utiliza para leer un valor entero ingresado por el usuario desde la consola y almacenarlo en la variable NIV.
    printf("Ingrese el salario: ");  //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese el salario.
    scanf("%f", &SAL); //se utiliza para leer un valor decimal ingresado por el usuario desde la consola y almacenarlo en la variable SAL.
    switch(NIV)   // se utiliza para realizar una selección condicional múltiple basada en el valor de la variable NIV.
    {
        case 1: SAL = SAL * 1.0035; break;  //dentro de un switch calcula y aplica un aumento del 0.35% al salario del profesor cuando su nivel académico es igual a 1.
        case 2: SAL = SAL * 1.0041; break;
        case 3: SAL = SAL * 1.0048; break;
        case 4: SAL = SAL * 1.0053; break;
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);  // se utiliza para mostrar al usuario el nivel académico del profesor y su nuevo salario después de realizar algún cambio en el salario.
}

