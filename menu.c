#include<stdio.h>

#include<stdlib.h>

int main(){

float a,b;

int op;

printf("--------------------");
printf("| 1.-SUMA  2.-RESTA |");
printf("--------------------");

printf("elige una opcion?:");
scanf("%d",&op);




switch(op){

case 1:

printf("Dame un numero?:");
scanf("%g",&a);

printf("Dame otro numero?:");
scanf("%g",&b);

printf("el resultado de la suma es %g",a+b);
break;



}





return 0;
}

