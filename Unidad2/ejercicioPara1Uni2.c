#include <stdio.h>

int main(){

    double num;
    double num2;
    double resultado=1;

    printf("Ingrese el numerador: ");
    scanf("%lf", &num);
    getchar();


    do{
        
        for(num2=1;num2<=num;num2++){

            
            resultado=resultado*num2;
            
            }

    }while (num<=0);
    printf ("resultado %lf\n", resultado);
    
    
    
    return 0;
}