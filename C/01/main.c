#include <stdio.h>
#include <stdlib.h>

void main(void)  //Este comando define la funci�n principal de un programa en C o C++ que no toma par�metros ni devuelve valores.
{
    float PRO;   //Este comando declara una variable "PRO" de tipo "float" que se puede usar para almacenar, manipular numeros decimales en un programa en C o C++.
    scanf("%f", &PRO); //Es utilizada para leer un n�mero de punto flotante introducido por el usuario y almacenarlo en la variable PRO en un programa en C.
    if (PRO >= 6)  // Esta linea de codigo esta evaluando el valor de PRO es mayor o igual a 6 y ejecuta diferentes bloques de c�digo basados en el resultado de esa evaluaci�n
    printf("\nAprobado"); //Esta linea se utiliza para poner el mensaje "Aprobado" en la consola
}
