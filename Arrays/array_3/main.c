#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100


/* Realice un programa que lea en un array el sexo de los N
estudiantes del curso de Algoritmos y que determine cuantos hombres y
cuantas mujeres se encuentran en el grupo, suponiendo que los datos
son extraidos alumno por alumno.*/

int main()
{

     int i, numero, varon=0, mujer=0;
     char alumnos[TAM];

     printf("\nIngrese el total de alumnos de la clase: ");
     scanf("%d", &numero);

     for(i=1 ; i<=numero; i++){

        printf("\n%d. Ingrese el sexo de los alumno: ", i);
        fflush(stdin);
        gets(alumnos);

        if(strcmp(alumnos, "masculino")==0){

            varon++;

        }
        else if(strcmp(alumnos, "femenino")==0){

            mujer++;

        }
     }

    printf("\nEl total de varones es: %d", varon);
    printf("\nEl total de mujeres es: %d", mujer);

    return 0;
}
