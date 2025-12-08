#include <stdio.h>
#include <string.h>

/*Realizar un algoritmo para verificar que el número ingresado sea múltiplo de
3, mostrar mensaje en ambos casos.*/

int main (){


    //Declaracion de variables
    int numero;


    //Ingreso de las variables
    printf("Ingrese un numero: ");
    scanf("%i", &numero);
    getchar();


    //Proceso

    if (numero % 3 == 0)
    {
        printf("Su numero %i si es multiplo de 3: \n", numero);
    }
    else
    {
        printf("Su numero %i no es multiplo de 3: \n", numero);
    }
    
    return 0;
}