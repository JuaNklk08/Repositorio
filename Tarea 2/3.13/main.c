#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, PRI = 0, SEG = 1, SIG; //esta línea de código crea cuatro variables enteras en C: I, PRI, SEG, y SIG, listas para ser utilizadas en el programa.
    printf("\t %d \t %d", PRI, SEG); //es una instrucción en C que se utiliza para imprimir los valores de las variables PRI y SEG en la consola, formateados de cierta manera.
    for (I = 3; I<= 50; I++) //esta línea de código establece un bucle que iterará desde I igual a 3 hasta que I sea menor o igual a 50, incrementando I en 1 en cada iteración.
    {
        SIG = PRI + SEG; //asigna a la variable SIG la suma de los valores actuales de las variables PRI y SEG.
        PRI = SEG;  //asigna el valor de la variable SEG a la variable PRI.
        SEG = SIG;  //asigna el valor de la variable SIG a la variable SEG.
        printf("\t %d", SIG);  //se utiliza para imprimir el valor actual de la variable SIG en la consola.
    }
}
