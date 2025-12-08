#include <stdio.h>
#include <stdint.h>

int main() {
  int numAlum, alumTotal;
  double notaFC, notasEstu;

  printf("Ingrese la candidad de alumnos del ciclo\n");
  if (scanf("%i", &alumTotal) != 1) {
      printf("Error al leer la cantidad de alumnos\n");
      return 1;
  }

  
    if (alumTotal>1 && alumTotal<100 ) {
        printf("*********************\n");
        printf("Notas\n");
        printf("*********************\n");
      for(numAlum=1;numAlum<=alumTotal; numAlum++){
        
        do{

        
        printf("Ingrese la nota del alumno %i\n", numAlum);
        if (scanf("%lf", &notasEstu) != 1) {
            printf("Error al leer la nota\n");
            return 1;
        }

        printf("El estudiante %i tiene %lf\n", numAlum, notasEstu);
        } while (notasEstu>10 || notasEstu<0);
        notaFC=notaFC+notasEstu;
        

      }
      notaFC=notaFC/alumTotal;
      printf("El promedio del ciclo es de: %.2lf\n", notaFC);
      
    }else{
        printf("Ingrese un valor valido del 1 al 100\n");
    }

    
  return 0;
}