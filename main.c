/*
 * Este programa ordenará de forma ascendente los números que el usuario proporcione.
 *
 * Fecha: 13 de septiembre de 2018.
 * Autor: Alejandro Ramírez
 * Correo: alex.ramirez.99@hotmail.com / A01412034@itesm.mx
 */

#include <stdio.h>

//funcion que ordena los numeros
void orden (double* a, double* b) {
    int cambiarLugar;       // variable temporal para cambiar de lugar
    if (*a > *b) {          // si a es mayor que b, se cambian de lugar
        cambiarLugar = *a;
        *a = *b;
        *b = cambiarLugar;
    }
}


int main(void) {
    double n1;
    double n2;
    double n3;

    //el programa pide los numeros
    printf("Hello! I will help you to order numbers in an ascending form.\n");
    printf("Give me 3 numbers one by one, make sure to press enter when typing each number: \n");
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

    //funcion para cada combinacion
    orden(&n1, &n2);
    orden(&n1, &n3);
    orden(&n2, &n3);
    printf("The given numbers in an ascending form are: %lf, %lf, %lf", n1, n2, n3);

    return 0;
}