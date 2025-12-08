#include <stdio.h>

int main(){

    int multiplicador=2;
    int multiplicado=0;
    int resultado;

   do {
        resultado = multiplicador * multiplicado;
        
        printf(" \n%i * %i = %i\n", multiplicador, multiplicado, resultado);
        multiplicado = multiplicado +1;
    } 
    while (multiplicado<13);
    
    
    


    return 0;
}