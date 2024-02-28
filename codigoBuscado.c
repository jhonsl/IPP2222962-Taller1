#include <stdio.h>

int main() {
    int var1 = 10; // Declara una variable entera var1
    int var2 = 20; // Declara otra variable entera var2
    int *ptr;      // Declara un puntero a entero

    ptr = &var1; // Asigna la dirección de var1 al puntero ptr
    printf("Valor de var1: %d\n", *ptr); // Accede al valor de var1 a través del puntero

    *ptr = 15; // Modifica el valor de var1 a través del puntero
    printf("Nuevo valor de var1: %d\n", var1);

    ptr = &var2; // Cambia el puntero para que apunte a var2
    printf("Valor de var2: %d\n", *ptr); // Accede al valor de var2 a través del puntero

    *ptr = 25; // Modifica el valor de var2 a través del puntero
    printf("Nuevo valor de var2: %d\n", var2);

    return 0;
}
