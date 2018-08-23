#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 5 ///Tamaño de mi array

///valores Primitivos

void vectoresInt();
void vectoresFlotantes();
void vectoresChar();
void vectoresString();

int main()
{
    /// vectoresInt();
    /// vectoresFlotantes();
    ///vectoresChar();
    /// vectoresString();

    getch();///Para el ejecutable

    return 0;
}

void vectoresInt(){

  int n[TAM], i;

  for(i=0 ; i<TAM ;i++){

    printf("\nIngrese un numero: ", i + 1);
    scanf("%d", &n[i]);
  }

  for(i=0 ; i<TAM ;i++){

    printf("\n%d", n[i]);
  }

}

void vectoresFlotantes(){

 int i;
 float n[TAM];

    for(i=0 ; i<TAM ; i++){

        printf("\nIngrese un numero: ", i + 1);///Le suma uno pq los vectores arrancan de 0
        scanf("%f", &n[i]);
    }

    for(i=0 ; i<TAM ; i++){

        printf("\n%.2f", n[i]);

    }

}

void vectoresChar(){

  char c[TAM];
  int i;

  for(i=0 ; i<TAM ; i++){

    printf("\nIngrese una letra: ", i + 1);
    fflush(stdin);
    scanf("%c", &c[i]);
  }

    for(i=0 ; i<TAM ; i++){

      printf("\n%c", c[i]);

    }
}

void vectoresString(){

  char nombre[20];


  printf("Ingrese su nombre: ");
  gets(nombre);


  printf("\n%s", nombre);



}
