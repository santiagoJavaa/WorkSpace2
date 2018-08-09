#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Practica de Condicionales dentro de funciones con VOID.

//Prototipos

//IF / IF ELSE / ELSE
void ejercicioUno();
void ejercicioDos();
void ejercicioTres();
void ejercicioCuatro();
void ejercicioCinco();
void ejercicioSeis();
void ejercicioDiez();
void ejercicioOnce();
void ejercicioDoce();
void ejercicioTrece();
void ejercicioCatorce();
void ejercicioQuince();
void ejercicio16();
void ejercicio17();
void ejercicio18();


//SWITCH()
void ejercicioSiete();
void ejercicioOcho();
void ejercicioNueve();

int main()
{

   //ejercicioUno();
   //ejercicioDos();
   //ejercicioTres();
   //ejercicioCuatro();
   //ejercicioCinco();
   //ejercicioSeis();
   //ejercicioSiete();
   //ejercicioOcho();
   //ejercicioNueve();
   //ejercicioDiez();
   //ejercicioOnce();
   //ejercicioDoce();
   //ejercicioTrece();
   //ejercicioCatorce();
   //ejercicioQuince();
   //ejercicio16();
   //ejercicio17();
   ejercicio18();




    return 0;
}

void ejercicioUno(){

  //Prueba de divisibilidad

  int n1, n2;

  printf("\nIngrese numero 1: ");
  scanf("%d", &n1);

  printf("\nIngrese numero 2: ");
  scanf("%d", &n2);

  if(n1 % n2 ==0){

    printf("\nEl numero %d, es divisible por %d\n\n", n1,n2);

  }else{

     printf("\nEl numero %d, no es divisible por %d\n\n", n1,n2);

  }
}

void ejercicioDos(){

  //Comprobar si un alumno aprobo o no un examen(aprueba si la nota es mayor a 10)

  int nota;

  printf("\nIngrese nota: ");
  scanf("%d", &nota);

  if(nota >=10){

    printf("\nExcelente nota.\n");

  }else if(nota >=7 && nota <=9){

    printf("\nMuy buena nota\n");

  }else{

    printf("\nA seguir estudiando...\n");
  }
}

void ejercicioTres(){

//Calcular cual de los dos numeros es mayor

  int n1, n2;

  printf("\nIngrese numero uno: ");
  scanf("%d", &n1);

  printf("\nIngrese numero dos: ");
  scanf("%d", &n2);

  if(n1 > n2){

    printf("\nEl numero mayor es: %d\n\n", n1);

  }else{

    printf("\nEl numero mayor es: %d\n\n", n2);
  }
}

void ejercicioCuatro(){

 /*Ingresar por teclado el nombre
 y el signo de cualquier persona e imprima el nombresolo si la persona es signo Aries, caso contrario imprima no es signo Aries.*/

  char nombre[30], signo[20];

  printf("\nIngrese su nombre: ");
  gets(nombre);

  printf("\nIngrese su signo: ");
  gets(signo);

    //Es para comprar
  if(strcmp(signo, "geminis")==0){

       printf("\nEs signo geminis, su nombre es: %s\n", nombre);
  }else{

       printf("\nEl signo no es geminis\n");
  }
}

void ejercicioCinco(){

  char nombre[30];

  printf("\nIngrese nombre: ");
  gets(nombre);

  if(strcmp(nombre, "santiago")==0){

    printf("\nSu nombre es Santiago\n");

  }else{

    printf("\nSu nombre no es Santiago\n");
  }

}

void ejercicioSeis(){

 //Hacer un programa que al pulsar 1 limpie la pantalla.

 char tecla;

 printf("Programa de borrado de pantalla");
 printf("\n---------------------------\n");
 printf("\n---------------------------\n");
 printf("\nDigite el numero 1: " );
 scanf("%c", &tecla);

 if(tecla == '1'){

   system("cls");//Funcion para limpiar la pantalla.
   printf("\n\nha funcionado, el limpiador de pantalla\n\n");


  }else{

   fflush(stdin);//Pq se lleno el buffer.
   printf("\n\nNo a funcionado el limpiador de pantalla\n\n");
   printf("\nPor favor ingrese el numero 1: ");
   scanf("%c", &tecla);


   if(tecla == '1'){

       system("cls");
       printf("\n\nha funcionado, el limpiador de pantalla\n\n");

   }else{

      printf("\n\nNo funciono...\n\n");
   }
 }

}

void ejercicioSiete(){

  int num;

  printf("\nIngrese un numero: ");
  scanf("%d", &num);

  switch(num){

    case 1:
           printf("\nEs el numero uno.\n");
           break; //Finaliza la ejecucion.
    case 2:
           printf("\nEs el numero dos.\n");
           break;
    case 3:
           printf("\nEs el numero tres.\n");
           break;
    case 4:
           printf("\nEs el numero cuatro.\n");
           break;

    default: printf("\nNo se ingreso ningun numero correcto\n");
  }

}

void ejercicioOcho(){

 //Dada la nota de un examen indicar que nota le correspode.

 int nota;

 printf("\nIngrese nota entre (1-10): ");
 scanf("%d", &nota);

 switch(nota){

   case 10:
           printf("\nExcelente nota\n");
           break;

   case 9:
          printf("\nMuy buena nota\n");
          break;

   case 8:
          printf("\nMuy buena nota\n");
          break;

   case 7:
          printf("\nMuy buena nota\n");
          break;

   default: printf("\n\nMuy mala nota\n");

 }

}

