#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char zona[20];
char calle[20];
char colo[20];
//Sirven para almacenar y manipular cadenas de texto en programas en C
} ubicacion;
typedef struct
{
char clave[5];
float scu;
float ste;
char car[50];
ubicacion ubi;
float precio;
char dispo;
//estas l�neas de c�digo sirven para declarar y reservar espacio en la memoria para variables que pueden almacenar informaci�n como claves, n�meros, texto, ubicaciones, precios y disponibilidad dentro de un programa en C.
} propiedades;
void Lectura(propiedades , int);
void F1(propiedades *, int);
void F2(propiedades *, int);
void main(void)
//estas l�neas de c�digo est�n organizando la estructura b�sica del programa, definiendo las firmas de funciones (Lectura, F1, F2) que deben ser implementadas en otro lugar del c�digo, y proporcionando la funci�n principal (main) desde donde se iniciar� la ejecuci�n del programa.
{
propiedades PROPIE[100]; // es una declaraci�n que reserva espacio en la memoria para almacenar un conjunto de 100 estructuras propiedades.
int TAM; //simplemente declara una variable entera llamada TAM en C, la cual puedes usar para almacenar y manipular valores enteros en tu programa seg�n sea necesario.
do
{
printf("Ingrese el n�mero de propiedades: "); //es una l�nea de c�digo en C que imprime el mensaje "Ingrese el n�mero de propiedades: "
scanf("%d", &TAM); //es una l�nea de c�digo en C que permite al usuario ingresar un n�mero entero desde la consola, que luego se almacena en la variable TAM para su uso posterior en el programa.
}
while (TAM > 100 | | TAM < 1);
Lectura(PROPIE, TAM);
F1(PROPIE, TAM);
F2(PROPIE, TAM);
//estas l�neas de comandos en un contexto de programa en C establecen un bucle while para verificar que TAM est� en un rango v�lido (entre 1 y 100), y luego llaman a funciones (Lectura, F1, F2) que operan sobre un conjunto de datos (PROPIE) basado en el valor de TAM. Es importante corregir el bucle while para que funcione correctamente, y asegurarse de que las funciones Lectura, F1, y F2 est�n definidas y manejen correctamente los datos de entrada.
}
void Lectura(propiedades A[], int T)
{
int I; //simplemente declara una variable entera llamada I en C, que puedes usar para almacenar y manipular valores enteros seg�n las necesidades de tu programa.
for (I=0; I<T; I++) //es una estructura de bucle en C que inicializa una variable I, eval�a una condici�n (I < T), y despu�s de cada iteraci�n incrementa I.
{
printf("\n\tIngrese datos de la propiedad %d", I + 1);
printf("\nClave: ");
fflush(stdin);
gets(A[I].clave);
printf("Superficie cubierta: ");
scanf("%f", &A[I].scu);
printf("Superficie terreno: ");
scanf("%f", &A[I].ste);
printf("Caracter�sticas: ");
fflush(stdin);
gets(A[I].car);
printf("\tZona: ");
fflush(stdin);
gets(A[I].ubi.zona);
printf("\tCalle: ");
fflush(stdin);
gets(A[I].ubi.calle);
printf("\tColonia: ");
fflush(stdin);
gets(A[I].ubi.colo);
printf("Precio: ");
scanf("%f", &A[I].precio);
printf("Disponibilidad (Venta-V Renta-R): ");
scanf("%c", &A[I].dispo);
//estas l�neas de c�digo facilitan la entrada de datos de propiedades por parte del usuario y las almacenan en un arreglo de estructuras (A) en C.
}
}
void F1(propiedades A[], int T)
{
int I;
printf("\n\t\tListado de Propiedades para Venta en Miraflores");
for (I=0; I<T; I++)
if ((A[I].dispo == �V�) && (strcmp (A[I].ubi.zona, "Miraflores") == 0))
if ((A[I].precio >= 450000) && (A[I].precio <= 650000))
    //estas l�neas de c�digo en conjunto forman un fragmento que busca e imprime un listado de propiedades disponibles para venta en la zona de "Miraflores" con un precio espec�fico entre $450,000 y $650,000.
{
printf("\nClave de la propiedad: ");
puts(A[I].clave);
printf("\nSuperficie cubierta: %f", A[I].scu);
printf("\nSuperficie terreno: %f", A[I].ste);
printf("\nCaracter�sticas: ");
puts(A[I].car);
printf("Calle: ");
puts(A[I].ubi.calle);
printf("Colonia: ");
puts(A[I].ubi.colo);
printf("Precio: %.2f\n", A[I].precio);
//Estas l�neas de c�digo se utilizan para mostrar de manera detallada la informaci�n de una propiedad espec�fica almacenada en el arreglo A de estructuras.
}
}
void F2(propiedades A[], int T)
{
int I;
float li, ls;
char zon[20];
printf("\n\t\tListado de Propiedades para Renta");
printf("\nIngrese zona geogr�fica: ");
fflush(stdin);
gets(zon);
printf("Ingrese el l�mite inferior del precio:");
scanf("%f", &li);
printf("Ingrese el l�mite superior del precio:");
scanf("%f", &ls);
for (I=0; I<T; I++)
if ((A[I].dispo == 'R') && (strcmp (A[I].ubi.zona, zon) == 0))
if ((A[I].precio >= li) && (A[I].precio <= ls))
    //Estas l�neas de c�digo forman parte de un programa que permite al usuario buscar y listar propiedades disponibles para renta, filtrando por zona geogr�fica y rango de precios. El bucle for recorre todas las propiedades almacenadas en el arreglo A, y los if anidados sirven para aplicar los filtros espec�ficos basados en los criterios ingresados por el usuario (zona geogr�fica y rango de precios).
{
printf("\nClave de la propiedad: ");
puts(A[I].clave);
printf("\nSuperficie cubierta: %d", A[I].scu);
printf("\nSuperficie terreno: %d", A[I].ste);
printf("\nCaracter�sticas: ");
puts(A[I].car);
printf("Calle: ");
puts(A[I].ubi.calle);
printf("Colonia: ");
puts(A[I].ubi.colo);
printf("Precio: %.2f", A[I].precio);
//Estas l�neas de c�digo se utilizan para mostrar de manera detallada la informaci�n de una propiedad espec�fica almacenada en el arreglo A de estructuras. Imprime la clave, superficies (cubierta y terreno), caracter�sticas, direcci�n (calle y colonia), y precio de la propiedad en un formato estructurado y legible para el usuario. Cada funci�n (printf y puts) se utiliza para imprimir diferentes partes de la informaci�n de la propiedad, asegurando que se presente de manera clara y organizada en la consola.
}
}
