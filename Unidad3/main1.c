#include <stdio.h>

float calcularPromedioFinal (int nu);
float calcularACD ( );
float calcularAPE ( );
float calcularAA ( );
float calcularES ( );


int main() {

    int NUMEROUNIDADES = 3;
    float promedioFinal;
    
    promedioFinal = calcularPromedioFinal(NUMEROUNIDADES);
    printf("\nSu promedio final de la asignatura es: %.2f\n", promedioFinal);
    printf("Su nota cualitativa es: ");
    if (promedioFinal >= 7.0) {
        printf("Aprobado");
    } else if (promedioFinal >= 2.5 && promedioFinal < 7.0) {
        printf("Supletorio");
    } else if (promedioFinal < 2.5) {
        printf("Reprobado");
    }
    return 0;
}

float calcularPromedioFinal (int nu) {

    float notaSuma = 0;

    for (int i = 1; i <= nu; i++) {
        printf("\nUnidad %i\n", i);
        float notaUnidad = calcularACD( ) + calcularAPE( ) + calcularAA( ) + calcularES( );
        printf("El promedio de la unidad %i es: %.2f\n", i, notaUnidad);
        notaSuma += notaUnidad;
    }

    float promedioFinal = notaSuma / nu;

    return promedioFinal;
}

float calcularACD ( ) {

    int numActividades;
    float notaActividad;
    float notaAcumulativa = 0;
    float notaPromedio;

    do {
        printf("Ingrese el numero de actividades para ACD:\n");
        scanf("%i", &numActividades);
        if (numActividades <= 0) {
            printf("El numero de actividades debe ser mayor a 0. Intente de nuevo.\n");
        }
    } while (numActividades <= 0);

    for (int i = 1; i <= numActividades; i++) {

        do {
            printf("Ingrese la nota de la actividad %i\n", i);
            scanf("%f", &notaActividad);
            if (notaActividad < 0 || notaActividad > 10) {
                printf("La nota debe estar entre 0 y 10. Intente de nuevo.\n");
            }
        } while (notaActividad < 0 || notaActividad > 10);

        notaAcumulativa += notaActividad;
    }

    notaPromedio = notaAcumulativa / numActividades;
    notaPromedio = notaPromedio * 0.20;

    return notaPromedio;
}

float calcularAPE ( ) {

    int numActividades;
    float notaActividad;
    float notaAcumulativa = 0;
    float notaPromedio;

    do {
        printf("Ingrese el numero de actividades para APE:\n");
        scanf("%i", &numActividades);
        if (numActividades <= 0) {
            printf("El numero de actividades debe ser mayor a 0. Intente de nuevo.\n");
        }
    } while (numActividades <= 0);

    for( int i = 1; i <= numActividades; i++) {

        do {
            printf("Ingrese la nota de la actividad %i\n", i);
            scanf("%f", &notaActividad);
            if (notaActividad < 0 || notaActividad > 10) {
                printf("La nota debe estar entre 0 y 10. Intente de nuevo.\n");
            }
        } while (notaActividad < 0 || notaActividad > 10);

        notaAcumulativa += notaActividad;
    }

    notaPromedio = notaAcumulativa / numActividades;
    notaPromedio = notaPromedio * 0.25;
    
    return notaPromedio;
  
}

float calcularAA ( ) {

    int numActividades;
    float notaActividad;
    float notaAcumulativa = 0;
    float notaPromedio;

    do {
        printf("Ingrese el numero de actividades para AA:\n");
        scanf("%i", &numActividades);
        if (numActividades <= 0) {
            printf("El numero de actividades debe ser mayor a 0. Intente de nuevo.\n");
        }
    } while (numActividades <= 0);

    for (int i = 1; i <= numActividades; i++) {

        do {
            printf("Ingrese la nota de la actividad %i\n", i);
            scanf("%f", &notaActividad);
            if (notaActividad < 0 || notaActividad > 10) {
                printf("La nota debe estar entre 0 y 10. Intente de nuevo.\n");
            }
        } while (notaActividad < 0 || notaActividad > 10);

        notaAcumulativa += notaActividad;
    }

    notaPromedio = notaAcumulativa / numActividades;
    notaPromedio = notaPromedio * 0.20;
    
    return notaPromedio;
}

float calcularES ( ) {

    float notaPortafolio;
    float notaAprendizaje;
    float notaPromedio;

    do {
        printf("Ingrese la nota del portafolio digital:\n");
        scanf("%f", &notaPortafolio);
        if (notaPortafolio < 0 || notaPortafolio > 10) {
            printf("La nota debe estar entre 0 y 10. Intente de nuevo.\n");
        }
    } while (notaPortafolio < 0 || notaPortafolio > 10);

    do {
        printf("Ingrese la nota del aprendizaje basado en problemas:\n");
        scanf("%f", &notaAprendizaje);
        if (notaAprendizaje < 0 || notaAprendizaje > 10) {
            printf("La nota debe estar entre 0 y 10. Intente de nuevo.\n");
        }
    } while (notaAprendizaje < 0 || notaAprendizaje > 10);
        

    notaPromedio = (notaPortafolio*0.4) + (notaAprendizaje*0.6) ;
    notaPromedio = notaPromedio * 0.35;

    return notaPromedio;
}
