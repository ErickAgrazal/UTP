// Nombre: ejemplo_3.c
// Por: Erick Agrazal
// Descripción: Escribir un programa que lea 3 cantidades que imprima esas cantidades además
//              de su promedio.
//              Además de su promedio, si el promedio es mayor a 71:
//              Imprimir:
//                  - `Felicidades, has aprobado el curso. Su nota fue de <nota>.`,
//                  -  de caso contrario, imprimir `Lo siento, has reprobado el curso. Su nota fue de <nota>.`,
#include <stdio.h>

int main(){
  // Variables
  int a, b, c;
  float promedio;

  // Lógica
  printf("Introduzca su primer valor: ");
  scanf("%d", &a);

  printf("Introduzca su segundo valor: ");
  scanf("%d", &b);

  printf("Introduzca su tercer valor: ");
  scanf("%d", &c);

  // Calculando promedio
  promedio = (a+b+c)/3;

  // Salidas
  printf("\n----------\n");
  printf("Su primer valor fue: %d \n", a);
  printf("Su segundo valor fue: %d \n", b);
  printf("Su tercer valor fue: %d \n", c);
  printf("El promedio fue: %.2f \n", promedio);

  printf("Saliendo... \n");
  return 0;
}
