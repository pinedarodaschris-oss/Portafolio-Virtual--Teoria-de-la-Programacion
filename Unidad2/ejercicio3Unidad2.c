#include <stdio.h>
#include <string.h>

/*Realizar un algoritmo para verificar si una persona es mayor de edad de
acuerdo a su edad.*/

int main (){


    //Declaracion de variables
    int edad;


    //Ingreso de las variables
    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    getchar();


    //Proceso

    if (edad < 18)
    {
        printf("Usted tiene %i por lo tanto es menor de edad\n", edad);
    }
    if (edad >= 18)
    {
        printf("Usted tiene %i por lo tanto es menor de edad\n", edad);
    }
    
    return 0;
}