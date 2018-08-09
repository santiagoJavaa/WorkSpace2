#include <stdio.h>
#include <stdlib.h>

///Bucle While.

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();

//***************************************************************************************************
///Buble for.

/**
 *Sintaxis.

       for(inicializacion, condicion, incremento){

          Instrucciones;
          ...
        }
 */


void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();
void ejercicio17();
void ejercicio18();


//******************************************************************************

/**

   bucle do...While

   Sintaxis:

            do{

                Instrucciones...

            }while(condicion)


 */

 void ejercicio19();
 void ejercicio20();
 void ejercicio21();
 void ejercicio22();

int main()
{

    //ejercicio1();
    //ejercicio2();
    //ejercicio3();
    //ejercicio4();
    //ejercicio5();
    //ejercicio6();
    //ejercicio7();
    //ejercicio8();

    //ejercicio9();
    //ejercicio10();
    //ejercicio11();
    //ejercicio12();
    //ejercicio13();
    //ejercicio14();
    //ejercicio15();
    //ejercicio16();
    //ejercicio17();
    //ejercicio18();

    //ejercicio19();
    //ejercicio20();
    //ejercicio21();
    //ejercicio22();



    return 0;
}

void ejercicio1(){

 ///Mostrar los numeros de forma ascendente

 int i;///Siempre se debe inicializar la variable de conteo.

 i = 1;

 while(i <=10 ){

    printf("\n%d\n", i);
    i++; ///Se invrementa de uno en uno.
 }

}

void ejercicio2(){

///Mostrar los numeros de forma descendentes

int i;

i = 10;

while(i >=1 ){

    printf("\n%d\n", i);
    i--;
}

}

void ejercicio3(){

 ///Mostrar 5 asteriscos

 int i;

 i = 1;

 while( i<=5 ){

    printf("\n*\n", i);

    i++;
 }
}

void ejercicio4(){

  ///Suma de numeros

  int cont, numeros, suma=0;

  printf("\nIngrese la cantidad de numeros a sumar: ");
  scanf("%d", &numeros);

  cont = 1;

  while (cont <= numeros){

    suma = suma + cont; /// suma = 1

    cont++;

  }

  printf("\nEl resultado de la suma es: %d\n", suma);
}

void ejercicio5(){

 ///Multiplos de 3 desde 1 hasta n

 int cont, numero;

 cont = 1;

 printf("\nIngrese el total de los numeros: ");
 scanf("%d", &numero);

 while(cont <= numero){

    if(cont %3 == 0){

       printf("%d.\n", cont);
    }

   cont++;
 }

}

void ejercicio6(){

 /// Digite un número, si el numero supera a 10, multiplique los 10 primeros números,
 ///sino, súmelos (Propuesto)

 int numero, suma, mult, cont;

 cont = 1;

 printf("\nIngrese un numero: ");
 scanf("%d", &numero);

 if(numero > 10){

    while(cont <=10){

        mult = mult * cont;
        cont++;

    }
    printf("\nLa multiplicacion es: %d");
 }else{

    while(cont <=10){

        suma = suma + cont;
        cont++;
    }
    printf("\nLa suma es: %d", suma);
 }

}

void ejercicio7(){

///Múltiplos de 5 desde 1 hasta n (Propuesto)

int numero, cont;

cont = 1;

printf("Ingrese numero: ");
scanf("%d", &numero);

while(cont <= numero){///Desde 5.

        if(cont %5 ==0){

          printf("\n%d\n", cont);

        }

    cont++;
}
}

void ejercicio8(){

///5. Sumar 1-2+3-4...

/*
impares (+)
pares (-)

suma_pares = -2 -4 -6 ...
suma_impares = 1 + 3 + 5...

suma = suma_pares + suma_impares

1-2+3-4+5-6
-1+3-4+5-6
2-4+5-6
-2+5-6
3-6
-3
4 - 7
-4 - 8
5 - 9
-5 - 10

*/

int cont, numero, ne, suma_pares, suma_impares, suma;

cont = 1;

printf("Ingresar el total de elementos de la serie: ");
scanf("%d", &numero);

while(cont < numero){

        if(cont %2 ==0){

            ne = cont * (-1);

            suma_pares = suma_pares+ ne;

        }else{

            suma_impares = suma_impares + cont;

        }

     cont++;

     suma = suma_pares + suma_impares;

     printf("\nLa suma total es: %d", suma);
}

}

