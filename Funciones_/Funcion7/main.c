#include <stdio.h>
#include <stdlib.h>

/*Recursividad: Es una funcion que se llama a si misma

1. Caso Base
2. Caso Recursiva
*/

long factorial(int n);

int main()
{

  int numero;

  printf("Ingrese un numero: ");
  scanf("%d", &numero);

  printf("\nEl factorial es: %d\n", factorial(numero));

    return 0;
}

long factorial(int n){

  if(n<=1){

    return 1;

  }else{

    return (n * factorial(n - 1));
  }

}
