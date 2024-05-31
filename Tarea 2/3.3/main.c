#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PAG, SPA;  //Esto declara dos variables en punto flotante (float) llamadas PAG y SPA.
    SPA = 0;  //Este fragmento de código asigna el valor 0 a la variable SPA.
    printf("Ingrese el primer pago:\t");  // imprime un mensaje en la consola solicitando al usuario que ingrese el primer pago. El mensaje es simplemente "Ingrese el primer pago:"
    scanf("%f", &PAG); //Este fragmento de código utiliza la función scanf para leer un valor float ingresado por el usuario desde la consola y asignarlo a la variable PAG.
    while (PAG)   //Este fragmento de código es una estructura de bucle while que se ejecutará mientras el valor de la variable PAG sea evaluado como verdadero (es decir, mientras no sea igual a cero).
    {
        SPA = SPA + PAG;  //Este fragmento de código suma el valor almacenado en la variable PAG al valor actual de la variable SPA y luego almacena el resultado de esa suma de nuevo en la variable SPA.
        printf("ingrese el siguiente pago:\t ");  // imprime un mensaje en la consola solicitando al usuario que ingrese el siguiente pago. El mensaje es "ingrese el siguiente pago:"
        scanf("%f", &PAG);  //Este fragmento de código utiliza la función scanf para leer un valor en punto flotante (float) ingresado por el usuario desde la consola y asignarlo a la variable PAG.
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);   //imprime el resultado acumulado de los pagos ingresados por el usuario durante el mes.
}
