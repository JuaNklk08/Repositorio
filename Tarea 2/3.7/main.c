#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N;  //se declaran dos variables enteras: I y N.
    float LAN, SLA = 0; //LAN parece ser una variable que podría estar relacionada con "lenguaje" o "lanzamiento". SLA podría representar "salario" o "suma de lenguajes", dependiendo del contexto.
    do
    {
        printf("Ingrese el numero de lanzamientos:\t");  //Este código utiliza la función printf para imprimir un mensaje en la consola, solicitando al usuario que ingrese el número de lanzamientos.
        scanf("%d", &N);  //Esta línea de código utiliza la función scanf para leer un valor entero ingresado por el usuario desde la consola y lo almacena en la variable N.
    }
    while (N < 1 || N > 11);  //Este fragmento de código crea un bucle while que se ejecutará mientras la condición especificada sea verdadera.
    for (I=1; I<=N; I++)  //este bucle for se ejecutará desde I=1 hasta que I alcance el valor almacenado en N, incrementándose en uno en cada iteración.
    {
        printf("\nIngrese el lanzamiento %d: ", I);  //esta línea de código imprime un mensaje en la consola solicitando al usuario que ingrese el valor para un lanzamiento específico
        scanf("%f", &LAN);  //Esta línea de código utiliza la función scanf para leer un valor de punto flotante (el lanzamiento ingresado por el usuario) desde la consola y lo almacena en la variable LAN.
        SLA = SLA + LAN;  //Esta línea de código suma el valor actual de la variable LAN al valor actual de la variable SLA y luego asigna el resultado de la suma nuevamente a la variable SLA.
    }
    SLA = SLA / N; //Esta línea de código calcula el promedio de los lanzamientos ingresados por el usuario.
    printf("nEl promedio de lanzamientos es: %.2f", SLA);  //imprime en la consola el promedio de los lanzamientos ingresados por el usuario.
}
