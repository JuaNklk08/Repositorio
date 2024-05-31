#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO; // esta línea de código crea varias variables enteras en C, listas para ser utilizadas en el programa.
float PO1, PO2, PO3, PO4, PO5, PON;  //Esta línea de código en lenguaje C declara varias variables de tipo flotante: PO1, PO2, PO3, PO4, PO5 y PON.
printf("Ingrese el primer voto: ");  //imprime un mensaje en la pantalla solicitando al usuario que ingrese el primer voto.
scanf("%d", &VOT); // se utiliza para leer un valor entero ingresado por el usuario desde la línea de comandos y almacenarlo en una variable llamada VOT.
while (VOT)  // se ejecutará mientras el valor de la variable VOT sea distinto de cero.
{
switch(VOT)  //se utilizará para dirigir la ejecución del programa hacia diferentes bloques de código dependiendo del valor de VOT.
{
case 1: C1++; break; //dentro de una estructura switch en C indica que si el valor de la variable VOT es igual a 1, se ejecutará el bloque de código asociado.
case 2: C2++; break; //dentro de una estructura switch en C indica que si el valor de la variable VOT es igual a 2, se ejecutará el bloque de código asociado.
case 3: C3++; break; //Lo mismo para las siguientes lineas de comando.
case 4: C4++; break;
case 5: C5++; break;
default: NU++; break; //cada vez que VOT tenga un valor diferente de 1 o 2, se incrementará NU en 1 unidad.
}
printf("Ingrese el siguiente voto -0 para terminar-: "); //se utiliza para imprimir un mensaje en la pantalla solicitando al usuario que ingrese el siguiente voto.
scanf("%d", &VOT); //se utiliza para leer un valor entero ingresado por el usuario desde la línea de comandos y almacenarlo en una variable llamada VOT.
}
SVO = C1 + C2 + C3 + C4 + C5 + NU; //asigna a la variable SVO la suma de los valores de las variables C1, C2, C3, C4, C5 y NU.
PO1 = ((float) C1 / SVO) * 100; //realiza un cálculo para determinar el porcentaje de un tipo específico de voto (representado por la variable C1) con respecto al total de votos (SVO).
PO2 = ((float) C2 / SVO) * 100; //Lo mismo para las siguientes lineas de codigos.
PO3 = ((float) C3 / SVO) * 100;
PO4 = ((float) C4 / SVO) * 100;
PO5 = ((float) C5 / SVO) * 100;
PON = ((float) NU / SVO) * 100;
printf("\nTotal de votos: %d", SVO); //después de ejecutar esta línea de código, el programa imprimirá en la consola un mensaje que dice "Total de votos: " seguido del valor actual de la variable SVO.
printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1); //se utiliza para imprimir en la consola la cantidad de votos obtenidos por el candidato 1, así como el porcentaje de votos que representa con respecto al total de votos.
printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
printf("\nCandidato 4: %d votos -- Porcentaje: &5.2f", C4, PO4);
printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
printf("\nNulos:       %d votos -- Porcentaje: %5.2f", NU, PON); //se está utilizando la función printf para imprimir en la consola la cantidad de votos nulos y el porcentaje que representan con respecto al total de votos.
}
