#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  TAM 20


/* Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres
cada uno dentro de su respectiva variable, y luego intercambiar el
contenido de los arrays*/

int main()
{

   char nombre1[TAM], nombre2[TAM], aux[TAM];

   printf("\nIngrese un nombre: ");
   fflush(stdin);
   gets(nombre1);

   printf("\nIngrese otro nombre: ");
   fflush(stdin);
   gets(nombre2);

   strcpy(aux, nombre1);
   strcpy(nombre1, nombre2);
   strcpy(nombre2, aux);

   printf("\nEl primer nombre es: %s", nombre1);
   printf("\nEl segundo nombre es: %s\n\n", nombre2);


    return 0;
}
