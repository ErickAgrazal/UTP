// Nombre: ejemplo_scanf_examen_1.c
// Por: Erick Agrazal
// Descripción: Escribir un programa que lea
//              de manera variable una cantidad de
//              estudiantes.
#include <stdio.h>

int main() {
  char nombre[30][20];
  int count_estudiantes, ch;

  printf("Leer cantidad de estudiantes: ");

  scanf(" %i", &count_estudiantes);
  while ((ch = getchar()) != '\n' && ch != EOF);

  for (int i = 0; i < count_estudiantes; i++) {
    printf("Imprime el #%d: ", i+1);
    fgets(nombre[i], sizeof(nombre[i]), stdin);
  }

  for (int i = 0; i < count_estudiantes; i++) {
    printf("%s \n", nombre[i]);
  }
  return 0;
}
