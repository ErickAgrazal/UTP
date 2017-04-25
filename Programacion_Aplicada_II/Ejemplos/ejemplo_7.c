// Nombre: ejemplo_7.c
// Por: Erick Agrazal
// Descripción: Escribir un programa que lea 10 nombres de personas
//              completos con sus edades en 2 arreglos.
//              Imprimir el nombre de la persona junto con su edad.
#include <stdio.h>

#define CANTIDAD_DE_ELEMENTOS 5

int main(){
  // Variables
  int edades[CANTIDAD_DE_ELEMENTOS], ch;
  char nombres[CANTIDAD_DE_ELEMENTOS][30]; // 10 nombres de 30 caracteres máximo.

  // Lógica
  for (int i = 0; i < CANTIDAD_DE_ELEMENTOS; i++) {
    printf("Introduzca el nombre de la persona #%d: ", i+1);
    fgets(nombres[i], sizeof(nombres[i]), stdin);
    printf("Introduzca la edad de la persona #%d: ", i+1);
    scanf("%d", &edades[i]);
    while ((ch = getchar()) != '\n' && ch != EOF);
    printf("\n");
  }

  // Salidas
  for (int i = 0; i < CANTIDAD_DE_ELEMENTOS; i++) {
    printf("\nEl nombre de la persona #%d es: %s", i+1, nombres[i]);
    printf("La edad de la persona #%d es: %d\n", i+1, edades[i]);
  }

  printf("\n\nSaliendo... \n");
  return 0;
}
