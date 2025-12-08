#include <stdio.h>

int main(){

    int multiplicador=2;
    int multiplicado=0;
    int ta;
    int resultado;

    printf("Ingrese la tabla  que quiera ver hasta la del 12: ");
    scanf("%i", &ta);
    getchar();


    for (ta=ta; ta<=12; ta++){
        printf("\n");

        printf("Tabla de multiplicar del %i\n", ta);
        for (multiplicado=1;multiplicado<=12;multiplicado++){

        printf("%i*%i=%i\n", ta, multiplicado, ta*multiplicado);
        

        
        }
        printf("\n");
    }


    return 0;
}