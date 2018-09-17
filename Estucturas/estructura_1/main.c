#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 20


/*3. Realizar un programa en C que lea un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado con
mayor y menor salario.*/

typedef struct{

  char nombre[T][20];
  int edad;
  float salario;

}eEmpleados[1000];

int main()
{

   eEmpleados miEmpleados;

   int i, numEmpleados, pMay, pMin;
   float salarioMayor=0.0, salarioMenor=99999999;

   char categoria[20];

   printf("\nIngrese la cantidad de empleados: ");
   scanf("%d", &numEmpleados);

   for(i=0 ; i<numEmpleados; i++){

        fflush(stdin);
        printf("\nIngrese nombre: ");
        gets(miEmpleados[i].nombre);

        printf("\nIngrese edad: ");
        scanf("%d", &miEmpleados[i].edad);

        printf("\nIngrese salario: ");
        scanf("%f", &miEmpleados[i].salario);

        printf("\n-----------------\n");

   }

   for(i=0 ; i<numEmpleados; i++){

     if(miEmpleados[i].edad <=18){

        strcpy(categoria , "Junior");

     }else if(miEmpleados[i].edad <=40){

        strcpy(categoria , "Senior");

     }else{

        strcpy(categoria , "Veterano");
     }

   }

   for(i=0 ; i<numEmpleados; i++){

      if(miEmpleados[i].salario > salarioMayor)
      {

          salarioMayor = miEmpleados[i].salario;
          pMay = i;
      }

      if(miEmpleados[i].salario < salarioMenor)
      {

          salarioMenor = miEmpleados[i].salario;
          pMin = i;
      }

   }

    printf("\nEl empleado con el mayor salario es: \n");
	printf("\nNombre: %s", miEmpleados[pMay].nombre);
	printf("\nEdad: %d", miEmpleados[pMay].edad);
	printf("\nCategoria: %s", categoria);
	printf("\nSalario: %.2f", miEmpleados[pMay].salario);

	printf("\n\nEl empleado con el menor salario es: \n");
	printf("\nNombre: %s", miEmpleados[pMin].nombre);
    printf("\nEdad: %d", miEmpleados[pMin].edad);
    printf("\nCategoria: %s", categoria);
	printf("\nSalario: %.2f\n", miEmpleados[pMin].salario);

	system("pause");

    return 0;
}
