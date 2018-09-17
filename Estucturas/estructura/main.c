#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 20


/*1. Hacer una estructura llamada corredor, en la cual se tendran los
siguientes miembros: Nombre, edad, sexo, club, pedir datos al usuario
para un corredor, y asignarle una categoria de competicion:
	- Juvenil <= 18 años
	- Señor <= 40 años
	- Veterano > 40 años
posteriormente imprimir todos los datos del corredor, incluida su
categoria de competicion*/

typedef struct{

  char nombre[T][20];
  char sexo[T];
  int edad;

}eCorredor;

int main()
{

  eCorredor miCorredor;
  char categoria[20];

  fflush(stdin);
  printf("\nIngrese nombre: ");
  gets(miCorredor.nombre);

  printf("\nIngrese sexo: ");
  gets(miCorredor.sexo);

  printf("\nIngrese edad: ");
  scanf("%d", &miCorredor.edad);

  if(miCorredor.edad <= 18){

     strcpy(categoria, "Junior");

  }else if(miCorredor.edad <= 40){

     strcpy(categoria, "Senior");

  }else{

     strcpy(categoria, "Veterano");
  }

    printf("\n\nSu categoria es: %s",categoria);
	printf("\nSu nombre es: %s", miCorredor.nombre);
	printf("\nSu edad es: %i", miCorredor.edad);
	printf("\nSu sexo es: %s", miCorredor.sexo);


    return 0;
}
