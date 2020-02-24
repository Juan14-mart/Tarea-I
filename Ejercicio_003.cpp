#include <stdio.h>
#include <stdlib.h>

int main () {
int a,b,c;
printf ("Ingrese el numero");
scanf ("%d",&a);
b=a%2;
if (b==0){
    printf("El numero es par");
}if(b>0) {
printf ("El numero es impar\n");
c=a%3;
if(c==0){
printf ("El numero es divisible entre 3");
}else{
printf ("El numero no es divisible entre 3");
}
}
}

