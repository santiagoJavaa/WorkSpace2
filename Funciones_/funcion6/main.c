#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funcion_aleatoria();

int main()
{


    funcion_aleatoria();



    return 0;
}

funcion_aleatoria(){

  int numero, li, ls;
  int i;

  srand(time(NULL));

  printf("Digite limite inferior: ");
  scanf("%d", &li);

  printf("Digite el limite superior: ");
  scanf("%d", &ls);

  for(i=1 ; i<=10 ; i++){

     ///numero = 1 + rand() % ((10+1) - 1);
     numero = li + rand() % ((ls+1) - li);
     printf("%i\n\n", numero);

  }




}
