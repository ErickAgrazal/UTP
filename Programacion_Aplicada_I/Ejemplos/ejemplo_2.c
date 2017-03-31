Escribir un pograma que imprima `Hello World`

Escribir un programa que lea un texto,
luego imprima ese texto.

Escribir un programa que lea 3 cantidades
que imprima esas cantidades además
de su promedio.












// Nombre: ejemplo_1.c
// Por: Erick Agrazal
// Descripción: Arreglos
#include <stdio.h>
#include <conio.h>

int main(){
  // Variables
  char *nombre;
  int edad;

  // Lógica
  printf("Introduzca su nombre: ");
  scanf("%s", nombre);

  printf("Introduzca su edad: ");
  scanf("%d", &edad);

  // Salidas
  printf("\n----------\n");
  printf("Su edad es: %s \n", nombre);
  printf("Su edad es: %d \n", edad);

  printf("Saliendo... \n");
  return 0;
}
