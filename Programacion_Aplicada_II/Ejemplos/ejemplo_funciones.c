// Nombre: ejemplo_funciones.c
// Por: Erick Agrazal
// Descripción: Alcance de Variables
#include <stdio.h>

#define NULO 0
#define UTP "Universidad Tecnológica de Panamá"

// Variables Globales
int nota=100;
int edad;

void suma(int a){
  // Variables Locales
  int b = 30;
  a = 30;
  nota = 1;
  printf("Imprimiendo Variables en funcion: %d\n", a);
  printf("Imprimiendo Variables en funcion: %d\n", nota);
}

int main(){
  // Variables
  int a = 10;
  char nombre[10] = "Erick";
  printf("Imprimiendo Variables fuera funcion: %d\n", nota);
  printf("Imprimiendo Variables fuera funcion: %d\n", edad);
  suma(a);
  printf("Imprimiendo Variables fuera funcion: %d\n", a);
  printf("Imprimiendo Variables fuera funcion: %d\n", nota);
  if (NULO) {
    printf("%s\n", UTP);
  }
  return 0;
}
