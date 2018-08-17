#include <stdio.h>
#include <stdlib.h>

void menu();
float fahrenheit(float c);
float kelvin(float c);

int main()
{
  int opc;
  float celcius, fa, ke;

  printf("\nIngrese los grados celcius: ");
  scanf("%f", &celcius);

  do{

    system("cls");
    printf("\n1. Fahrenheit");
    printf("\n2. kelvin");
    printf("\n3. Salir");
    printf("\nIngrese una opc: ");
    scanf("%d", &opc);

    switch(opc){

    case 1:
           fa = fahrenheit(celcius);
           printf("\nLos grados f: %2.f\n", fa);
           system("pause");
           break;

    case 2:
           ke = kelvin(celcius);
           printf("\nLos grados k: %2.f\n", ke);
           system("pause");
           break;

    case 3:
           printf("\nHasta la proxima...\n");
           break;

  }

}while(opc !=3);


  return 0;
}

float fahrenheit(float c){

  float f;

  f = (9*c)/5 + 32;

  return f;
}

float kelvin(float c){

  float k;

  k = c + 273.15;

  return k;
}
