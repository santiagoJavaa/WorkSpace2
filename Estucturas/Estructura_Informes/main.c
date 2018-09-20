#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define T 20

typedef struct{

   char nombre[T][20];
   char sexo[T];
   int edad;
   float salario;

}eEmpleados[1000];

int main()
{
   eEmpleados miEmpleados;

   int i, j, aux, numeroEmpleados;
   int mayor, menor, flag=0;

   printf("\nIngrese numero de sus empleados: ");
   scanf("%d", &numeroEmpleados);

   for(i=0 ; i<numeroEmpleados; i++){

      fflush(stdin);
      printf("\n%d.\n \nIngrese nombre: ", i + 1);
      gets(miEmpleados[i].nombre);

      printf("\nIngrese sexo: ");
      gets(miEmpleados[i].sexo);

      printf("\nIngrese edad: ");
      scanf("%d", &miEmpleados[i].edad);

      printf("\nIngrese salario: ");
      scanf("%f", &miEmpleados[i].salario);

   }

   for(i=0 ; i<numeroEmpleados; i++){

     printf("\nNombre %s", miEmpleados[i].nombre);
     printf("\nSexo: %s", miEmpleados[i].sexo);

   }

   for(i=0 ; i<=numeroEmpleados - 1 ; i++){

    for(j= i+1 ; j<numeroEmpleados ; j++){

        if(miEmpleados[i].edad < miEmpleados[j].edad)
        {
            aux = miEmpleados[i].edad;
            miEmpleados[i].edad = miEmpleados[j].edad;
            miEmpleados[j].edad = aux;
        }

        if(miEmpleados[i].salario < miEmpleados[j].salario)
        {
            aux = miEmpleados[i].salario;
            miEmpleados[i].salario = miEmpleados[j].salario;
            miEmpleados[j].salario = aux;
        }

      }

     printf("\nEdad: %d \n", miEmpleados[i].edad);
     printf("\nSalario %f \n", miEmpleados[i].salario);
   }

    for(i=0 ; i<numeroEmpleados; i++){

        if(flag==0 || miEmpleados[i].edad > mayor)
        {
           mayor = miEmpleados[i].edad;
        }
        if(flag==0 || miEmpleados[i].edad < menor)
        {
           menor = miEmpleados[i].edad;
           flag=1;
        }

    }
     printf("\nLa edad mayor es: %d\n", mayor);
     printf("\nLa edad menor es: %d\n", menor);


    return 0;
}
