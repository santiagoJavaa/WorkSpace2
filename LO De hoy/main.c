#include <stdio.h>
#include <stdlib.h>

//IF - IF ELSE - ELSE

void EjercicioUno();
void EjercicioDos();
void EjercicioTres();
void Ejercicio4();


int main()
{

    //EjercicioUno();
    //EjercicioDos();
    //EjercicioTres();
    Ejercicio4();

    return 0;
}

void EjercicioUno()
{
    //Comprobar si un alumno aprobo o no un examen(aprueba si la nota es mayor a 10)

    int nota;

    printf("Ingrese la nota del alumno: ");
    scanf("%d", &nota);

    if(nota >= 10)
    {

        printf("\nExcelente el examen\n");
    }
    else if(nota >=7 && nota <=9)
    {

        printf("\nMuy bien\n");
    }
    else
    {

        printf("\nDebe recursar\n");
    }
}

void EjercicioDos()
{

    //Calcular cual de los dos es mayores

    int num1, num2;

    printf("\Ingrese numero Uno: ");
    scanf("%d", &num1);

    printf("\Ingrese numero Uno: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {

        printf("\nNumero uno es mayor: %d", num1);
    }
    else if (num1 == num2)
    {

        printf("\nLos numeros son iguales\n");
    }
    else
    {

        printf("\nNumero dos es mayor: %d", num2);
    }

}
void EjercicioTres()
{
    //Hacer un programa que al pulsar 1 limpie la pantalla.

    char tecla;

    printf("\nPrograma para limpiar la pantalla\n");
    printf("\n----------------------------------\n");
    printf("\n\nPrecione la tecla 1:  \n");
    scanf("%d", &tecla);

    if(tecla == 1)
    {

        system("cls");
        printf("\nLa pantalla a quedo limpia\n");

    }
    else
    {

        printf("\nNo funciona\n");

    }

}

void Ejercicio4()
{

    //DADOS

    int dado1, dado2, dado3;

    printf("\nIngrese el dado 1: ");
    scanf("%d", &dado1);

    printf("\nIngrese el dado 2: ");
    scanf("%d", &dado2);

    printf("\nIngrese el dado 3: ");
    scanf("%d", &dado3);

    if(dado1==6 && dado2==6 && dado3==6)
    {

      printf("\nLos tres son iguales!!! Usted Gano\n");

    }
    else if(dado1 == dado2 || !dado3 && dado2 == dado3)
            ){


        printf("\nRegular\n");
    }




}
