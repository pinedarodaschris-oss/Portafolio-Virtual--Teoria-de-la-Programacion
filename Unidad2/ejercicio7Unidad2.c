#include <stdio.h>
#include <string.h>

/*Realizar un algoritmo que pida al usuario ingresar un número y determine si el
número está en el rango de 10 a 20 (inclusive). Si el número está en ese rango, el programa
indicará que el número está dentro del rango; si no, mostrará que el número está fuera del rango.*/

int main (){


    //Declaracion de variables
    int numero;


    //Ingreso de las variables
    printf("Ingrese un numero: ");
    scanf("%i", &numero);
    getchar();


    //Proceso

    if (numero >= 10 && numero <= 20)
    {
        printf("Su numero %i si esta en el rango \n", numero);
    }
    else
    {
        printf("Su numero %i no esta en el rango \n", numero);
    }
    
    return 0;
}