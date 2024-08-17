#include <stdio.h>


int master() {
    //--------------------------------Declaración de Variables--------------------------------

    int edad;
    float altura;
    char inicial;

    //--------------------------------Lectura de Datos con `scanf`--------------------------------

    scanf("%d", &edad);  // Lee un entero y lo almacena en la variable `edad`
    scanf("%f", &altura);  // Lee un número decimal y lo almacena en la variable `altura`
    scanf("%c", &inicial);  // Lee un carácter y lo almacena en la variable `inicial`

    /*
    Nota: La función `scanf` solo toma la primera palabra cuando se usa con cadenas de texto (`%s`).
    Por ejemplo, si el usuario ingresa "Hola Mundo", solo se almacenará "Hola".
    */

    //--------------------------------Formatos de `scanf`--------------------------------

    /*
    Dependiendo del tipo de datos, el formato en `scanf` varía:

    int: %d
    float: %f
    char: %c
    double: %lf
    string: %s
    */

    //--------------------------------Imprimir Datos con `printf`--------------------------------

    printf("La edad es: %d\n", edad);  // Imprime: La edad es: 25
    printf("La altura es: %.2f\n", altura);  // Imprime: La altura es: 1.75
    printf("La inicial es: %c\n", inicial);  // Imprime: La inicial es: A

    //--------------------------------Operaciones Básicas--------------------------------

    int a = 10, b = 5;
    int suma = a + b;         // suma = 15
    int resta = a - b;        // resta = 5
    int multiplicacion = a * b;  // multiplicacion = 50
    int division = a / b;     // division = 2
    int modulo = a % b;       // modulo = 0

    //--------------------------------Condicionales--------------------------------

    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }

    //--------------------------------Ciclos--------------------------------

    // Ciclo `for`
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // Ciclo `while`
    int i = 0;
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }

    // Ciclo `do-while`
    i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);

    //--------------------------------Funciones--------------------------------

    /*
     *  No puede haber una funcion dentro de funcion,
     *  por lo que "int sum()" debe estar por fuera del
     *  Main
     *
     *
    int sum(int a, int b); {
        return a + b;
    }

    int resultado = sum(5, 3);
    printf("La suma es: %d\n", resultado);
    return 0;
    */


}
