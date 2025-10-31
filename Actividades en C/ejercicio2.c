#include <stdio.h>
#include <string.h>

int main (){

    //Declaramos las variables
    double vO, vF, a, t;

    //Ingreso de datos
    printf("Ingrese la velocidad final (m/s): \n");
    scanf("%lf", &vF);

    printf("Ingrese la velocidad inicial (m/s): \n");
    scanf("%lf", &vO);

    printf("Ingrese el tiempo (s): \n");
    scanf("%lf", &t);


    //Proceso
    a= (vF-vO)/t;

    //Resultado
    printf("La aceleracion es: \n%f\n", a);


    return 0;
}