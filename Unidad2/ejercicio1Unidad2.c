#include <stdio.h>
#include <string.h>

int main (){


    //Declaracion de variables
    float numero1, numero2;


    //Ingreso de las variables
    printf("Ingrese el nuemro 1: ");
    scanf("%f", &numero1);
    getchar();

    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);
    getchar();


    //Proceso

    if (numero1 > numero2)
    {
        printf("El numero mayor es el primero:  %f\n", numero1);
    }
    if (numero1 < numero2)
    {
        printf("El numero mayor es el segundo:  %f\n", numero2);
    }
    if (numero1 == numero2)
    {
        printf("Los numeros son iguales:  %f, %f\n", numero1, numero2);
    }

    return 0;
}