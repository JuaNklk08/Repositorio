#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float RES;  // declara una variable llamada RES que puede contener valores
    int R, T, Q;  // declara tres variables enteras en C llamadas R, T y Q. Puedes utilizar estos nombres para referirte a las variables en tu código y almacenar valores en ellas.
    printf("Ingrese los valores de R, T y Q: ");  // es una instrucción en C que imprime un mensaje en la consola, solicitando al usuario que ingrese los valores de las variables R, T y Q.
    scanf("%d %d %d", &R, &T, &Q);  //es una instrucción en C que imprime un mensaje en la consola, solicitando al usuario que ingrese los valores de las variables R, T y Q.
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2); //Esta linea de comando calcula un resultado y lo asigna a la variable RES.
    if (RES < 820)  // Esta línea verifica si el valor almacenado en la variable RES es menor que 820.
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);  //esta línea de código imprimirá en la consola los valores actuales de R, T y Q, en el formato especificado
}
