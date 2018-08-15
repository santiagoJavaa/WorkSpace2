#include <stdio.h>
#include <stdlib.h>


int comprobar(int num);

int main()
{
   int numero, x;

   printf("\nIngrese un numero: ");
   scanf("%d", &numero);

  x = comprobar(numero);

  if(numero %2 ==0){

    printf("\nEl numero es par\n");
  }else{

    printf("\nEl numero es impar\n");
  }

    return 0;
}

int comprobar(int num){

  if(num % 2 ==0){

    return 0;

  }else{

    return 1;
  }

}
