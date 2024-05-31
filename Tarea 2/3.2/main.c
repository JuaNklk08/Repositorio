#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N, NUM, SUM;  //declara cuatro variables enteras: I, N, NUM y SUM.
    SUM = 0;  //inicializando la variable SUM con el valor 0.
    printf("Ingrese el numero de datos:\t");  //Este fragmento de c�digo est� solicitando al usuario que ingrese el n�mero de datos.
    scanf("%d", &N); //un valor entero ingresado por el usuario desde la consola y asignarlo a la variable N.
    for (I=1; I<=N; I++)  //se inicializa una variable I en 1 y se repite hasta que I sea menor o igual que N.
    {
        printf("Ingrese el dato numero %d:\t", I); // Imprime un mensaje que solicita al usuario que ingrese un dato espec�fico, indicado por el valor de I en ese momento.
        scanf("%d", &NUM);  //Este fragmento de c�digo utiliza la funci�n scanf para leer un valor entero ingresado por el usuario desde la consola y asignarlo a la variable NUM.
        if (NUM > 0)  //eval�a si el valor ingresado por el usuario y almacenado en la variable NUM es mayor que cero.
            SUM = SUM + NUM; //SUM acumula la suma de todos los valores ingresados por el usuario.
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM); //Este comando imprime el resultado de la suma de los n�meros positivos ingresados por el usuario.
}
