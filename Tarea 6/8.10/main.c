#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char noba[10]; // sirve para declarar un arreglo de caracteres llamado noba que puede contener hasta 10 elementos.
char nucu[10]; // sirve para declarar un arreglo de caracteres llamado nucu que puede contener hasta 10 elementos.
} banco;
typedef union
{
banco che;
banco nomi;
char venta;
//declarar variables de tipos específicos (struct y char) en un programa en C++ o C, permitiendo así almacenar y manipular datos estructurados y caracteres individuales de manera efectiva dentro del programa.
} fpago;
typedef struct
{
char cnu[20];
char col[20];
char cp[5];
char ciu[15];
//sirven para declarar variables que pueden almacenar diferentes tipos de información textual en un programa en C o C++, facilitando así la manipulación y procesamiento de datos estructurados en forma de cadenas de caracteres.
} domicilio;
typedef struct
{
int num;
char nom[20];
float ven[12];
domicilio domi;
float sal;
fpago pago;
int cla;
//son esenciales para almacenar y manipular diferentes tipos de datos dentro de un programa en C o C++, organizando la información de manera adecuada para cumplir con los requisitos y funcionalidades específicas del programa que estés desarrollando.
} vendedor;
void Lectura(vendedor *, int);
void F1(vendedor *, int);
void F2(vendedor *, int);
void F3(vendedor *, int);
void F4(vendedor *, int);
void main(void)//declaraciones de funciones y la función principal main en un programa en C o C++.
{
vendedor VENDEDORES[100];
int TAM;
do
    //Estas líneas de código, junto con un código adicional para manipular y procesar los datos de VENDEDORES, forman una estructura básica para gestionar información de vendedores en un programa en C o C++.
{
printf("Ingrese el número de vendedores: ");
scanf("%d", &TAM);
}
while (TAM > 100 | | TAM < 1);
Lectura (VENDEDORES, TAM);
F1 (VENDEDORES, TAM);
F2 (VENDEDORES, TAM);
F3 (VENDEDORES, TAM);
F4 (VENDEDORES, TAM);
printf("\n\tFIN DEL PROGRAMA");
//estas líneas de código forman parte de un programa que gestiona datos de vendedores (VENDEDORES) a través de diversas funciones (Lectura, F1, F2, F3, F4) y finaliza con un mensaje de cierre.
}
void Lectura(vendedor A[], int T)
{
int I, J;
for (I=0; I<T; I++)
{
printf("\n\tIngrese datos del vendedor %d", I+1);
printf("\nNúmero de vendedor: ");
scanf("%d", &A[I].num);
printf("Nombre del vendedor: ");
fflush(stdin);
gets(A[I].nom);
printf("Ventas del año: \n");
for (J=0; J<12; J++)
    //e utilizan para solicitar y capturar datos específicos de un vendedor en un programa en C o un lenguaje similar.
{
printf("\tMes %d: ", J+1);
scanf("%f", &A[I].ven[J]);
}
printf("Domicilio del vendedor: \n");
printf("\tCalle y número: ");
fflush(stdin);
gets(A[I].domi.cnu);
printf("\tColonia: ");
fflush(stdin);
gets(A[I].domi.col);
printf("\tCódigo Postal: ");
fflush(stdin);
gets(A[I].domi.cp);
printf("\tCiudad: ");
fflush(stdin);
gets(A[I].domi.ciu);
printf("Salario del vendedor: ");
scanf("%f", &A[I].sal);
printf("Forma de Pago (Banco-1 Nómina-2 Ventanilla-3): ");
scanf("%d", &A[I].cla);
switch (A[I].cla)
//solicita al usuario ingresar información detallada sobre el domicilio, salario y forma de pago de un vendedor.
{
case 1:{
printf("\tNombre del banco: ");
fflush(stdin);
gets(A[I].pago.che.noba);
printf("\tNúmero de cuenta: ");
fflush(stdin);
gets(A[I].pago.che.nucu);
//están dentro de un bloque case en un switch en un programa en C o un lenguaje similar.
}
break;
case 2:{
printf("\tNombre del banco: ");
fflush(stdin);
gets(A[I].pago.nomi.noba);
printf("\tNúmero de cuenta: ");
fflush(stdin);
gets(A[I].pago.nomi.nucu);
//un bloque case en un switch en un programa en C o un lenguaje similar.
}
break;
case 3: A[I].pago.venta = ‘S’;
break;
}
}
}
void F1(vendedor A[], int T)
{
int I, J;
float SUM;
printf("\n\t\tVentas Totales de los Vendedores");
for (I=0; I<T; I++)
    //una base para comprender cómo las líneas de comandos que mencionaste se pueden integrar en un programa más completo para calcular y mostrar las ventas totales de los vendedores.
{
printf("\nVendedor: %d", A[I].num);
SUM = 0.0;
for (J=0; J<12; J++)
SUM += A[I].ven[J];
printf("\nVentas: %.2f\n", SUM);
//se integran en un programa más completo para calcular y mostrar las ventas totales de los vendedores a lo largo de un período de tiempo específico (en este caso, un año).
}
}
void F2(vendedor A[], int T)
{
int I, J;
float SUM;
printf ("\n\t\tIncremento a los Vendedores con Ventas > 1,500,000$");
for (I=0; I<T; I++)
    // se pueden integrar en un programa más completo para identificar y trabajar con vendedores cuyas ventas superen un cierto umbral (en este caso, 1,500,000 dólares).
{
SUM = 0.0;
for (J=0; J<12; J++)
SUM += A[I].ven[J];
if (SUM > 1500000.00)
//se pueden integrar en un programa más completo para calcular y verificar las ventas totales de los vendedores y tomar decisiones basadas en esos cálculos.
{
A[I].sal = A[I].sal * 1.05;
printf("\nNúmero de empleado: %d\nVentas: %.2f\nNuevo salario: %.2f", A[I].num, SUM, A[I].sal);
}
}
}
void F3(vendedor A[], int T)
{
int I, J;
float SUM;
printf("\n\t\tVendedores con Ventas < 300,000");
for (I=0; I<T; I++)
{
SUM = 0.0;
for (J=0; J<12; J++)
SUM += A[I].ven[J];
if (SUM < 300000.00)
printf("\nNúmero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);
//se pueden integrar en un programa más completo para calcular y verificar las ventas totales de los vendedores y tomar decisiones basadas en esos cálculos.
}
}
void F4(vendedor A[], int T)
{
int I;
float SUM;
printf("\n\t\tVendedores con Cuenta en el Banco");
for (I=0; I<T; I++)
if (A[I].cla == 1)
printf("\nNúmero de vendedor: %d\n Banco: %s\nCuenta: %s", A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
//se pueden integrar en un programa más completo para mostrar información específica sobre los vendedores que tienen cuenta en el banco, utilizando estructuras y bucles para gestionar y mostrar los datos de manera efectiva.
}
