#include <stdio.h>
#include <string.h>

//gcc ejercicio1.c -o ejercicio1
//.\ejercicio1

int main (){

    //Declaramos las variables
    double ml, cm, mt, km;

    //Ingreso de datos
    printf("Ingrese los metros a calcular: \n");
    scanf("%lf", &mt);

    //Proceso
    ml = mt *1000;
    cm = mt *100;
    km = mt /1000;

    //Resultado
    printf("Los milimetros son: \n%f\n", ml);
    printf("Los centimetros son: \n%f\n", cm);
    printf("Los kilometros son: \n%f\n", km);
    printf("Los metros son: \n%f\n", mt);

    return 0;
}