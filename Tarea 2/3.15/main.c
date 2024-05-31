#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int I = 1, B = 0, C; //Esta línea de código define tres variables enteras I, B y C, donde I se inicializa a 1, B se inicializa a 0 y C no tiene un valor inicial explícito.
double RES;  // declara una variable llamada RES de tipo double, que es un tipo de dato para representar números en coma flotante de doble precisión en C.
RES = 4.0 / I;  //asigna a la variable RES el resultado de dividir el número en coma flotante 4.0 por el valor actual de la variable entera I.
C = 1;  //asigna el valor de 1 a la variable C.
while ((fabs (3.1415 - RES)) > 0.0005) //este bucle while se ejecutará mientras la diferencia entre la aproximación almacenada en RES y 3.1415 sea mayor que 0.0005
{
I += 2 ; //e utiliza para incrementar el valor de la variable I en 2 unidades.
if (B) //se ejecutará si el valor de la variable B es verdadero.
{
RES += (double) (4.0 / I); // realiza una serie de operaciones matemáticas y de asignación en la variable RES.
B = 0; //asigna el valor 0 a la variable B.
}
else
{
RES -= (double) (4.0 / I); //realiza una operación de resta y asignación en la variable RES.
B = 1; //asigna el valor 1 a la variable B.
}
C++;
}
printf("\nNumero de terminos:%d", C);  // imprimir en la consola el valor de la variable C.
}
