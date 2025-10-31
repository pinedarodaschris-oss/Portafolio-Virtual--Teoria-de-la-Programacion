#include <stdio.h>
#include <string.h>

int main (){

    //Declaramos las variables
    double c1, c2, c3, nL, nF=60;

    //Ingreso de datos
    printf("Ingrese la calificacion 1 : \n");
    scanf("%lf", &c1);

    printf("Ingrese la calificacion 2 : \n");
    scanf("%lf", &c2);

    printf("Ingrese la nota de laboratorio: \n");
    scanf("%lf", &nL);

    //Procesos
    c3 = 3*(nF-0.3*nL)/0.7-(c1+c2);


    //Resultado
    if (c3>100)
    {
        printf("La nota minima necesaria es mayor a 100, lo cual es invalido.\n%lf\n", c3);
    } else if (c3<=100) {
        printf("La nota minima necesaria es: \n%lf\n", c3);
        printf("En caso de salir negativo usted ya posee las notas requeridas\n");
    }
    

    return 0;
}