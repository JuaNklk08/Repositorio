#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int TRA, EDA, DIA;  //declara tres variables enteras en C llamadas TRA, EDA y DIA.
    float COS;  //declara una variable llamada COS que puede contener valores de punto flotante (números con decimales).
    printf("Ingrese tipo de tratamiento, edad y dias: ");  //imprime un mensaje en la consola, solicitando al usuario que ingrese el tipo de tratamiento, la edad y los días.
    scanf("%d %d %d", &TRA, &EDA, &DIA); //utilizará la función scanf para leer tres valores enteros ingresados por el usuario desde la consola y los asignará a las variables TRA, EDA y DIA.
    switch(TRA)  //utiliza para realizar una selección de múltiples casos basada en el valor de una expresión o variable.
    {
        case 1: COS = DIA * 2800; break; //si el valor de TRA es igual a 1, se calculará un valor para COS multiplicando el valor de DIA por 2800, y luego se saldrá del switch.
        case 2: COS = DIA * 1950; break;
        case 3: COS = DIA * 2500; break;
        case 4: COS = DIA * 1150; break;
        default: COS = -1; break;  //se ejecuta cuando ninguno de los casos anteriores coincide con el valor de la expresión evaluada.
    }
    if (COS != -1) // verifica si el valor almacenado en la variable COS es diferente de -1.
    {
        if (EDA >= 60)  // verifica si el valor almacenado en la variable EDA es mayor o igual a 60.
            COS = COS * 0.75; //multiplica el valor actual de la variable COS por 0.75 y asigna el resultado nuevamente a la variable COS.
        else
            if (EDA <= 25) //verifica si el valor almacenado en la variable EDA es menor o igual a 25.
            COS = COS * 0.85; // multiplica el valor actual de la variable COS por 0.85 y asigna el resultado nuevamente a la variable COS.
        printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", TRA, DIA, COS);  // es una instrucción en C que imprime los valores de las variables TRA, DIA y COS en la consola.
    }
    else
        printf("\nLa clave del tratamiento es incorrecto"); //Una linea de comando que envia un mensaje al usuario de que la clave del tratamiento es incorrecto.
}
