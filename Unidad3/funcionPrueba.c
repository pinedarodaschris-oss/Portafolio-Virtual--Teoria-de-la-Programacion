#include <stdio.h>
int sumar();
int resta();
int multiplicacion();
double division();

int main(){

    int vA, vB,vC;

    printf("Ingrese el valor A\n");
    scanf("%i", &vA);

    printf("Ingrese el valor B\n");
    scanf("%i", &vB);


    printf("---------------------\n");
    int resultadoR = resta(vA,vB);

    int resultadoS = sumar(vA,vB);

    double resultadoD = division(vA,vB);

    int resultadoM = multiplicacion(vA,vB);

    
    printf("La Suma es %i\n", resultadoS);

    printf("La Resta es %i\n", resultadoR);

    printf("La multiplicacion es %i\n", resultadoM);

    printf("La division es %.2lf\n", resultadoD);
    
    
    printf("---------------------\n");

    return 0;
}

int sumar(int v, int w){
    return v+w;
}

int resta(int t, int y){
    return t-y;
}

double division(int h, int j){

    if (j==0)
    {
        printf("Error no se puede dividir entre 0\n");
        return 0;
    }
    return h/(double)j;
}

int multiplicacion(int f, int g){
   return f*g;
}
