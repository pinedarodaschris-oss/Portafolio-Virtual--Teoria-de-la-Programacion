
#include <stdio.h>
#include <string.h>

int main (){

    double pNum, sNum, sTotal;

    printf("Ingrese el primer numero: \n");
    scanf("%lf", pNum);

    printf("Ingrese el segundo numero: \n");
    scanf("%lf", sNum);

    sTotal = pNum + sNum;

    printf("La suma de los numeros es: \n%lf", sTotal);

    return 0;
}