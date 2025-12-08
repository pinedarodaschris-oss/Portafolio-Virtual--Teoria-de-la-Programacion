#include <stdio.h>

int main(){

    int contador=0;
    int acumulador=0;

    while (contador<=5)
    {
        acumulador = acumulador + contador;
        contador = contador +1;
        
    }
    
    printf("El valor sumado es: %i\n", acumulador);


    return 0;
}