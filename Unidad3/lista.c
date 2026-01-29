#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//gcc lista.c -o lista
//.\lista

int main(){

    //listas
    /*int lista[5];
    lista[0]=8;
    lista[1]=10;
    lista[2]=7;
    lista[3]=5;
    lista[4]=3;

    for(int i=0; i<5; i++){
        printf("Elemento %i: %i\n", i+1, lista[i]);
    }*/

    //Matrices
    /*int matriz[3][4];
    matriz[0][0]=1;
    matriz[0][1]=10;
    matriz[0][2]=7;
    matriz[0][3]=5;

    matriz[1][0]=3;
    matriz[1][1]=4;
    matriz[1][2]=5;
    matriz[1][3]=6;

    matriz[2][0]=9;
    matriz[2][1]=12;
    matriz[2][2]=8;
    matriz[2][3]=7;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Fila [%i] y columna [%i]= %i\n", i, j, matriz[i][j]);
        }
    }*/

    //Arreglos tridimencionales
    /*int aregloTridimencional[2][3][2];
    int aregloTridimensional;
    aregloTridimencional[0][0][0]=1;
    aregloTridimencional[0][0][1]=10;
    aregloTridimencional[0][1][0]=16;
    aregloTridimencional[0][1][1]=18;
    aregloTridimencional[0][2][0]=6;
    aregloTridimencional[0][2][1]=2;

    aregloTridimencional[1][0][0]=20;
    aregloTridimencional[1][0][1]=4;
    aregloTridimencional[1][1][0]=8;
    aregloTridimencional[1][1][1]=22;
    aregloTridimencional[1][2][0]=14;
    aregloTridimencional[1][2][1]=12;
    for(int i=0; i<2; i++){ //capas
        for(int j=0; j<3; j++){ //filas
            for(int k=0; k<2; k++){ //columnas

                scanf("Ingrese el valor de la capa %i, de la fila %i y de la columna %i: ", &aregloTridimensional);
                aregloTridimencional[i][j][k]=aregloTridimensional;
                printf("Dimencion [%i] fila [%i] columna [%i]= %i\n", i, j, k, aregloTridimencional[i][j][k]);
            }
        }
    }*/

    //Permitir que el usuario ingreso los valores
    int aregloTridimencional[2][3][2];
    int aregloTridimensional;
    for(int i=0; i<2; i++){ //capas
        for(int j=0; j<3; j++){ //filas
            for(int k=0; k<2; k++){ //columnas

                scanf("Ingrese el valor de la capa %i, de la fila %i y de la columna %i: ", &aregloTridimensional);
                aregloTridimencional[i][j][k]=aregloTridimensional;
            }
        }
    }

    return 0;
}