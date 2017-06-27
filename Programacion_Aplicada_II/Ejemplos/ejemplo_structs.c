#include <stdio.h>
#include <string.h>


struct Estudiante{
  char nombre[20];
  int nota;
};

int main() {
  struct Estudiante primer_estudiante;

  strcpy(primer_estudiante.nombre, "Erick Agrazal");
  primer_estudiante.nota = 91;

  // imprimir_estudiante(primer_estudiante);

  printf("Fuera de la funcion.\n");
  printf("El estudiante es: %s\n", primer_estudiante.nombre);
  printf("La nota es: %i\n", primer_estudiante.nota);

  return 0;
}
