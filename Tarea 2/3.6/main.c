#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I = 0;  //declara una variable entera llamada I e inicializa su valor en 0.
    float SAL, PRO, NOM = 0;  //Esta línea de código declara tres variables de tipo flotante: SAL, PRO y NOM, y las inicializa todas con el valor 0.
    printf("Ingrese el salario del profesor:\t");  //Este código es una llamada a la función printf, que se utiliza para imprimir un mensaje en la consola. El mensaje que se imprimirá es "Ingrese el salario del profesor:"
    scanf("%f", &SAL);  //Este fragmento de código utiliza la función scanf para leer un valor de punto flotante (número con decimales) ingresado por el usuario desde la consola y almacenarlo en la variable SAL.
    do
    {
        NOM = NOM + SAL;  //Esta línea de código suma el valor actual de la variable SAL al valor actual de la variable NOM y luego asigna el resultado a la variable NOM.
        I = I + 1;  //Esta línea de código incrementa el valor de la variable I en uno cada vez que se ejecuta. Es una forma común de llevar un contador en un bucle o en una secuencia de acciones repetitivas.
        printf("Ingrese el salario del profesor -0 para terminar- :\t");  //Esta línea de código imprime un mensaje en la consola solicitando al usuario que ingrese el salario de un profesor. La parte "-0 para terminar-"
        scanf("%f", &SAL);  //Esta línea de código utiliza la función scanf para leer un valor de punto flotante (salario del profesor) ingresado por el usuario desde la consola y lo almacena en la variable SAL.
    }
    while (SAL);  //La instrucción while (SAL); crea un bucle while que se ejecutará mientras la variable SAL tenga un valor distinto de cero.
    PRO = NOM / I;  //Esta línea de código calcula el promedio de los salarios ingresados por el usuario hasta el momento.
    printf("\nNomina: %.2f \t promedio del salarios: %.2f", NOM, PRO);  //Este fragmento de código utiliza la función printf para imprimir en la consola dos valores: el total de la nómina (NOM) y el promedio de los salarios (PRO).
}
