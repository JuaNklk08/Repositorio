#include <stdio.h>
#include <stdlib.h>

void main(void)  //La línea de código void main(void) es la firma de una función en el lenguaje de programación C.
{

    float PAG, SPA = 0;  //PAG es una variable de tipo flotante que se ha declarado, pero no se ha inicializado explícitamente, por lo que su valor inicial será indeterminado. SPA es una variable de tipo flotante que se inicializa explícitamente con el valor 0.
    printf("Ingrese el primer pago:\t");  //Este fragmento de código utiliza la función printf para imprimir en la consola el mensaje "Ingrese el primer pago:".
    scanf("%f", &PAG);  //Este código utiliza la función scanf para leer un valor de tipo flotante ingresado por el usuario desde la entrada estándar (normalmente el teclado) y asignarlo a la variable PAG.
    {
        SPA = SPA + PAG;  //Esta línea de código suma el valor ingresado por el usuario (almacenado en la variable PAG) al valor acumulado en la variable SPA.
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");  //Este printf solicita al usuario que ingrese el siguiente pago. El mensaje indica que para terminar el ingreso de pagos, el usuario debe ingresar -0.
        scanf("%f", &PAG);  //Este scanf leerá un valor de punto flotante ingresado por el usuario y lo asignará a la variable PAG. El programa esperará a que el usuario ingrese el siguiente pago.
    }
    while (PAG);  //El código inicia un bucle while que se ejecutará mientras la variable PAG sea verdadera.
    printf("\nEl total de pagos del mes es: %.2f", SPA);  //Este printf muestra en la consola el total de pagos acumulados durante el mes. El valor se formatea con dos decimales después del punto decimal utilizando %.2f.
}
