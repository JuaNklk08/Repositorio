#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int clave;
char nombre[15];
float precio;
int existencia;
// estas líneas de código sirven para declarar variables que pueden ser utilizadas para almacenar diferentes tipos de datos en un programa en C/C++. La elección del tipo de variable (int, char, float) depende del tipo de datos que se espera almacenar y manipular en el programa. Cada una de estas variables es una reserva de memoria con un nombre específico (clave, nombre, precio, existencia) que se puede utilizar para almacenar y manipular datos durante la ejecución del programa.
} producto;
void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);
void main(void)
//estas líneas de código definen los prototipos de funciones que probablemente se utilizan para gestionar un inventario de productos en un programa escrito en C, donde main actúa como la función principal que orquesta la ejecución del programa.
{
producto INV[100]; //define un arreglo llamado INV que puede contener hasta 100 elementos del tipo producto.
int TAM, OPE; // define dos variables enteras: TAM y OPE.
do
{
printf("Ingrese el número de productos: ");
scanf("%d", &TAM); //es una instrucción de entrada que permite al usuario ingresar un valor entero desde la entrada estándar (generalmente el teclado) y almacenarlo en la variable TAM.
}
while (TAM > 100 | | TAM < 1);
Lectura(INV, TAM);
printf("\nIngrese operación a realizar. \n\t\t1 – Ventas \n\t\t 2 – Reabastecimiento \n\t\t - Nuevos Productos \n\t\t 4 – Inventario \n\t\t 0 - Salir: ");
scanf("%d", &OPE);
while (OPE)
    // estas líneas de código forman parte de un programa que maneja un inventario de productos y permite al usuario realizar diversas operaciones como ventas, reabastecimiento, agregar nuevos productos y consultar el inventario. Los bucles while aseguran que las condiciones y las entradas del usuario se manejen correctamente durante la ejecución del programa.
{
switch (OPE)
{
case 1: Ventas(INV, TAM);
break;
case 2: Reabastecimiento(INV, TAM);
break;
case 3: Nuevos_Productos(INV, &TAM);
break;
case 4: Inventario(INV, TAM);
break;
//este switch-case permite que el programa realice diferentes acciones según la opción seleccionada por el usuario (almacenada en la variable OPE). Cada caso corresponde a una operación específica relacionada con la gestión de inventario de productos, como ventas, reabastecimiento, adición de nuevos productos o consulta de inventario.
};
printf("\nIngrese operación a realizar. \n\t\t1 – Ventas \n\t\t 2 – Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 – Inventario \n\t\t 0 - Salir: "); //La línea de código printf("\nIngrese operación a realizar. \n\t\t1 – Ventas \n\t\t 2 – Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 – Inventario \n\t\t 0 - Salir: "); en C es una instrucción que muestra un menú de operaciones en la consola o terminal.
scanf("%d", &OPE); //se utiliza para leer un número entero ingresado por el usuario desde la entrada estándar (normalmente el teclado) y almacenarlo en la variable OPE.
}
}
void Lectura(producto A[], int T)
{
int I;
for (I=0; I<T; I++)
{
printf("\nIngrese información del producto %d", I+1);
printf("\n\tClave: ");
scanf("%d", &A[I].clave);
fflush(stdin);
printf("\tNombre:");
gets(A[I].nombre);
printf("\tPrecio:");
scanf("%f", &A[I].precio);
printf("\tExistencia: ");
scanf("%d", &A[I].existencia);
//se utilizan para solicitar al usuario información sobre un producto y almacenar esa información en un arreglo de estructuras (o en un arreglo de variables si A fuera un arreglo de estructuras).
}
}
void Ventas(producto A[], int T)
{
int CLA, CAN, I, RES;
float TOT, PAR;
printf("\nIngrese clave del producto -0 para salir-: ");
scanf("%d", &CLA);
TOT = 0.0;
while (CLA)
    //Este esquema básico permite al usuario ingresar múltiples claves de productos y manejarlas en el contexto de una aplicación más grande donde se gestionan productos o transacciones basadas en esas claves.
{
printf("\tCantidad: ");
scanf("%d", &CAN);
I = 0;
while ((I < T) && (A[I].clave < CLA))
I++;
if ((I == T) | | (A[I].clave > CLA))
printf("\nLa clave del producto es incorrecta");
else
if (A[I].existencia >= CAN)
//estas líneas de código forman parte de un proceso de validación y gestión de existencias de productos en un sistema de inventario, donde se verifica la disponibilidad de un producto basado en su clave y la cantidad solicitada por el usuario.
{
A[I].existencia -= CAN;
PAR = A[I].precio * CAN;
TOT += PAR;
//estas líneas de código forman parte de la lógica de procesamiento de ventas dentro de un sistema de gestión de inventarios, donde se actualizan las existencias de productos vendidos y se calcula el total acumulado de ventas.
}
else
{
printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d",
A[I].existencia);
printf(" \nLos lleva 1 - Si 0 – No?: ");
scanf("%d", &RES);
if (RES)
    //Estas líneas de código son comunes en aplicaciones de gestión de inventario o sistemas de ventas donde es importante manejar casos donde la cantidad solicitada de productos no está completamente disponible en el inventario.
{
PAR = A[I].precio * A[I].existencia;
A[I].existencia = 0;
TOT += PAR;
}
}

