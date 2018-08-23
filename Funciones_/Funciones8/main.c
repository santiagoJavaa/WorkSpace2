#include <stdio.h>
#include <stdlib.h>

void binario(int n);


int main()
{
    int numero;

    do{

        printf("Ingrese un numero:  ");
        scanf("%d", &numero);

    }while(numero < 0);//Solo numeros positivos

    binario(numero);

    return 0;
}


void binario(int n){

 if(n > 1){

   binario(n / 2);

   printf("%d", n % 2);

}
}
