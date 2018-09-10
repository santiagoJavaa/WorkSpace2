#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define TAM 20

///Copiar el nombre de la variable 1 y pasarla a la variable dos.

int main()
{
   char nombre1[TAM], nombre2[TAM];

   printf("\nIngrese su nombre: ");
   fflush(stdin);
   gets(nombre1);

   strcpy(nombre2,nombre1);

   printf("\nEl nombre es: %s\n", nombre2);

    return 0;
}
