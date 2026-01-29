#include <stdio.h>

void calcularValorRecaudado(int totalCli, double *refRecaudacion);
void calcularValorCliente(double *refRecaudacion, int numeroCliente);

int main() {
  int cantClientes;
  double recaudacionTotal = 0;
  printf("Ingrese la cantidad de clientes: ");
  if (scanf("%d", &cantClientes) != 1) {
    printf("Error: Debe ingresar un número entero.\n");
    return 1;
  }

  calcularValorRecaudado(cantClientes, &recaudacionTotal);

  printf("\n------------------------------\n");
  printf("La recaudacion total es: %.2f\n", recaudacionTotal);
  printf("------------------------------\n");

  return 0;
}

void calcularValorRecaudado(int totalCli, double *refRecaudacion) {
  for (int i = 1; i <= totalCli; i++) {

    calcularValorCliente(refRecaudacion, i);
  }
}

void calcularValorCliente(double *refRecaudacion, int numeroCliente) {
  int horasUso, opcionConsola;
  double play = 2.5, xbox = 2, nint = 1.5, cobroCliente = 0;

  printf("\n--- Cliente %d ---\n", numeroCliente);
  printf("1(PlayStation), 2(Xbox), 3(Nintendo): ");
  scanf("%d", &opcionConsola);

  if (opcionConsola < 1 || opcionConsola > 3) {
    printf("Opción inválida.\n");
    return;
  }

  printf("Ingrese horas de uso: ");
  scanf("%d", &horasUso);

  switch (opcionConsola) {
  case 1:
    cobroCliente = horasUso * play;
    break;
  case 2:
    cobroCliente = horasUso * xbox;
    break;
  case 3:
    cobroCliente = horasUso * nint;
    break;
  }

  printf("Consumio %.2f dolares\n", cobroCliente);

  *refRecaudacion = *refRecaudacion + cobroCliente;
}
