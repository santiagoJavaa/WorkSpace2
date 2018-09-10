#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void ingreseVectores(int vector[], int tamanio);
void parImparVectores(int vector[], int tamanio);
void posNegVectores(int vector[], int tamanio);
void mayorMayor(int vector [], int tamanio);
void ascedentesVector(int vector[], int tamanio);
void descendentesVector(int vector[], int tamanio);

int main()
{
    int numero[TAM];
    int opcion=0;
    char repuesta='s';

    do{

        system("cls");
        printf("\n1. Ingrese 4 numeros");
        printf("\n2. Par o impar");
        printf("\n3. positivo o negativo ");
        printf("\n4. Mayor o menor");
        printf("\n5. Ascendente");
        printf("\n6. Descendente");
        printf("\n7. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){

         case 1:
                ingreseVectores(numero, TAM);

                break;

         case 2:
                parImparVectores(numero, TAM);
                break;

         case 3:
                posNegVectores(numero, TAM);
                break;

         case 4:
                mayorMayor(numero, TAM);
                break;

         case 5:
                ascedentesVector(numero, TAM);
                break;

         case 6:
                descendentesVector(numero, TAM);
                break;

         case 7:
                repuesta = 'n';
                break;
        }


    }while(repuesta == 's');


    return 0;
}

void ingreseVectores(int vector[], int tamanio)
{

   int i;
   for(i=0 ; i<tamanio; i++){

     printf("\nIngrese un numero: ");
     scanf("%d", & vector[i]);
   }

}

void parImparVectores(int vector[], int tamanio)
{
   int i;

   for(i=0 ; i<tamanio; i++){

       if(vector[i] %2 ==0){

          printf("\nEl num es par");

       }else{

          printf("\nEl num es impar");
       }
   }

}

void posNegVectores(int vector[], int tamanio)
{
    int i;

     for(i=0 ; i<tamanio; i++){

        if(vector[i] > 0){

            printf("\nEl num es positivo");

        }else if(vector[i] < 0){

            printf("\nEl num es negativo");

        }else{

            printf("\nEl numero es cero");
        }
     }

}

void mayorMayor(int vector [], int tamanio)
{
    int i;
    int mayor, menor;
    int flag=0;
    int posMaximo=0, posMinimo=0;

    for(i=0 ; i<tamanio; i++){

          if(flag ==0 || vector[i] > mayor){

             mayor = vector[i];
             posMaximo++;

          }
          if(flag ==0 || vector[i] < menor){

            menor = vector[i];
            flag=1;
            posMinimo++;
          }

        }

          printf("\nEl mayor: %d, en la posicion: %d", mayor, posMaximo);
          printf("\nEl menor: %d, en la posicion: %d", menor, posMinimo);



}

void ascedentesVector(int vector[], int tamanio)
{

    int i, j, aux;

     for(i=0 ; i<=tamanio -1 ; i++){

      for(j=i+1 ; j<tamanio ; j++){

         if(vector[i] > vector[j]){

            aux = vector[i];
            vector[i] = vector[j];
            vector[j] = aux;
         }
      }
      printf("\n\t%d\n", vector[i]);
    }

}

void descendentesVector(int vector[], int tamanio)
{

    int i, j, aux;

      for(i=0 ; i<=tamanio -1 ; i++){

      for(j=i+1 ; j<tamanio ; j++){

         if(vector[i] < vector[j]){

            aux = vector[i];
            vector[i] = vector[j];
            vector[j] = aux;
         }
      }
      printf("\n\t%d\n", vector[i]);
    }
}


