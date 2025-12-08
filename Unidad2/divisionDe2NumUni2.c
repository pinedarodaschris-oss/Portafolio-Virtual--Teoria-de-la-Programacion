#include <stdio.h>

int main(){

    double num;
    double num2;
    int resultado;

    printf("Ingrese el numerador: ");
    scanf("%lf", &num);
    getchar();

    do{
        printf("Ingrese el denominador: ");
        scanf("%lf", &num2);
        getchar();
        

        if (num2==0){
        printf("ERROR");
        }

    }while (num2==0);
    
    printf ("resultado %lf", num/num2);
    
    return 0;
}