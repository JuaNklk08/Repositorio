#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int DIS, TIE; //eclara dos variables enteras en C llamadas DIS y TIE.
    float BIL; //declara una variable llamada BIL que puede contener valores de punto flotante (números con decimales).
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: "); //imprime un mensaje en la consola, solicitando al usuario que ingrese la distancia entre ciudades y el tiempo de estancia.
    scanf("%d %d", &DIS, &TIE); //los valores ingresados por el usuario se almacenarán en las variables DIS y TIE, respectivamente, y podrás utilizar esos valores en tu programa para realizar cálculos o cualquier otra operación necesaria.
    if ((DIS*2 > 500) && ( TIE > 10)) //es una declaración condicional en C que verifica dos condiciones utilizando el operador lógico "y" (&&).
        BIL = DIS * 2 * 0.19 * 0.8; //calcula el valor de BIL basado en la distancia entre ciudades almacenada en la variable DIS.
    else
        BIL = DIS * 2 * 0.19; //El resultado final se almacena en la variable BIL.
    printf("\n\nCosto del billete: %7.2f", BIL); // imprimirá en la consola el mensaje "Costo del billete:" seguido del valor de BIL
}
