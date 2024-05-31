#include <stdio.h>
#include <stdlib.h>

void main(void)  //La l�nea de c�digo void main(void) es la firma de una funci�n en el lenguaje de programaci�n C.
{

    float PAG, SPA = 0;  //PAG es una variable de tipo flotante que se ha declarado, pero no se ha inicializado expl�citamente, por lo que su valor inicial ser� indeterminado. SPA es una variable de tipo flotante que se inicializa expl�citamente con el valor 0.
    printf("Ingrese el primer pago:\t");  //Este fragmento de c�digo utiliza la funci�n printf para imprimir en la consola el mensaje "Ingrese el primer pago:".
    scanf("%f", &PAG);  //Este c�digo utiliza la funci�n scanf para leer un valor de tipo flotante ingresado por el usuario desde la entrada est�ndar (normalmente el teclado) y asignarlo a la variable PAG.
    {
        SPA = SPA + PAG;  //Esta l�nea de c�digo suma el valor ingresado por el usuario (almacenado en la variable PAG) al valor acumulado en la variable SPA.
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");  //Este printf solicita al usuario que ingrese el siguiente pago. El mensaje indica que para terminar el ingreso de pagos, el usuario debe ingresar -0.
        scanf("%f", &PAG);  //Este scanf leer� un valor de punto flotante ingresado por el usuario y lo asignar� a la variable PAG. El programa esperar� a que el usuario ingrese el siguiente pago.
    }
    while (PAG);  //El c�digo inicia un bucle while que se ejecutar� mientras la variable PAG sea verdadera.
    printf("\nEl total de pagos del mes es: %.2f", SPA);  //Este printf muestra en la consola el total de pagos acumulados durante el mes. El valor se formatea con dos decimales despu�s del punto decimal utilizando %.2f.
}
