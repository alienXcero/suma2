#include<stdio.h>

#include<stdlib.h>

int main(){

float a,b;

char resp;
int op;

do{
system("clear");
printf("--------------------\n");
printf("| 1.-SUMA  2.-RESTA |\n");
printf("|    3.-SALIR       |\n");
 printf("-------------------\n");

printf("elige una opcion?:");
scanf("%d",&op);




switch(op){

case 1:

do{
system("clear");
printf("SUMA\n");
printf("Dame un numero?:");
scanf("%g",&a);

printf("Dame otro numero?:");
scanf("%g",&b);

printf("el resultado de la suma es %g\n",a+b);

printf("Realizar  otra operacion(s/n)?:");
scanf("%s",&resp);

}while(resp=='s');
break;





case 2:
do{
system("clear");
printf("RESTA\n");
printf("Dame un numero?:");
scanf("%g",&a);

printf("Dame otro numero?:");
scanf("%g",&b);

printf("el resultado de la resta es: %g\n",a-b);


printf("Realizar  otra operacion(s/n)?:");
scanf("%s",&resp);

}while(resp=='s');

break;

}


}while(op!=3);



return 0;
}