void ejercicioNueve(){

 // cajero automatico con saldo inicial de 1000 dolares.

 int opcion;
 float agregar, retirar, saldo=1000;

 printf("\tBienvenido a su Cajero Virtual");
 printf("\n\n");
 printf("\n1. Ingreso en cuenta");
 printf("\n2. Retirar dinero de la cuenta");
 printf("\n3. Salir");
 printf("\nOpcion: ");
 scanf("%d", &opcion);

 switch(opcion){

   case 1:
          printf("\nCuanto dinero desea ingresar: ");
          scanf("%f", &agregar);

          saldo += agregar;
          printf("\nEl sueldo total es de: %.2f", saldo);

          break;

   case 2:

          printf("\nCuanto dinero desea retirar: ");
          scanf("%f", &retirar);

          if(retirar > saldo){

            printf("\nLa cantidad a retirar es mayor al saldo");
          }else{

             saldo -= retirar;
             printf("\nEl saldo disponible es de: %.2f", saldo);
          }
          break;

   case 3:

          break;

   default: printf("\n\nERROR...Ingreso una opcion que no aparece en el menu");
 }
}

void ejercicioDiez(){

  //Indicar si un numero ingresado por consola es par o impar.

  int num;

  printf("\nIngrese un numero: ");
  scanf("%d", &num);

  if(num %2 ==0){

    printf("\nEl numero ingresado es par.\n\n", num);
  }else{

    printf("\nEl numero ingresado es impar\n\n", num);
  }
}

void ejercicioOnce(){

//Indicar si un numero ingresado por consola en mayor o menor.

int num;

printf("\nIngresar un numero: ");
scanf("%d", &num);

if(num >=0){

    printf("\nEl numero ingresado es mayor\n");
}else{

    printf("\nEl  numero ingresado es menor\n");
}

}

void ejercicioDoce(){

 //Indicar si el numero es positivo o negativo.

 int num;

 printf("\nIngrese un numero: ");
 scanf("%d", &num);

 if(num >=0){

    printf("\nEl numero es positivo\n");
 }else{

    printf("\nEl numero es negativo\n");
 }

}

void ejercicioTrece(){

 //Pedir dos numeros y decir cual es el mayor o si son iguales.

 int num1, num2;

 printf("\nIngrese numero 1: ");
 scanf("%d", &num1);

 printf("\nIngrese numero 1: ");
 scanf("%d", &num2);

 if(num1 == num2){

    printf("\nLos numeros ingresados son iguales\n");

 }else if(num1 > num2){

    printf("El numero %d, es el mayor\n", num1);
 }else{

    printf("El numero %d, es el mayor\n", num2);
 }

}

void ejercicioCatorce(){

  //Pedir dos numeros y mostrarlos de mayor a menor.

  int num1, num2;

  printf("\nIngresar numero 1: ");
  scanf("%d", &num1);

  printf("\nIngresar numero 2: ");
  scanf("%d", &num2);

  if(num1 > num2){

    printf("\nEl mayor es %d y el menor es: %d\n", num1, num2);
  }else{

       printf("\nEl mayor es %d y el menor es: %d\n", num2, num1);
  }

}

void ejercicioQuince(){

///Pedir un numero e indicar cuantas cigras tiene

 int num;

 printf("\nIngrese un numero: ");
 scanf("%d", &num);

 if(num >=10 && num <=90){

    printf("El numero tiene 1 cifra\n");

 }else if(num >=100 && num <=900){

   printf("El numero tiene 2 cifras\n");
 }

}

void ejercicio16(){

///*En un casino de juegos se desea mostrar los mensajes respectivos por el puntaje obtenido en el lanzamiento de tres dados de un cliente, de acuerdo con el resultado.
///*Si los tres dados son 6 mostrar : Excelente
///*Si los dos dados son 6 mostrar : muy bien
///*Si un dado se obtiene 6 mostrar : regular
///*Si ningun dado se obtiene un 6 mostrar: muy mal

  int dado1, dado2, dado3;

  printf("\nIngrese dado 1: ");
  scanf("%d", &dado1);

  printf("\nIngrese dado 2: ");
  scanf("%d", &dado2);

  printf("\nIngrese dado 3: ");
  scanf("%d", &dado3);

  if(dado1 == 6 && dado2 == 6 && dado3 ==6){

    printf("\nExcelente\n");

  }else if( ( dado1==6 && dado2==6 ) || ( dado2==6 && dado3==6 ) || ( dado1==6 && dado3 ==6 ) ){

    printf("\nMuy bien\n");

  }else if( (dado1 ==6 ) || ( dado2 ==6 ) || ( dado3 ==6 )){

    printf("\nRegular\n");
  }else{

    printf("\nMuy mal\n");
  }
}

void ejercicio17(){

///* Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima,
///solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.*///

 char nombre[30], sexo[20];
 int edad;

 printf("\nIngrese nombre: ");
 gets(nombre);

 printf("\nIngrese sexo: ");
 gets(sexo);

 printf("\nIngrese edad: ");
 fflush(stdin);
 scanf("%d", &edad);


 if( ( strcmp(sexo, "masculino" ) ==0 ) && (edad >=18) ){

   printf("\nCumple con los requisitos: %s", nombre);

 }else{

   printf("No cumple con los requisitos.");
 }

}

void ejercicio18(){

 char sexo;

 printf("\nIngrese sexo (f-m): ");
 scanf("%c", &sexo);

 if(sexo == 'f'){

    printf("\nEl sexo es femenino\n");
 }else{

    printf("\nEl sexo es masculino\n");
 }

}


