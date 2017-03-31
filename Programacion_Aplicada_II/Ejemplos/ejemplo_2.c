// Nombre: ejemplo_1.c
// Por: Erick Agrazal
// Descripción: Escribir un programa que lea un texto,
//              luego imprima ese texto.
#include <stdio.h>

int main(){
  // Variables
  char nombre[30];
  int edad;

  // Lógica
  printf("Introduzca su nombre: ");
  scanf("%[^\t\n]s", nombre);  // El ""%[^\t\n]s" es para leer múltiples strings.

  printf("Introduzca su edad: ");
  scanf("%d", &edad);

  // Salidas
  printf("\n----------\n");
  printf("Su nombre es: %s \n", nombre);
  printf("Su edad es: %d \n", edad);

  printf("Saliendo... \n");
  return 0;
}
