#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[5] = {'e', 'i', 'a', 'u', 'o'};
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

        printf("\n%c\n", a[i]);

    }

    printf("\nDescendentes\n");

    for(i=4 ; i>=0 ; i--)
    {
        printf("\n%c\n", a[i]);
    }

    return 0;
}
