#include <stdio.h>

int main(){

    int dia;
    int horas;
    int ta;

    


    for (dia=1; dia<=365; dia++){
        printf("\n");

        for (horas=1;horas<=24;horas++){

        printf("Ingrese la temperatura de la hora: %i del dia %i\n", horas, dia);
        scanf("%i", &ta);
        getchar();

        
        }
        printf("\n");
    }


    return 0;
}