// Nombre: ejemplo_11.c
// Por: Erick Agrazal
// Descripción: Escribir un programa que lea 2 enteros cambie el contenido
//              de esas dos variables.
//              Imprimir el nombre de la persona junto con su edad.
#include <stdio.h>

#define CANTIDAD_DE_ELEMENTOS 5

void intercambiar(int *x, int *y){
    int z;

    z = *x;
    *x = *y;
    *y = z;
}

int main(){
  // Variables
  int a, b;

  a = 100;
  b = 200;

  // Impresión previa
  printf("%i %i", a, b);

  // Lógica
  intercambiar(&a, &b);

  // Salidas
  printf("\n%i %i", a, b);  

  printf("\n\nSaliendo... \n");
  return 0;
}