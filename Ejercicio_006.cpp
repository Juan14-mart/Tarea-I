#include <stdio.h>
#include <stdlib.h>

int main () {
int x;
printf ("Ingrese la variable");
scanf ("%d",&x);

if (x<=0){
    printf ("La funcion fx es: x+3");
}else if(x>0){
printf ("La funcion fx es: x^2+2x");
}
}
