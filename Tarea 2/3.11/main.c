#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;  //variables pueden ser utilizadas para almacenar cualquier tipo de datos que necesites en tu programa.
    float CAL;  //Esto declara una variable llamada CAL que puede almacenar valores de punto flotante, es decir, números con decimales.
    printf("Ingresa la calificacion del alumno: ");  //Esta línea de código imprimirá "Ingresa la calificacion del alumno: "
    scanf("%f", &CAL);  // esta línea de código se ejecuta, el programa espera a que el usuario ingrese un número en formato de punto flotante desde la consola.
    while (CAL != -1)  //mientras el valor almacenado en CAL no sea -1, el bloque de código dentro del bucle while se ejecutará una y otra vez.
    {
        if (CAL < 4)  //se utiliza para verificar si el valor almacenado en la variable CAL es menor que 4.
            R1++;  //se ejecuta esta línea de código, el valor de R1 se incrementa en 1.
        else
            if (CAL < 6) //se utiliza para verificar si el valor almacenado en la variable CAL es menor que 6.
            R2++;  //se ejecuta esta línea de código, el valor de R2 se incrementa en 1.
        else
            if (CAL < 8) //se utiliza para verificar si el valor almacenado en la variable CAL es menor que 8.
            R3++;  //se ejecuta esta línea de código, el valor de R3 se incrementa en 1.
        else
            if (CAL < 9)  //se utiliza para verificar si el valor almacenado en la variable CAL es menor que 9.
            R4++; //se ejecuta esta línea de código, el valor de R4 se incrementa en 1.
        else
            R5++;  //se ejecuta esta línea de código, el valor de R5 se incrementa en 1.
        printf("Ingresa la calificacion del alumno: ");  //Esta línea de código imprimirá "Ingresa la calificacion del alumno: "
        scanf("%f", &CAL); //esta línea de código se ejecuta, el programa espera a que el usuario ingrese un número en formato de punto flotante desde la consola.
    }
    printf("\n0..3.99 = %d", R1);  //esta línea de código imprimirá un mensaje en la consola que indica "0..3.99 = " seguido del valor actual de la variable R1.
    printf("\n4..5.99 = %d", R2);  //Lo mismo con las siguientes lineas de codigo.
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10   = %d", R5);
}