void ejercicio9(){

   ///Mostrar los 10 primeros numeros - ascendente

   int i;

   for(i=1 ; i<=10 ; i++){

     printf("\n%d\n", i);

   }

}

void ejercicio10(){

  ///Mostrar los 10 primeros numeros - descendente

   int i;

   for(i=10 ; i>=1; i--){

    printf("\n%d\n", i);

   }
}

void ejercicio11(){

///Sumar los 10 primeros numeros pares.

 int i, suma=0;

 for(i=0 ; i<=10 ; i++){

    if(i%2 ==0){

        suma += i;
    }
 }

  printf("\nLa suma de los numeros pares es: %d\n", suma);
}

void ejercicio12(){

 ///Hacer un arbol con *

/*	Digite el numero de filas : 5

		*
		**
		***
		****
		***** */

  int numero_filas, i, j;

  printf("\nIngrese numero de filas: ");
  scanf("%d", &numero_filas);

  for(i=0 ; i<numero_filas ; i++){

    for(j=0 ; j<=i ; j++){

        printf("*");
    }
     printf("\n");
  }
}

void ejercicio13(){

   ///Hacer un arbol con *

/*	Digite el numero de filas : 5

		-
		--
		---
		----
		----- */

  int i, j, numero_filas;

  printf("Ingrese la cantidad de filas: ");
  scanf("%d", &numero_filas);

  for(i=0 ; i<numero_filas ; i++){

    for(j=0 ;  j<=i ; j++){

        printf("-");
    }

    printf("\n",i);
  }

}

void ejercicio14(){

  ///Determinar si un numero es Primo o no.

    int i, numero, cont=0;

    printf("\nIngrese un numero: ");
    scanf("%d", &numero);

    for(i=1 ; i<=numero ; i++){

        if( numero % i ==0 ){

            cont++;

        }
    }

    if(cont > 2){

        printf("\nEl numero es compuento\n");

    }else{

        printf("\nEl numero es primo\n");
    }

}

void ejercicio15(){

  int i, numero, factorial =1;

  printf("\nIngresar el numero para hacer el factorial: ");
  scanf("%d", &numero);

  for(i=1 ; i<=numero ; i++){

     factorial *=i;
  }

  printf("\nEl factorial es: %d\n\n", factorial);
}

void ejercicio16(){

 ///Suma de factoriales

 int i, numero, factorial = 1, suma=0;

 printf("\nIngrese cantidad de factorial a sumar: ");
 scanf("%d", &numero);

 for(i=1 ; i<=numero ; i++){

   factorial *= i;

   suma += factorial;

 }

  printf("\nLa suma es: %d",suma);
}

void ejercicio17(){


 ///Serie fibonacci.

 ///1 1 2 3 5 8 13 ...

 int numero, i, x= 0 , y= 1, z= 1;

 printf("\nIngrese numero: ");
 scanf("%d", &numero);

 for(i=1 ; i<=numero ; i++){

    z = x + y;
    x = y;
    y = z;

    printf("%d ,",z);

 }

}

void ejercicio18(){

///Hacer un programa que imprima la suma de todos los números pares que hay desde 1
///hasta n, y diga cuantos números hay.

 int i, suma= 0, numero, cont =0;

 printf("\nIngrese la cantidad de elementos: ");
 scanf("%d", & numero);

 for(i=1 ; i<=numero ; i++){

    if(i %2 ==0){

        suma += i;
        cont++;
    }
 }

 printf("\nLa suma es: %d\n", suma);
 printf("\nLa cantidad de numeros es: %d\n", cont);

}

void ejercicio19(){

   ///Mostrar los 10 primeros numeros - ascendente

  int i;

  i =1;

  do{

    printf("\n%d\n",i);
    i++;

  }while(i<=10);

}

void ejercicio20(){

  int i;

  i =10;

  do{

     printf("\n%d\n",i);
     i--;

  }while(i>=1);

}

void ejercicio21(){

  ///Saludo

  char opc;

  do{

    fflush(stdin);
    printf("\nHola");

    printf("\nIngrese 's' para saludar nuevamente: ");
    scanf("%c", &opc);

  }while(opc == 's' || opc == 'S');
}

void ejercicio22(){

 ///Hacer un bucle do...while para imprimir las letras minusculas del alfabeto

 char letra = 'a';

 do{

    printf("\n%c\n",letra);
    letra++;

 }while(letra <= 'z');

}

