#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int matricula; //se utiliza para definir una variable llamada matricula que puede almacenar números enteros (números sin parte decimal).
char nombre[30]; // se utiliza para definir una variable llamada nombre que es un arreglo de caracteres con una capacidad para almacenar hasta 29 caracteres más el carácter nulo \0.
float cal[5]; //se utiliza para definir un arreglo de números de punto flotante que puede contener hasta 5 elementos.

} alumno;
void Lectura(alumno, int T); // se utiliza para definir un arreglo de números de punto flotante que puede contener hasta 5 elementos.
void F2(alumno *, int TAM); // indica que se está declarando una función llamada Lectura
void F3(alumno *, int TAM); //define la firma de una función en C que espera recibir un puntero a una estructura alumno y un entero que indica la cantidad de elementos a procesar.
void main(void)
{
alumno ARRE[50]; //define un arreglo llamado ARRE que puede contener hasta 50 elementos del tipo alumno.
int TAM; //C simplemente define una variable de tipo entero llamada TAM.
do
{
printf("Ingrese el tamaño del arreglo: "); //mprimir un mensaje en la consola para solicitar al usuario que ingrese el tamaño de un arreglo en C
scanf("%d", &TAM);
}
while (TAM > 50 || TAM < 1); // C representa un bucle while que se ejecutará mientras la condición entre paréntesis sea verdadera.
Lectur(ARRE, TAM); //función llamada Lectur en C, pasando como argumentos un arreglo ARRE y un entero TAM.
F1(ARRE, TAM); // C sugiere la invocación de una función F1 que toma como argumentos un arreglo ARRE y un entero TAM.
F2(ARRE, TAM); // C sugiere la invocación de una función F2 que toma como argumentos un arreglo ARRE y un entero TAM.
F3(ARRE, TAM);
}
void Lectur(alumno A[], int T) //C está diseñada para leer datos de alumnos y almacenarlos en un arreglo de estructuras alumno.
{
int I, J; //declarado las variables I y J como enteros en tu código.
for (I=0; I<T; I++) // es una estructura fundamental en programación para repetir acciones un número determinado de veces
{
printf("\nIngrese los datos del alumno %d", I+1);
printf("\nIngrese la matrícula del alumno: ");
scanf("%d", &A[I].matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno:");
gets(A[I].nombre);
for (J=0; J<5; J++)
    //estas líneas de código están diseñadas para solicitar al usuario que ingrese la matrícula y el nombre de un alumno específico, así como para comenzar a ingresar otros datos (probablemente calificaciones) relacionados con ese alumno.
{
printf("\tIngrese la calificación %d del alumno %d: ", J+1, I+1); //Sirve para imprimir un mensaje en la consola solicitando al usuario que ingrese la calificación número J+1 para el alumno número I+1.
scanf("%f", &A[I].cal[J]); //Sirve para leer un número de punto flotante (flotante) desde la entrada estándar (teclado en la mayoría de los casos) y almacenarlo en la posición J del arreglo cal del alumno en la posición I del arreglo A.
}
}
}
void F1(alumno A[], int T) //Define una función en C llamada F1.

{
int I, J; //Declara dos variables enteras en C llamadas I y J.
float SUM, PRO; //Declara dos variables en C, SUM y PRO, como variables de tipo float.
for (I=0; I<T; I++) // esta línea de código se utiliza para iterar T veces, donde I va desde 0 hasta T-1.
{
printf("\nMatrícula del alumno: %d", A[I].matricula);  // utiliza para iterar T veces, donde I va desde 0 hasta T-1.
SUM = 0.0; //esta línea de código se utiliza para imprimir en la consola o en la salida estándar la matrícula de un alumno que está almacenada en la estructura (o arreglo) A en la posición I.
for (J=0; J<5; J++) //esta línea de código se utiliza para iterar exactamente 5 veces. Durante cada iteración, J se incrementa de 0 a 4.
SUM = SUM + A[I].cal[J]; // suma el valor almacenado en A[I].cal[J] al valor previamente almacenado en SUM, y el resultado se almacena en UM.
PRO = SUM / 5; //la línea de código PRO = SUM / 5; calcula el promedio de los valores almacenados en SUM dividiéndolos entre 5, y luego asigna ese resultado a la variable PRO.
printf("\t\tPromedio: %.2f", PRO); // imprime el valor almacenado en la variable PRO con un formato específico que incluye dos tabuladores antes del texto "Promedio:" y luego muestra el valor de PRO con dos decimales después del punto decimal.
}
}
void F2(alumno A[], int T) // indica que estamos definiendo una función llamada F2 que toma como argumentos un arreglo de estructuras A y un entero T.
{
int I;
printf("\nAlumnos con calificación en la tercera materia > 9");
for (I=0; I<T; I++)
if (A[I].cal[2] > 9)
printf("\nMatrícula del alumno: %d", A[I].matricula);
//estas líneas de código se utilizan para imprimir las matrículas de los alumnos cuya calificación en la tercera materia es mayor que 9. El bucle for recorre todos los alumnos representados en el arreglo A, y el if filtra aquellos cuya calificación específica (A[I].cal[2]) cumple con el criterio establecido (> 9).
}
void F3(alumno A[], int T)
{
int I;
float PRO, SUM = 0.0;
for (I=0; I<T; I++)
SUM = SUM + A[I].cal[3];
PRO = SUM / T;
printf("\n\nPromedio de la materia 4: %.2f", PRO);
//estas líneas de código se utilizan para calcular y mostrar el promedio de la cuarta materia de un grupo de alumnos representados en el arreglo A. El bucle for recorre todos los alumnos, acumulando las calificaciones de la cuarta materia en SUM, luego se calcula el promedio dividiendo SUM por T y se imprime el resultado formateado en la consola.
}

