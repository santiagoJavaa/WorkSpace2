#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2);


int main()
{

    int n1, n2, sumar =0;

    printf("\nIngrese un numero: ");
    scanf("%d", &n1);

    printf("\nIngrese otro numero: ");
    scanf("%d", &n2);

    sumar = suma(n1, n2);

    printf("\nEl resultado es: %d\n", sumar);


    return 0;
}

int suma(int num1, int num2){

  int suma;

  suma = num1 + num2;

  return suma;

}
