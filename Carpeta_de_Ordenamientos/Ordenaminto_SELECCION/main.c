#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[5] = {3, 4, 1, 5, 2};
    int i, j, aux, min;

    min =1;

    for(i=0 ; i<5; i++){

        for(j=i+1 ; j<=5 ; j++){

            if(a[j] < a[min])
            {
                min = j;
            }
        }

        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }

    printf("\nAscendentes\n");

    for(i=0 ; i<5; i++){

        printf("\n%d\n", a[i]);
    }

    printf("\nDescendente\n");
    for(i=4 ; i>=0; i--){

        printf("\n%d\n", a[i]);
    }

    return 0;
}
