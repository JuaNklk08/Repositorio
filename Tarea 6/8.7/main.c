#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char mat[20]; //C define un arreglo de caracteres que puede contener hasta 19 caracteres más el carácter nulo \0, útil para almacenar y manipular cadenas de caracteres en programas.
int pro; //define una variable que puede almacenar un valor entero, proporcionando flexibilidad para manejar datos numéricos enteros en programas.
} matpro;
typedef struct
{
int matri; //define una variable que puede almacenar un valor entero, proporcionando flexibilidad para manejar datos numéricos enteros en programas.
char nom[20]; //define un arreglo de caracteres que puede contener hasta 19 caracteres más el carácter nulo \0, útil para almacenar y manipular cadenas de caracteres en programas.
matpro cal[5]; //es una declaración que involucra un tipo de dato (matpro) que no está especificado explícitamente en la consulta.
} alumno;
void Lectura(alumno * , int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);
void main(void)
//definen cómo deben ser llamadas estas funciones más adelante en el código, especificando los tipos y la cantidad de parámetros que deben recibir. El main(void) es el punto de entrada del programa donde se puede iniciar la ejecución y utilizar estas funciones para realizar diversas operaciones relacionadas con los datos de tipo alumno.
{
alumno ALU[50]; //La declaración alumno ALU[50]; en C reserva espacio en la memoria para almacenar un arreglo de 50 estructuras alumno.
int TAM; //define una variable que puede almacenar un valor entero, proporcionando flexibilidad para manejar datos numéricos enteros en programas.
do
{
printf("Ingrese el tamaño del arreglo: "); // es una línea de código que imprime un mensaje en la consola solicitando al usuario que ingrese un tamaño específico para un arreglo, facilitando la interacción usuario-programa en aplicaciones de programación en C.
scanf("%d", &TAM); //se utiliza para leer un número entero ingresado por el usuario desde la entrada estándar (generalmente el teclado) y almacenarlo en la variable TAM.
}
while (TAM > 50 | | TAM < 1);
Lectura(ALU, TAM);
F1(ALU, TAM);
F2(ALU, TAM);
F3(ALU, TAM);
//un bucle while que controla la ejecución de varias funciones (Lectura, F1, F2, F3) mientras se cumple una condición específica relacionada con el valor de TAM. Esto facilita la ejecución controlada y repetitiva de operaciones basadas en las condiciones establecidas.
}
void Lectura(alumno A[], int T)
{
int I, J;
for(I=0; I<T; I++)
{
printf("\nIngrese los datos del alumno %d", I+1);
printf("\nIngrese la matrícula del alumno: ");
scanf("%d", &A[I].matri);
fflush(stdin);
printf("Ingrese el nombre del alumno:");
gets(A[I].nom);
for (J=0; J<5; J++)
    //las líneas de código que has mostrado facilitan la entrada de datos de matrícula y nombre para varios alumnos y están diseñadas para integrarse en un contexto más amplio donde se gestionan múltiples registros de alumnos.
{
printf("\tMateria %d: ", J+1);
fflush(stdin);
gets(A[I].cal[J].mat);
printf("\tPromedio %d: ", J+1);
scanf("%d", &A[I].cal[J].pro);
//permiten al usuario ingresar nombres de materias y promedios para un alumno específico, utilizando estructuras anidadas en un arreglo para manejar datos relacionados con las calificaciones de materias de manera organizada y estructurada.
}
}
}
void F1(alumno A[], int T)
{
int I, J;
float SUM;
for (I=0; I<T; I++)
{
printf("\nMatrícula del alumno : %d", A[I].matri);
SUM = 0.0;
for (J=0; J<5; J++)
SUM = SUM + A[I].cal[J].pro;
SUM = SUM / 5;
printf("\tPromedio: %.2f', SUM);
// estas líneas de código forman parte de un programa más grande que probablemente gestiona datos de varios alumnos y calcula el promedio de sus calificaciones en diferentes materias. La impresión de la matrícula del alumno junto con su promedio proporciona una salida organizada y legible para el usuario final o para su posterior procesamiento en el programa.
}
}
void F2(alumno A[], int T)
{
int I;
printf("\nAlumnos con calificación mayor a 9 en la tercera materia");
for (I=0; I<T; I++)
if (A[I].cal[2].pro > 9)
printf("\nMatrícula del alumno : %d", A[I].matri);
//estas líneas de código permiten identificar y mostrar las matrículas de los alumnos cuya calificación en la tercera materia es mayor a 9. Esto proporciona una salida específica y útil para el usuario o para el procesamiento adicional dentro del programa.
}
void F3(alumno A[], int T)
{
int I;
float SUM = 0.0;
for (I=0; I<T; I++)
SUM = SUM + A[I].cal[3].pro;
SUM = SUM / T;
printf("\n\nPromedio de la cuarta materia: %.2f", SUM);
//estas líneas de código permiten calcular y mostrar el promedio de las calificaciones de la cuarta materia para un grupo de alumnos, proporcionando una salida específica y útil para el usuario o para el procesamiento adicional dentro del programa.
}
