#include <stdio.h>
#include <string.h>

/*Realizar un algoritmo que lea o capture dos valores. Si el valor 1 es
menor o igual al valor 2, hacer la suma de estos números.*/

int main (){


    //Declaracion de variables
    float numero1, numero2, sumaT;


    //Ingreso de las variables
    printf("Ingrese el nuemro 1: ");
    scanf("%f", &numero1);
    getchar();

    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);
    getchar();


    //Proceso

    
    if (numero1 <= numero2)
    {
        sumaT = numero1 + numero2;
        printf("La suma de los numeros es:  %f\n", sumaT);
    }

    return 0;
}