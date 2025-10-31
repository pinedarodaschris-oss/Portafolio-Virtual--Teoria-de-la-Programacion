#include <stdio.h>
#include <string.h>

int main (){

    //Declaramos las variables
    int pNum, doble, tripe;

    //Ingreso de datos
    printf("Ingrese el numero a multiplicar: \n");
    scanf("%d", &pNum);

    //Proceso
    doble = pNum *2;
    tripe = pNum *3;

    //Resultado
    printf("El doble es: \n%d\n", doble);
    printf("El triple es: \n%d\n", tripe);

    return 0;
}