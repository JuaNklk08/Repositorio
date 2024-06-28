#include <stdio.h>
#include <stdlib.h>

union datos //es una estructura de datos especial que permite almacenar diferentes tipos de datos en la misma ubicaci�n de memoria.
{
char celular[15]; //char celular[15]; en un lenguaje de programaci�n indica la creaci�n de una variable llamada celular que es un arreglo de caracteres (strings) con capacidad para almacenar hasta 15 caracteres, incluyendo el car�cter nulo ('\0') al final, que indica el fin de la cadena en muchos lenguajes de programaci�n.
char correo[20]; //indica la creaci�n de una variable llamada correo que es un arreglo de caracteres con capacidad para almacenar hasta 20 caracteres, incluyendo el car�cter nulo ('\0') al final, que indica el fin de la cadena en muchos lenguajes de programaci�n.
};
typedef struct
{
int matricula;
char nombre[20];
char carrera[20];
float promedio;
union datos personales;
//estas l�neas de c�digo definen variables que podr�an ser utilizadas para almacenar informaci�n relacionada con un estudiante, como su matr�cula, nombre, carrera y promedio acad�mico, adem�s de introducir el concepto de una uni�n que podr�a ser utilizada para estructurar los datos personales de manera eficiente en memoria.
} alumno;
void Lectura(alumno a);  // es la declaraci�n de una funci�n en lenguaje C o C++.
void main(void)
{
alumno a1 = {120, "Mar�a", "Contabilidad", 8.9, "5-158-40-50"}, a2, a3;
printf("Alumno 2\n");
printf("Ingrese la matr�cula: ");
scanf("%d", &a2.matricula);
fflush(stdin);
printf("Ingrese el nombre: ");
gets(a2.nombre);
fflush(stdin);
printf("Ingrese la carrera: ");
gets(a2.carrera);
printf("Ingrese el promedio: ");
scanf("%f", &a2.promedio);
fflush(stdin);
printf("Ingrese el correo electr�nico: ");
gets(a2.personales.correo);
printf("Alumno 3\n");
Lectura(&a3);
printf("\nDatos del alumno 1\n");
printf("%d\n", a1.matricula);
puts(a1.nombre);
puts(a1.carrera);
printf("%.2f\n", a1.promedio);
puts(a1.personales.celular);
puts(a1.personales.correo);
//este c�digo est� dise�ado para manejar informaci�n de estudiantes utilizando estructuras en C o C++. Utiliza funciones de entrada y salida est�ndar (printf, scanf, gets, puts) para interactuar con el usuario y mostrar datos almacenados en estructuras (alumno).
}
strcpy(a0.personales.correo, "hgimenez@hotmail.com"); //strcpy(a0.personales.correo, "hgimenez@hotmail.com"); es una instrucci�n en C o C++ que copia la cadena "hgimenez@hotmail.com" en el arreglo de caracteres a0.personales.correo.
puts(a0.personales.celular);
puts(a0.personales.correo);
printf("\nDatos del alumno 2\n");
printf("%d\n", a2.matricula);
puts(a2.nombre);
puts(a2.carrera);
printf("%.2f\n", a2.promedio);
puts(a2.personales.celular);
puts(a2.personales.correo);
printf("Ingrese el tel�fono celular del alumno 2: ");
fflush(stdin);
gets(a2.personales.celular);
puts(a2.personales.celular);
puts(a2.personales.correo);
printf("\nDatos del alumno 3\n");
printf("%d\n", a3.matricula);
puts(a3.nombre);
puts(a3.carrera);
printf("%.2f\n", a3.promedio);
puts(a3.personales.celular);
puts(a3.personales.correo);
//este c�digo interact�a con el usuario para ingresar y mostrar datos de estudiantes (alumno). Utiliza funciones como printf, puts, y gets para manejar la entrada y salida de datos de manera estructurada, mostrando informaci�n como matr�cula, nombre, carrera, promedio, tel�fono celular y correo electr�nico para cada alumno (a0, a2, a3).
}
void Lectura(alumno *a)
{
printf("\nIngrese la matr�cula: ");
scanf("%d", &(*a).matricula);
fflush(stdin);
printf("Ingrese el nombre: ");
gets(a->nombre);
fflush(stdin);
printf("Ingrese la carrera: ");
gets((*a).carrera);
printf("Ingrese el promedio: ");
scanf("%f", &a->promedio);
printf("Ingrese el tel�fono celular: ");
fflush(stdin);
gets(a->personales.celular);
//estas l�neas de c�digo est�n destinadas a permitir al usuario ingresar informaci�n espec�fica sobre un alumno, como la matr�cula, nombre, carrera, promedio y tel�fono celular. Utilizan funciones de entrada y salida est�ndar (printf, scanf, gets) para interactuar con el usuario y almacenar los datos ingresados en los campos correspondientes de la estructura alumno representada por el puntero a.
}
