#include <stdio.h>
#include <stdlib.h>

/*int main (){
    //Declaramos las variables
    char * nombComp = malloc(100 * sizeof(char));

    //Ingreso de datos
    printf("Ingrese su nombre completo: \n");
    scanf("%[^\n]s", nombComp);
    getchar();

    //Resultado
    printf("Su nombre completo es: \n%s", nombComp);

    return 0;
}*/

/*int main (){
    //Declaramos las variables
    char nombComp[100];

    //Ingreso de datos
    printf("Ingrese su nombre completo: \n");
    scanf("%[^\n]s", nombComp);
    getchar();

    //Resultado
    printf("Su nombre completo es: \n%s", nombComp);

    return 0;
}*/

int main (){
    //Declaramos las variables
    char * nombComp = "Christopher Alexander Pineda Rodas";

    //Ingreso de datos
    printf("Ingrese su nombre completo: \n");
    scanf("%[^\n]s", nombComp);
    getchar();

    //Resultado
    printf("Su nombre completo es: \n%s", nombComp);

    return 0;
}