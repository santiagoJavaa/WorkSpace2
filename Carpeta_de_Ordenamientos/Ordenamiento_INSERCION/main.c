#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={3, 1, 4, 2, 5};
    //char b[5]={'e', 'i', 'a', 'u', '0'};
    int i, pos, aux;

    for(i=0; i<5; i++){

        pos = i; /// Para que guarde el numero de la iteracion
        aux = a[i]; /// guarda el valor

        while((pos > 0) && (aux < a[pos-1]))
        {
            a[pos] = a[pos-1];
            pos--;
        }

        a[pos] = aux;
    }

    printf("\nAscendente\n");

    for(i=0; i<5; i++)
    {

        printf("\n%d\n", a[i]);

    }

    printf("\nDescendentes\n");

    for(i=4 ; i>=0 ; i--)
    {
        printf("\n%d\n", a[i]);
    }


    return 0;
}
