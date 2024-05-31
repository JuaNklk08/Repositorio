#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;  //Esta variable puede ser utilizada para almacenar cualquier número entero que necesites en tu programa.
    long CUA, SUC = 0;  // Es una variable de tipo long, lo que significa que puede almacenar números enteros largos.  La variable de tipo long que se inicializa con el valor 0.
    printf("\nIngrese un numero entero -0 para terminar-:\t");  // imprime un mensaje en la consola solicitando al usuario que ingrese un número entero. El mensaje es "Ingrese un numero entero -0 para terminar-:"
    scanf("%d", &NUM);  //Este fragmento de código utiliza la función scanf para leer un valor entero ingresado por el usuario desde la consola y asignarlo a la variable NUM.
    while (NUM) //Este fragmento de código muestra un bucle while que se ejecutará mientras el valor de la variable NUM sea evaluado como verdadero (es decir, mientras no sea igual a cero).
    {
        CUA = pow (NUM, 2);  // calcula el cuadrado del valor almacenado en la variable NUM y lo asigna a la variable CUA.
        printf("%d al cubo es %ld", NUM, CUA);  // imprime un mensaje en la consola mostrando el número ingresado por el usuario y su correspondiente valor al cuadrado.
        SUC = SUC + CUA;  //Este fragmento de código suma el valor de CUA al valor actual de SUC y luego almacena el resultado de esa suma de nuevo en la variable SUC.
        printf("\nIngrese un numero entero -0 para terminar-:\t");  //imprime un mensaje en la consola solicitando al usuario que ingrese un número entero. El mensaje es "Ingrese un numero entero -0 para terminar-:"
        scanf("%d", &NUM);  //Este fragmento de código utiliza la función scanf para leer un valor entero ingresado por el usuario desde la consola y asignarlo a la variable NUM.
    }
    printf("\nLa suma de los cuadrados es %ld", SUC);  // imprime el resultado acumulado de los cuadrados de los números ingresados por el usuario.
}
