// Nombre: ejemplo_6.c
// Por: Erick Agrazal
// Descripción: Escribir un programa que lea 10 notas [USANDO ARREGLOS]. Imprima esas cantidades.
//              Además de su promedio, dependiendo de la nota, imprimir A, B, C, D, F:
//              Imprimir:
//                  - `Felicidades, has aprobado el curso. Su nota fue de <nota>.`, [EN EL CASO DE A]
//                  -  de caso contrario, imprimir `Lo siento, has reprobado el curso. Su nota fue de <nota>.`,
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
  if(promedio >= 91 && promedio <= 100){
    printf("El promedio fue: %.2f. Su nota fue de: A. ¡Felicidades, has aprobado!", promedio);
  } else if(promedio >= 81 && promedio <= 90){
    printf("El promedio fue: %.2f. Su nota fue de: B", promedio);
  } else if(promedio >= 71 && promedio <= 80){
    printf("El promedio fue: %.2f. Su nota fue de: C", promedio);
  } else if(promedio >= 61 && promedio <= 70){
    printf("El promedio fue: %.2f. Su nota fue de: D", promedio);
  } else {
    printf("El promedio fue: %.2f. Su nota fue de: F. Lo siento, has fracasado.", promedio);
  }

  printf("Saliendo... \n");
  return 0;
}
