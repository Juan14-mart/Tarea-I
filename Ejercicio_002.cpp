#include <stdio.h>
#include <stdlib.h>

int main () {
int a,b;
int c;
printf ("Escriba el divisor");
scanf ("%d",&a);
printf ("Escriba el dividendo");
scanf ("%d",&b);
c=a%b;
if (c==0){
printf ("Si es divisible");

}else{
printf ("No es divisible ");
}

}

