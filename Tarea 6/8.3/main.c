#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char calle[20]; //define un array de caracteres llamado calle con capacidad para almacenar hasta 19 caracteres más el carácter nulo de terminación ('\0').
int numero; //define una variable de tipo entero llamada numero
int cp; // define una variable llamada cp de tipo entero.
char localidad[20]; // define un array de caracteres llamado localidad con capacidad para almacenar hasta 19 caracteres más el carácter nulo de terminación ('\0').
} domicilio; //un término que se usa comúnmente para referirse a la dirección o lugar donde reside una persona o entidad.
struct empleado // se utiliza para definir un tipo de datos que puede contener múltiples campos con diferentes tipos de datos.
{
char nombre[20]; //define un array de caracteres llamado nombre con capacidad para almacenar hasta 19 caracteres más el carácter nulo de terminación ('\0').
char departamento[20]; //define un array de caracteres llamado departamento con capacidad para almacenar hasta 19 caracteres más el carácter nulo de terminación ('\0').
float sueldo; // define una variable llamada sueldo que puede almacenar números en punto flotante de precisión simple.
domicilio direccion;
};
void Lectura(struct empleado *a) //está diseñada para recibir un puntero a una estructura de tipo empleado (o struct empleado) como argumento y realizar operaciones de lectura para llenar los campos de dicha estructura.
{
printf("\nIngrese el nombre del empleado: "); //se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese el nombre de un empleado.
gets(a->nombre); //se utiliza para leer una línea completa de texto desde la entrada estándar (stdin) y almacenarla en el array nombre de la estructura a, que es un puntero a una estructura de tipo empleado (o struct empleado).
fflush(stdin);
printf("Ingrese el departamento de la empresa: "); //se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese el nombre o identificación del departamento de una empresa.
gets(a->departamento);
printf("Ingrese el sueldo del empleado: "); //se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese el salario de un empleado.
scanf("%f", &a->sueldo); //e utiliza para leer un número de punto flotante (es decir, un sueldo) desde la entrada estándar (stdin) y almacenarlo en el campo sueldo de una estructura a, la cual es un puntero a una estructura de tipo empleado (o struct empleado).
fflush(stdin);
printf("—-Ingrese la dirección del empleado—-"); //se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese la dirección de un empleado.
printf("\n\tCalle: "); //se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese el nombre de la calle como parte de la dirección de un empleado (o cualquier entidad).
gets(a->direccion.calle);
printf("\tNúmero: "); // se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese el número de la dirección, como parte de la información de un empleado o cualquier entidad.
scanf("%d", &a->direccion.numero); //se utiliza para leer un número entero desde la entrada estándar (teclado) y almacenarlo en el campo numero de la estructura direccion, que a su vez está dentro de una estructura empleado apuntada por a.
printf("\tCódigo Postal: "); // se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese el código postal como parte de la dirección de un empleado o cualquier entidad.
scanf("%d", &a->direccion.cp); //se utiliza para leer un número entero (en este caso, el código postal) desde la entrada estándar y almacenarlo en el campo cp de la estructura direccion, que a su vez está dentro de una estructura empleado apuntada por a.
fflush(stdin);
printf("\tLocalidad: ");// se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese la localidad como parte de la dirección de un empleado o cualquier entidad.
gets(a->direccion.localidad); //se utilizaba tradicionalmente para leer una línea de texto desde la entrada estándar (stdin) y almacenarla en un arreglo de caracteres proporcionado como argumento.
}
void main(void)
{
struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jerónimo", 120, 3490, "Toluca"}; //se utiliza para inicializar una variable de tipo struct empleado llamada e0 con valores específicos para cada uno de sus campos.
struct empleado *e1, *e2, e3, e4; //declara varias variables que son punteros a estructuras (e1 y e2) y dos variables normales de tipo struct empleado (e3 y e4).
e1 = new (struct empleado);
printf("\nIngrese el nombre del empleado 1: "); // se utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese el nombre del empleado número 1.
scanf("%s", &(*e1).nombre); //se utiliza para leer una cadena de caracteres (en este caso, el nombre de un empleado) desde la entrada estándar y almacenarla en el campo nombre de una estructura empleado a través de un puntero.
fflush(stdin);
printf("Ingrese el departamento de la empresa: "); // se utiliza para leer una cadena de caracteres (en este caso, el nombre de un empleado) desde la entrada estándar y almacenarla en el campo nombre de una estructura empleado a través de un puntero.
gets(e1->departamento);
printf("Ingrese el sueldo del empleado: "); //se utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese el sueldo del empleado.
scanf("%f", &e1->sueldo); //se utiliza para leer un valor de punto flotante (en este caso, el sueldo de un empleado) desde la entrada estándar y almacenarlo en el campo sueldo de una estructura empleado, utilizando un puntero e1 que apunta a esa estructura.
printf("—-Ingrese la dirección del empleado—-"); //se utiliza para imprimir un mensaje en la consola indicando al usuario que debe ingresar la dirección del empleado.
printf("\n\tCalle: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese la calle como parte de la dirección del empleado.
fflush(stdin);
gets(e1->dirección, calle);
printf("\tNúmero: ");
scanf("%d", &e1->direccion.numero);
printf("\tCódigo Postal: ");
scanf("%d", &e1->direccion.cp);
printf("\tLocalidad: ");
fflush(stdin);
gets(e1->direccion.localidad); //se utilizaba anteriormente para leer una línea de texto desde la entrada estándar (generalmente el teclado) y almacenarla en un array de caracteres
printf("\nIngrese el nombre del empleado 3: ");
scanf("%s", &e3.nombre); //se utiliza para leer una cadena de caracteres desde la entrada estándar y almacenarla en el array nombre de la estructura e3, que parece ser una instancia de la estructura empleado basándonos en tu conversación anterior.
fflush(stdin);
printf("Ingrese el departamento de la empresa: "); //se utiliza para solicitar información específica al usuario en un programa en C, en este caso, el nombre del departamento al que pertenece un empleado en una empresa.
gets(e3.departamento); //para leer una cadena de caracteres desde la entrada estándar (stdin) y almacenarla en un array e3.departamento
printf("Ingrese el sueldo del empleado: "); // se utiliza para solicitar información específica al usuario en un programa en C, en este caso, el sueldo de un empleado.
scanf("%f", &e3.sueldo); //se utiliza para leer un valor de tipo flotante (número decimal) desde la entrada estándar (stdin) y almacenarlo en la variable sueldo que pertenece a la estructura empleado, específicamente en el campo sueldo de la instancia e3.
printf("—-Ingrese la dirección del empleado—-"); // se utiliza para imprimir un mensaje en la consola que indica al usuario que debe ingresar la dirección del empleado.
printf("\n\tCalle: "); //se utiliza para imprimir un mensaje en la consola con formato específico.
fflush(stdin);
gets(e3.direccion.calle); //La línea de código gets(e3.direccion.calle); que estás mencionando intenta leer una cadena de caracteres desde la entrada estándar y almacenarla en el campo calle de la estructura direccion, que a su vez es parte de la estructura empleado (e3).
printf("\tNúmero: "); //se utiliza para solicitar información específica al usuario en un programa en C, en este caso, un número.
scanf("%d", &e3.direccion.numero); //se utiliza para leer un número entero (de tipo int) desde la entrada estándar (stdin) y almacenarlo en el campo numero de la estructura direccion, que a su vez es parte de la estructura empleado (e3).
printf("\tCódigo Postal: "); //utiliza para imprimir un mensaje en la consola con formato específico, solicitando al usuario que ingrese un código postal.
scanf("%d", &e3.direccion.cp); //se utiliza para leer un número entero (de tipo int) desde la entrada estándar (stdin) y almacenarlo en el campo cp de la estructura direccion, que forma parte de la estructura empleado (e3).
printf("\tLocalidad: "); //se utiliza para imprimir un mensaje en la consola con formato específico, solicitando al usuario que ingrese una localidad.
fflush(stdin);
gets(e3.direccion.localidad)
e2 = new (struct empleado);
Lectura(e2);
Lectura(&e4);
printf("\nDatos del empleado 1\n"); // se utiliza para imprimir un mensaje en la consola que indica la visualización de los datos del primer empleado, seguido de un salto de línea.
printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e1->nombre, e1->departamento, e1>sueldo, e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad); // se utiliza para imprimir los datos de un empleado con formato específico.
printf("\nDatos del empleado 4n");
printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo, e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
}
