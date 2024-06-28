#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char mat[20]; //C define un arreglo de caracteres que puede contener hasta 19 caracteres m�s el car�cter nulo \0, �til para almacenar y manipular cadenas de caracteres en programas.
int pro; //define una variable que puede almacenar un valor entero, proporcionando flexibilidad para manejar datos num�ricos enteros en programas.
} matpro;
typedef struct
{
int matri; //define una variable que puede almacenar un valor entero, proporcionando flexibilidad para manejar datos num�ricos enteros en programas.
char nom[20]; //define un arreglo de caracteres que puede contener hasta 19 caracteres m�s el car�cter nulo \0, �til para almacenar y manipular cadenas de caracteres en programas.
matpro cal[5]; //es una declaraci�n que involucra un tipo de dato (matpro) que no est� especificado expl�citamente en la consulta.
} alumno;
void Lectura(alumno * , int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);
void main(void)
//definen c�mo deben ser llamadas estas funciones m�s adelante en el c�digo, especificando los tipos y la cantidad de par�metros que deben recibir. El main(void) es el punto de entrada del programa donde se puede iniciar la ejecuci�n y utilizar estas funciones para realizar diversas operaciones relacionadas con los datos de tipo alumno.
{
alumno ALU[50]; //La declaraci�n alumno ALU[50]; en C reserva espacio en la memoria para almacenar un arreglo de 50 estructuras alumno.
int TAM; //define una variable que puede almacenar un valor entero, proporcionando flexibilidad para manejar datos num�ricos enteros en programas.
do
{
printf("Ingrese el tama�o del arreglo: "); // es una l�nea de c�digo que imprime un mensaje en la consola solicitando al usuario que ingrese un tama�o espec�fico para un arreglo, facilitando la interacci�n usuario-programa en aplicaciones de programaci�n en C.
scanf("%d", &TAM); //se utiliza para leer un n�mero entero ingresado por el usuario desde la entrada est�ndar (generalmente el teclado) y almacenarlo en la variable TAM.
}
while (TAM > 50 | | TAM < 1);
Lectura(ALU, TAM);
F1(ALU, TAM);
F2(ALU, TAM);
F3(ALU, TAM);
//un bucle while que controla la ejecuci�n de varias funciones (Lectura, F1, F2, F3) mientras se cumple una condici�n espec�fica relacionada con el valor de TAM. Esto facilita la ejecuci�n controlada y repetitiva de operaciones basadas en las condiciones establecidas.
}
void Lectura(alumno A[], int T)
{
int I, J;
for(I=0; I<T; I++)
{
printf("\nIngrese los datos del alumno %d", I+1);
printf("\nIngrese la matr�cula del alumno: ");
scanf("%d", &A[I].matri);
fflush(stdin);
printf("Ingrese el nombre del alumno:");
gets(A[I].nom);
for (J=0; J<5; J++)
    //las l�neas de c�digo que has mostrado facilitan la entrada de datos de matr�cula y nombre para varios alumnos y est�n dise�adas para integrarse en un contexto m�s amplio donde se gestionan m�ltiples registros de alumnos.
{
printf("\tMateria %d: ", J+1);
fflush(stdin);
gets(A[I].cal[J].mat);
printf("\tPromedio %d: ", J+1);
scanf("%d", &A[I].cal[J].pro);
//permiten al usuario ingresar nombres de materias y promedios para un alumno espec�fico, utilizando estructuras anidadas en un arreglo para manejar datos relacionados con las calificaciones de materias de manera organizada y estructurada.
}
}
}
void F1(alumno A[], int T)
{
int I, J;
float SUM;
for (I=0; I<T; I++)
{
printf("\nMatr�cula del alumno : %d", A[I].matri);
SUM = 0.0;
for (J=0; J<5; J++)
SUM = SUM + A[I].cal[J].pro;
SUM = SUM / 5;
printf("\tPromedio: %.2f', SUM);
// estas l�neas de c�digo forman parte de un programa m�s grande que probablemente gestiona datos de varios alumnos y calcula el promedio de sus calificaciones en diferentes materias. La impresi�n de la matr�cula del alumno junto con su promedio proporciona una salida organizada y legible para el usuario final o para su posterior procesamiento en el programa.
}
}
void F2(alumno A[], int T)
{
int I;
printf("\nAlumnos con calificaci�n mayor a 9 en la tercera materia");
for (I=0; I<T; I++)
if (A[I].cal[2].pro > 9)
printf("\nMatr�cula del alumno : %d", A[I].matri);
//estas l�neas de c�digo permiten identificar y mostrar las matr�culas de los alumnos cuya calificaci�n en la tercera materia es mayor a 9. Esto proporciona una salida espec�fica y �til para el usuario o para el procesamiento adicional dentro del programa.
}
void F3(alumno A[], int T)
{
int I;
float SUM = 0.0;
for (I=0; I<T; I++)
SUM = SUM + A[I].cal[3].pro;
SUM = SUM / T;
printf("\n\nPromedio de la cuarta materia: %.2f", SUM);
//estas l�neas de c�digo permiten calcular y mostrar el promedio de las calificaciones de la cuarta materia para un grupo de alumnos, proporcionando una salida espec�fica y �til para el usuario o para el procesamiento adicional dentro del programa.
}
