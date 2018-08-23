#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 5

///EJERCICIO: Copiar lo que contiene un array a otro.

int main()
{

    int array1[TAM]= {2, 5, 4, 6, 8};
    int array2[TAM];

    printf("\nCopiando Arrays\n");

    copiandoArray(array1, array2, TAM);

    getch;

    return 0;
}
/*
   a[] = array1
   b[] = array2

*/

void copiandoArray(int a[], int b[], int tamanio){

   int i;

   for(i=0 ; i<tamanio ;i++){

       b[i] = a[i];

   }

   for(i=0 ; i<tamanio ;i++){

       printf("\n%i\n", b[i]);

   }

}
