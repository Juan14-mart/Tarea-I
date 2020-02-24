#include <stdio.h>
#include <stdlib.h>

int main () {
int a,b;
printf ("Ingrese el primer numero");
scanf ("%d",&a);
printf("Ingrese el segundo numero");
scanf ("%d",&b);
if (a>b){
    printf("El numero mayor es: %d",a);
}else if(a<b){
printf ("El numero mayor es: %d",b);
}else {
printf ("El numero es igual: %d",a);
}
}


