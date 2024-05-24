#include <stdio.h>
#include <stdlib.h>

void main(void)  //define la función principal de un programa en C o C++ que no toma parámetros ni devuelve valores.
{
    int OP, T; // se utiliza para declarar dos variables enteras, OP y T, que pueden ser utilizadas en el programa para almacenar y manipular valores numéricos enteros.
    float RES;  // se utiliza para declarar una variable de tipo float llamada RES, que puede ser utilizada en el programa para almacenar y manipular valores numéricos con decimales.
    printf("Ingrese la opcion del calculo y el valor entero: "); //se utiliza para solicitar al usuario que ingrese la opción de cálculo y un valor entero, proporcionándole un mensaje claro y directo en la consola.
    scanf("%d %d", &OP, &T); //se utiliza para permitir que el usuario ingrese dos valores enteros y un valor entero, que se almacenan en las variables OP y T, respectivamente, para su posterior procesamiento en el programa.
    switch(OP)  // se utiliza para realizar selecciones condicionales eficientes basadas en el valor de la variable OP.
    {
        case 1: RES = T / 5;  // dentro de un switch indica que si el valor de OP es 1, se ejecutará la operación T / 5 y el resultado se asignará a la variable RES.
        break;  //e utiliza para salir del bloque de código asociado al caso actual y continuar la ejecución fuera del switch
        case 2: RES = pow(T,T);  // dentro de un switch calcula la potencia de T elevado a sí mismo cuando OP tiene el valor 2, y asigna el resultado a la variable RES.
        /* La funcion pow esta definida en la biblioteca math.h */
        break;
        case 3:
            case 4: RES = 6 * T/2;  //asigna este resultado a la variable RES.
            break;
            default: RES = 1;  //dentro de un switch asigna el valor 1 a la variable RES como un caso predeterminado para manejar situaciones en las que el valor de OP no coincide con ninguno de los casos explícitos definidos en el switch.
            break;
    }
                printf("\nResultado: %7.2f", RES); //e utiliza para mostrar el valor almacenado en la variable RES
    }

