#include <stdio.h>
#include <string.h>

int main (){

    //Declaramos las variables
    double nC, pd;
    int pE;

    //Ingreso de datos
    printf("Ingrese un numero: \n");
    scanf("%lf", &nC);

    //Proceso
    pE = (int)nC;
    pd = nC - pE;

    //Resultado
    printf("La parte entera es: %d\n", pE);
    printf("La parte decimal es: %f\n", pd);


    return 0;
}