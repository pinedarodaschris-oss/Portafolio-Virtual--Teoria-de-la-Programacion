#include <stdio.h>
#include <string.h>

/*Dado como dato el sueldo de un
trabajador (en S), considera un aumento del
45% si su sueldo es inferior a 1000, de lo
contrario realiza un descuento del 10%.
Finalmente mostrar el sueldo con el aumento
o el descuento efectuado.*/

int main (){


    //Declaracion de variables
    float sueldo, sueldoF;


    //Ingreso de las variables
    printf("Ingrese su sueldo: ");
    scanf("%f", &sueldo);
    getchar();


    //Proceso

    if (sueldo < 1000)
    {
        sueldoF = sueldo + ((sueldo*45)/100);
        printf("Su sueldo final es de: %f\n", sueldoF);
    }
    else
    {
        sueldoF = sueldo - ((sueldo*10)/100);
        printf("Su sueldo final es de: %f\n", sueldoF);
    }
    
    return 0;
}