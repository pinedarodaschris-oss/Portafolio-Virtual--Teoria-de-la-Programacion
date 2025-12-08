/*Escribe un programa que le pida al usuario que adivine un número secreto entre 1 y 10. 
El programa debe permitirle al usuario hacer varios intentos hasta que acierte el número.*/

#include <stdio.h>
#include <stdint.h>

int main() {

  //Declaracion de variables
  int intent=1, numUsuario;
  int numSis=12, notasEstu;
  char * F;

  printf("*************************************************************\n");
  printf("Adivine el numero el cual es del 1 al 19, Tienes 5 intentos\n");
  printf("*************************************************************\n");
  
  //Proceso
  do{
    printf("Intento %i\n", intent);
    scanf("%i", &numUsuario);

    if (numUsuario==numSis){
      F="Felicidades gano";
      printf("_________________________\n");
      if (intent==1){
        intent=intent+4;
      } else if (intent==2){
        intent=intent+3;
      } else if (intent==3){
        intent=intent+2;
      } else if (intent==4){
        intent=intent+1;
      }
          
    } else if (numUsuario>numSis){
      F="El numero es menor\n";
      printf("_________________________\n");
    } else if (numUsuario<numSis){
      F="El numero es mayor\n";
      printf("_________________________\n");
    }
    intent= intent+1;
  }while (intent<=5);

  printf("\n");
  printf("%s\n", F);
  
  return 0;
}