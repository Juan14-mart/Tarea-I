#include <stdio.h>
#include <stdlib.h>

int main () {
int edad,b,c;
printf("Ingrese la edad");
scanf("%d",&edad);
if(edad>60){
c=75*.45;
printf ("El costo del boleto es: %d",c);
}else if(edad<18){
b=75*.4;
printf ("El costo del boleto es: %d",b);
}else if (edad>=18){
    printf("El costo del boleto es:75");
}

}
