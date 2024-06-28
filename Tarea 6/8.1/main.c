#include <stdio.h>
#include <stdlib.h>

struct alumno //sirve para definir una estructura de datos en lenguajes como C o C++, lo cual es útil para organizar información relacionada con estudiantes u otros conjuntos de datos similares en un programa.
{
int matricula; //sirve para declarar una variable llamada matricula de tipo entero en un programa, permitiendo así almacenar y manipular números enteros dentro del mismo.
char nombre[20]; // sirve para declarar una variable llamada nombre que puede almacenar una cadena de caracteres de hasta 19 caracteres de longitud, permitiendo así manejar texto dentro de un programa en lenguajes como C y C++.
char carrera[20]; //sirve para declarar una variable llamada carrera que puede almacenar una cadena de caracteres de hasta 19 caracteres de longitud, permitiendo así manejar texto relacionado con la carrera académica u otra información textual dentro de un programa en lenguajes como C y C++.
float promedio;  //sirve para declarar una variable llamada promedio que puede almacenar valores numéricos de punto flotante, permitiendo manejar números con parte decimal en programas escritos en lenguajes como C y C++.
char direccion[20]; //es una declaración que define una variable llamada direccion capaz de almacenar una cadena de hasta 19 caracteres, útil para manipular y trabajar con texto en programas escritos en C y C++.
};
void main(void)  //es una declaración de función que define la función principal de un programa en C o C++, indicando que no devuelve ningún valor y no acepta ningún argumento desde la línea de comandos.
{
struct alumno a1 = {120, "María", "Contabilidad", 8.9, "Querétaro"}, a2, a3; //inicializa a1 con valores específicos en una estructura alumno, y declara las variables a2 y a3 del mismo tipo sin inicializarlas explícitamente en esa línea.
char nom[20], car[20], dir[20]; //declara tres variables de tipo arreglo de caracteres en C o C++, que pueden utilizarse para almacenar y manipular cadenas de hasta 19 caracteres de longitud más el caracter nulo \0.
int mat; //sirve para declarar una variable llamada mat que puede almacenar números enteros en un programa en lenguajes como C y C++.
float pro; //sirve para declarar una variable llamada mat que puede almacenar números enteros en un programa en lenguajes como C y C++.
printf("\nIngrese la matrícula del alumno 2: "); //es una línea de código en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese un dato específico (en este caso, la matrícula del alumno 2) en la consola o terminal.
scanf("%d", &a2.matricula); //es una línea de código en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese un dato específico (en este caso, la matrícula del alumno 2) en la consola o terminal.
fflush(stdin); // está destinado a limpiar (vaciar) el búfer de entrada estándar (stdin). Normalmente, fflush se usa con streams de salida (stdout o stderr) para asegurarse de que todos los datos se han escrito o mostrar un prompt de usuario.
printf("Ingrese el nombre del alumno 2:"); //es una línea de código en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese un dato específico (en este caso, el nombre del alumno 2) en la consola o terminal.
gets(a2.nombre); //es una función obsoleta y no segura en C debido a problemas de seguridad relacionados con desbordamientos de búfer.
printf("Ingrese la carrera del alumno 2: "); // es una línea de código en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese un dato específico (en este caso, la carrera del alumno 2) en la consola o terminal.
gets(a2.carrera); //es una función obsoleta y no segura en C debido a problemas de seguridad relacionados con desbordamientos de búfer.
printf("Ingrese el promedio del alumno 2: "); //es una línea de código en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese un dato específico (en este caso, el promedio del alumno 2) en la consola o terminal.
scanf("%f", &a2.promedio); //se usa para leer un número decimal desde la entrada estándar y asignarlo a la variable promedio que pertenece a la estructura (o struct) a2.
fflush(stdin); //está destinado a limpiar (vaciar) el búfer de entrada estándar (stdin). Normalmente, fflush se usa con streams de salida (stdout o stderr) para asegurarse de que todos los datos se han escrito o mostrar un prompt de usuario.
printf("Ingrese la dirección del alumno 2: "); //es una línea de código en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese un dato específico (en este caso, el promedio del alumno 2) en la consola o terminal.
gets(a2.direccion);
printf("\nIngrese la matrícula del alumno 3: "); //es una línea de código en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese un dato específico (en este caso, el promedio del alumno 3) en la consola o terminal.
scanf("%d", &mat); // el programa espera que el usuario ingrese un número entero.
a3.matricula = mat; //asigna el valor entero contenido en mat a la variable matricula dentro de la estructura a3.
fflush(stdin);
printf("Ingrese el nombre del alumno 3: ");
gets(nom);
strcpy(a3.nombre, nom);
printf("Ingrese la carrera del alumno 3: ");
gets(car); //se utiliza para leer una línea completa de texto desde la entrada estándar (generalmente el teclado) y almacenarla en la variable car.
strcpy(a3.carrera, car); //se utiliza para copiar una cadena de caracteres (string) desde la variable car a la variable carrera dentro de la estructura a3.
printf("Ingrese el promedio del alumno 3: ");
scanf("%f", &pro); //se utiliza para leer un valor de tipo flotante (número decimal) desde la entrada estándar (generalmente el teclado) y almacenarlo en la variable pro.
a3.promedio = pro; //asigna el valor contenido en la variable pro a la variable promedio dentro de la estructura a3.
fflush(stdin);
printf("Ingrese la dirección del alumno 3: ");
gets(dir);
strcpy(a3.direccion, dir);
printf("\nDatos del alumno 1\n");
printf("%d\n", a1.matricula);
puts(a1.nombre);
puts(a1.carrera);
printf("%.2f\n", a1.promedio);
puts(a1.direccion);
printf("\nDatos del alumno 2\n");
printf("%d\n", a2.matricula);
puts(a2.nombre);
puts(a2.carrera);
printf("%.2f\n", a2.promedio);
puts(a2.direccion);
printf("\nDatos del alumno 3\n");
printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera,
a3.promedio, a3.direccion);
}
