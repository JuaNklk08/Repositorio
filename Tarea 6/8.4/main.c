#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int matricula; //se utiliza para definir una variable llamada matricula que puede almacenar n�meros enteros (n�meros sin parte decimal).
char nombre[30]; // se utiliza para definir una variable llamada nombre que es un arreglo de caracteres con una capacidad para almacenar hasta 29 caracteres m�s el car�cter nulo \0.
float cal[5]; //se utiliza para definir un arreglo de n�meros de punto flotante que puede contener hasta 5 elementos.

} alumno;
void Lectura(alumno, int T); // se utiliza para definir un arreglo de n�meros de punto flotante que puede contener hasta 5 elementos.
void F2(alumno *, int TAM); // indica que se est� declarando una funci�n llamada Lectura
void F3(alumno *, int TAM); //define la firma de una funci�n en C que espera recibir un puntero a una estructura alumno y un entero que indica la cantidad de elementos a procesar.
void main(void)
{
alumno ARRE[50]; //define un arreglo llamado ARRE que puede contener hasta 50 elementos del tipo alumno.
int TAM; //C simplemente define una variable de tipo entero llamada TAM.
do
{
printf("Ingrese el tama�o del arreglo: "); //mprimir un mensaje en la consola para solicitar al usuario que ingrese el tama�o de un arreglo en C
scanf("%d", &TAM);
}
while (TAM > 50 || TAM < 1); // C representa un bucle while que se ejecutar� mientras la condici�n entre par�ntesis sea verdadera.
Lectur(ARRE, TAM); //funci�n llamada Lectur en C, pasando como argumentos un arreglo ARRE y un entero TAM.
F1(ARRE, TAM); // C sugiere la invocaci�n de una funci�n F1 que toma como argumentos un arreglo ARRE y un entero TAM.
F2(ARRE, TAM); // C sugiere la invocaci�n de una funci�n F2 que toma como argumentos un arreglo ARRE y un entero TAM.
F3(ARRE, TAM);
}
void Lectur(alumno A[], int T) //C est� dise�ada para leer datos de alumnos y almacenarlos en un arreglo de estructuras alumno.
{
int I, J; //declarado las variables I y J como enteros en tu c�digo.
for (I=0; I<T; I++) // es una estructura fundamental en programaci�n para repetir acciones un n�mero determinado de veces
{
printf("\nIngrese los datos del alumno %d", I+1);
printf("\nIngrese la matr�cula del alumno: ");
scanf("%d", &A[I].matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno:");
gets(A[I].nombre);
for (J=0; J<5; J++)
    //estas l�neas de c�digo est�n dise�adas para solicitar al usuario que ingrese la matr�cula y el nombre de un alumno espec�fico, as� como para comenzar a ingresar otros datos (probablemente calificaciones) relacionados con ese alumno.
{
printf("\tIngrese la calificaci�n %d del alumno %d: ", J+1, I+1); //Sirve para imprimir un mensaje en la consola solicitando al usuario que ingrese la calificaci�n n�mero J+1 para el alumno n�mero I+1.
scanf("%f", &A[I].cal[J]); //Sirve para leer un n�mero de punto flotante (flotante) desde la entrada est�ndar (teclado en la mayor�a de los casos) y almacenarlo en la posici�n J del arreglo cal del alumno en la posici�n I del arreglo A.
}
}
}
void F1(alumno A[], int T) //Define una funci�n en C llamada F1.

{
int I, J; //Declara dos variables enteras en C llamadas I y J.
float SUM, PRO; //Declara dos variables en C, SUM y PRO, como variables de tipo float.
for (I=0; I<T; I++) // esta l�nea de c�digo se utiliza para iterar T veces, donde I va desde 0 hasta T-1.
{
printf("\nMatr�cula del alumno: %d", A[I].matricula);  // utiliza para iterar T veces, donde I va desde 0 hasta T-1.
SUM = 0.0; //esta l�nea de c�digo se utiliza para imprimir en la consola o en la salida est�ndar la matr�cula de un alumno que est� almacenada en la estructura (o arreglo) A en la posici�n I.
for (J=0; J<5; J++) //esta l�nea de c�digo se utiliza para iterar exactamente 5 veces. Durante cada iteraci�n, J se incrementa de 0 a 4.
SUM = SUM + A[I].cal[J]; // suma el valor almacenado en A[I].cal[J] al valor previamente almacenado en SUM, y el resultado se almacena en UM.
PRO = SUM / 5; //la l�nea de c�digo PRO = SUM / 5; calcula el promedio de los valores almacenados en SUM dividi�ndolos entre 5, y luego asigna ese resultado a la variable PRO.
printf("\t\tPromedio: %.2f", PRO); // imprime el valor almacenado en la variable PRO con un formato espec�fico que incluye dos tabuladores antes del texto "Promedio:" y luego muestra el valor de PRO con dos decimales despu�s del punto decimal.
}
}
void F2(alumno A[], int T) // indica que estamos definiendo una funci�n llamada F2 que toma como argumentos un arreglo de estructuras A y un entero T.
{
int I;
printf("\nAlumnos con calificaci�n en la tercera materia > 9");
for (I=0; I<T; I++)
if (A[I].cal[2] > 9)
printf("\nMatr�cula del alumno: %d", A[I].matricula);
//estas l�neas de c�digo se utilizan para imprimir las matr�culas de los alumnos cuya calificaci�n en la tercera materia es mayor que 9. El bucle for recorre todos los alumnos representados en el arreglo A, y el if filtra aquellos cuya calificaci�n espec�fica (A[I].cal[2]) cumple con el criterio establecido (> 9).
}
void F3(alumno A[], int T)
{
int I;
float PRO, SUM = 0.0;
for (I=0; I<T; I++)
SUM = SUM + A[I].cal[3];
PRO = SUM / T;
printf("\n\nPromedio de la materia 4: %.2f", PRO);
//estas l�neas de c�digo se utilizan para calcular y mostrar el promedio de la cuarta materia de un grupo de alumnos representados en el arreglo A. El bucle for recorre todos los alumnos, acumulando las calificaciones de la cuarta materia en SUM, luego se calcula el promedio dividiendo SUM por T y se imprime el resultado formateado en la consola.
}

