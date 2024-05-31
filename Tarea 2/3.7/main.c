#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N;  //se declaran dos variables enteras: I y N.
    float LAN, SLA = 0; //LAN parece ser una variable que podr�a estar relacionada con "lenguaje" o "lanzamiento". SLA podr�a representar "salario" o "suma de lenguajes", dependiendo del contexto.
    do
    {
        printf("Ingrese el numero de lanzamientos:\t");  //Este c�digo utiliza la funci�n printf para imprimir un mensaje en la consola, solicitando al usuario que ingrese el n�mero de lanzamientos.
        scanf("%d", &N);  //Esta l�nea de c�digo utiliza la funci�n scanf para leer un valor entero ingresado por el usuario desde la consola y lo almacena en la variable N.
    }
    while (N < 1 || N > 11);  //Este fragmento de c�digo crea un bucle while que se ejecutar� mientras la condici�n especificada sea verdadera.
    for (I=1; I<=N; I++)  //este bucle for se ejecutar� desde I=1 hasta que I alcance el valor almacenado en N, increment�ndose en uno en cada iteraci�n.
    {
        printf("\nIngrese el lanzamiento %d: ", I);  //esta l�nea de c�digo imprime un mensaje en la consola solicitando al usuario que ingrese el valor para un lanzamiento espec�fico
        scanf("%f", &LAN);  //Esta l�nea de c�digo utiliza la funci�n scanf para leer un valor de punto flotante (el lanzamiento ingresado por el usuario) desde la consola y lo almacena en la variable LAN.
        SLA = SLA + LAN;  //Esta l�nea de c�digo suma el valor actual de la variable LAN al valor actual de la variable SLA y luego asigna el resultado de la suma nuevamente a la variable SLA.
    }
    SLA = SLA / N; //Esta l�nea de c�digo calcula el promedio de los lanzamientos ingresados por el usuario.
    printf("nEl promedio de lanzamientos es: %.2f", SLA);  //imprime en la consola el promedio de los lanzamientos ingresados por el usuario.
}
