#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main()
{

   int numero[TAM];
   int i, j, aux;

   for(i=0 ; i<TAM; i++){

     printf("\nIngrese un numero: ");
     scanf("%d", &numero[i]);

   }

   for(i=0 ; i<=TAM - 1; i++){

    for(j= i+1 ; j<TAM ; j++){

        if(numero[i] > numero[j])
        {

            aux = numero[i];
            numero[i] = numero[j];
            numero[j] = aux;

        }
    }

      printf("\n%d\n", numero[i]);
   }

   printf("\n-----------\n");
   for(i=0 ; i<=TAM - 1; i++){

    for(j= i+1 ; j<TAM ; j++){

        if(numero[i] < numero[j])
        {

            aux = numero[i];
            numero[i] = numero[j];
            numero[j] = aux;

        }
    }

      printf("\n%d\n", numero[i]);
   }



    return 0;
}
