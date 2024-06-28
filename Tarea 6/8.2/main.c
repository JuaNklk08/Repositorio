#include <stdio.h>
#include <stdlib.h>

struct alumno //una estructura (struct) se utiliza para definir un tipo de dato compuesto que puede contener diferentes tipos de variables bajo un mismo nombre.
{
int matricula; //es una declaraci�n que define una variable de tipo entero llamada matricula, lista para ser utilizada en el programa para almacenar y manipular valores enteros seg�n sea necesario.
char nombre[20]; //declara un array de caracteres llamado nombre, listo para almacenar y manipular cadenas de caracteres de hasta 19 caracteres de longitud en tu programa en C.
char carrera[20]; //declara un array de caracteres llamado carrera, listo para almacenar y manipular cadenas de caracteres de hasta 19 caracteres de longitud en tu programa en C.
float promedio; //declara una variable de tipo float llamada promedio, la cual puede almacenar n�meros decimales en tu programa en C.
char direccion[20]; //declara un array de caracteres llamado direccion, listo para almacenar y manipular cadenas de caracteres de hasta 19 caracteres de longitud en tu programa en C.
};
void Lectura(struct alumno *); //declaraci�n de la funci�n Lectura que has proporcionado indica que se trata de una funci�n en C que toma como argumento un puntero a una estructura alumno.

void main(void)
{
struct alumno a0 = {120, "Mar�a", "Contabilidad", 8.9, "Quer�taro"}; //inicializa la variable a0 de tipo struct alumno con datos espec�ficos para cada uno de sus miembros
struct alumno *a3, *a4, *a5, a6; //declara m�ltiples variables relacionadas con la estructura alumno, algunas como punteros y una como una variable normal.
a3 = &a0; // es una asignaci�n v�lida en C que permite que un puntero apunte a una estructura espec�fica.
a4 = new (struct alumno);
printf("\nIngrese la matr�cula del alumno 4: "); //se utiliza para mostrar un mensaje en la consola o en la salida est�ndar solicitando al usuario que ingrese la matr�cula del alumno n�mero 4.
scanf("%d", &(*a4).matricula); //se utiliza para leer un valor entero (en este caso, la matr�cula de un alumno) desde la entrada est�ndar y asignarlo al miembro matricula de la estructura alumno apuntada por a4.
fflush(stdin);
printf("Ingrese el nombre del alumno 4: "); //se utiliza para mostrar un mensaje en la consola o en la salida est�ndar, solicitando al usuario que ingrese el nombre del alumno n�mero 4.
gets(a4->nombre);
printf("Ingrese la carrera del alumno 4: ");
gets((*a4).carrera);
printf("Ingrese promedio del alumno 4: ");
scanf("%f", &a4->promedio);
fflush(stdin);
printf("Ingrese la direcci�n del alumno 4: ");
gets(a4->direccion);
a5 = new (struct alumno);
Lectura(a5); //mplica que est�s pasando un puntero a5 a una funci�n llamada Lectura que probablemente est� dise�ada para leer y almacenar datos en una estructura de tipo alumno o similar.
Lectura(&a6);
printf("\nDatos del alumno 3\n");
printf("%d\t%s\t%s\t%.2f\t%s", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion); //se utiliza para imprimir los datos almacenados en la estructura apuntada por a3, formateados de acuerdo a un patr�n espec�fico.
printf("\nDatos del alumno 4\n"); //se utiliza para imprimir un mensaje en la consola o salida est�ndar indicando que a continuaci�n se van a mostrar los datos del alumno n�mero 4. A
printf("%d\t%s\t%s\t%.2f\t%s", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion); //se utiliza para imprimir los datos almacenados en la estructura apuntada por a4, formateados de acuerdo a un patr�n espec�fico.
printf("\nDatos del alumno 5\n"); // se utiliza para imprimir un mensaje en la consola o en la salida est�ndar que indica que se van a mostrar los datos del alumno n�mero 5.
printf("%d\t%s\t%s\t%f\t%s", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);
printf("\nDatos del alumno 6\n");
printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);
}
void Lectura(struct alumno *a)
{
printf("\nIngrese la matr�cula del alumno: ");
scanf("%d", &(*a).matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno: ");
gets(a->nombre);
fflush(stdin);
printf("Ingrese la carrera del alumno: ");
gets((*a).carrera); // se utilizaba anteriormente para leer una l�nea de texto desde la entrada est�ndar y almacenarla en el array carrera de la estructura apuntada por a.
printf("Ingrese el promedio del alumno: ");
scanf("%f", &a->promedio); //se utiliza para leer un valor de tipo float desde la entrada est�ndar y almacenarlo en la variable promedio de la estructura apuntada por a.
fflush(stdin);
printf("Ingrese la direcci�n del alumno: "); //se utiliza para mostrar un mensaje en la consola o en la salida est�ndar, solicitando al usuario que ingrese la direcci�n del alumno.
gets(a->direccion); //se utilizaba anteriormente para leer una l�nea de texto desde la entrada est�ndar y almacenarla en el array direccion de la estructura apuntada por a.
}
