#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define A 2


typedef struct{

  float promedio;
  int legajo;
  char nombre[35];
  char apellido[35];
  int edad;

}eAlumno;

eAlumno CargarAlmunos();
void cargargarListadoDeAlumnos(eAlumno listado[], int tamanio);

void mostrarAlumno(eAlumno Alumnos);///Para mostrar le damos otro alias
void mostrarListadoDeAlumnos(eAlumno listado[], int tamanio);

void ordenarListadoDeAlumnosPorNombre(eAlumno listado[], int tam);
void ordenarListadoDeAlumnosPorEdad(eAlumno listado[], int tam);

///informe.
void caracterizarEdadAlumno(eAlumno listado[], int tam);
///void mostrarCaracteristicasAlumno()

int main()
{
    eAlumno listadoAlumno[A];

    cargargarListadoDeAlumnos(listadoAlumno, A);

    mostrarListadoDeAlumnos(listadoAlumno, A);

    ordenarListadoDeAlumnosPorNombre(listadoAlumno, A);

    mostrarListadoDeAlumnos(listadoAlumno, A);

    ordenarListadoDeAlumnosPorEdad(listadoAlumno, A);

    cargargarListadoDeAlumnos(listadoAlumno, A);

     mostrarListadoDeAlumnos(listadoAlumno, A);

    return 0;
}

eAlumno pedirAlmunos()
{

    eAlumno miAlumno;

    printf("\n\nIngrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("\nIngrese apellido: ");
    fflush(stdin);
    gets(miAlumno.apellido);

    printf("\nIngrese promedio: ");
    scanf("%f" , &miAlumno.promedio);

    printf("\nIngrese edad: ");
    scanf("%d", &miAlumno.edad);

    printf("\n----------------");

    return miAlumno;
}

void cargargarListadoDeAlumnos(eAlumno listado[], int tamanio)
{
    int i;

    for(i=0 ; i<tamanio ; i++)
    {

        listado[i] = pedirAlmunos();
    }

}

void mostrarAlumno(eAlumno Alumnos)///Para mostrar le damos otro alias
{

    printf("\nLegajo: %d, Nombre: %s, Apellido: %s, Promedio: %.2f, Edad: %d\n",
    Alumnos.legajo, Alumnos.nombre, Alumnos.apellido, Alumnos.promedio, Alumnos.edad);

}

void mostrarListadoDeAlumnos(eAlumno listado[], int tamanio)
{

    int i;

    for(i=0 ; i<tamanio ; i++)
    {
         mostrarAlumno(listado[i]);
    }

}

void ordenarListadoDeAlumnosPorNombre(eAlumno listado[], int tam)
{
    eAlumno auxAlumno;
    int i, j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre)>0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;

            }
        }
    }

}
void ordenarListadoDeAlumnosPorEdad(eAlumno listado[], int tam)
{
    eAlumno auxAlumno;
    int i, j;

    for(i=0 ; i<=tam -1; i++){

     for(j= i+1 ; i<tam ; i++){

        if(listado[i].edad < listado[j].edad)
        {
            auxAlumno  = listado[i];
            listado[i] = listado[j];
            listado[j] = auxAlumno;
        }
      }
    }
}

void caracterizarEdadAlumno(eAlumno listado[], int tam)
{
    char divisiones[20];
    int i;

    for(i=0 ; i<tam ; i++){

        if(listado[i].edad <=10){

            strcpy(divisiones, "Primaria");

        }else{

            strcpy(divisiones, "Secundaria");
        }

    }
}
