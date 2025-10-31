#include <stdio.h>
#include <string.h>

int main (){

    //Declaramos las variables
    double pie, yr,pg,cm,mt;

    //Ingreso de datos
    printf("Ingrese los pies a calcular: \n");
    scanf("%lf", &pie);

    //Proceso
    yr = pie /3;
    pg = pie * 12;
    cm = pg * 2.54;
    mt = cm/100;

    //Resultado
    printf("Los yardas son: \n%f\n", yr);
    printf("Los pulgadas son: \n%f\n", pg);
    printf("Los centimetros son: \n%f\n", cm);
    printf("Los metros son: \n%f\n", mt);

    return 0;
}