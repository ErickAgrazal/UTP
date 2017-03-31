// Nombre: ejemplo_3.c
// Por: Erick Agrazal
// Descripción: Escribir un programa que lea 3 cantidades
//              que imprima esas cantidades además
//              de su promedio.
#include <stdio.h>

int main(){
  // Variables
  int lista[10], suma=0;
  float promedio;

  // Lógica
  for (int i = 0; i < 10; i++) {
    printf("Introduzca su valor número %d: ", i);
    scanf("%d", &lista[i]);
    suma += lista[i];
  }

  // Calculando promedio
  promedio = suma/10;

  // Salidas
  printf("\n----------\n");
  printf("El promedio fue: %.2f \n", promedio);

  printf("Saliendo... \n");
  return 0;
}
