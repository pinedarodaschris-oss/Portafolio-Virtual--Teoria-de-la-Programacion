#include <stdio.h>
#include <string.h>

/*Realizar un algoritmo que lea un número. Verificar si el número es
positivo, negativo o es 0.*/

int main (){


    //Declaracion de variables
    float numero;


    //Ingreso de las variables
    printf("Ingrese un numero: ");
    scanf("%f", &numero);
    getchar();


    //Proceso

    if (numero > 0)
    {
        printf("Su numero %f es positivo\n", numero);
    }
    if (numero == 0)
    {
        printf("Su numero %f es 0\n", numero);
    }
    if (numero < 0)
    {
        printf("Su numero %f es negativo\n", numero);
    }
    
    return 0;
}