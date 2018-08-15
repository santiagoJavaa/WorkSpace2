#include <stdio.h>
#include <stdlib.h>

void menu();
void sumar();
void resta();
void multiplicacion();
void division();
void salir();

int main()
{

   menu();


    return 0;
}

void menu(){

 int opcion;

 do{

   system("cls");
   printf("\t\nCalculadora\n");
   printf("\n1. Sumar");
   printf("\n2. Restar");
   printf("\n3. Multiplicar");
   printf("\n4. Dividir");
   printf("\n5. Salir\n");
   printf("\nIngrese una opcion: ");
   scanf("%d", &opcion);



   switch(opcion){

    case 1:

           sumar();
           system("\nPause");
           break;

     case 2:

           resta();
           system("Pause");
           break;

     case 3:

           multiplicacion();
           system("Pause");
           break;

     case 4:
            division();
            system("Pause");
            break;

     case 5:
            printf("\nHasta Luego\n");
            break;
}


 }while(opcion !=5);


}

void sumar(){

  int n1 , n2, suma =0;

  printf("\nIngrese un numero: ");
  fflush(stdin);
  scanf("%d", &n1);

  printf("\nIngrese otra numero: ");
  fflush(stdin);
  scanf("%d", &n2);

  suma = n1 + n2;

  printf("\nEl resultado de la suma es: %d\n", suma);

}

void resta(){


  int n1 , n2, resta =0;

  printf("\nIngrese un numero: ");
  fflush(stdin);
  scanf("%d", &n1);

  printf("\nIngrese otra numero: ");
  fflush(stdin);
  scanf("%d", &n2);

  resta = n1 - n2;

  printf("\nEl resultado de la resta es: %d\n\n", resta);

}

void multiplicacion(){

  int n1 , n2, multiplicacion =0;

  printf("\nIngrese un numero: ");
  fflush(stdin);
  scanf("%d", &n1);

  printf("\nIngrese otra numero: ");
  fflush(stdin);
  scanf("%d", &n2);

  multiplicacion = n1 * n2;

  printf("\nEl resultado de la multiplicacion es: %d\n\n", multiplicacion);

}

void division(){

  int n1 , n2, division =0;

  printf("\nIngrese un numero: ");
  fflush(stdin);
  scanf("%d", &n1);

  printf("\nIngrese otra numero: ");
  fflush(stdin);
  scanf("%d", &n2);

  division = n1 / n2;

  printf("\nEl resultado de la division es: %d\n\n", division);

}

