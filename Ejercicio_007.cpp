#include <stdio.h>
#include <stdlib.h>

int main () {
int a,b,c;
printf ("Ingrese la contraseña:");
scanf ("%d",&a);
scanf ("%d",&b);
scanf ("%d",&c);
if (a==3){
 if(b==9){
    if (c==5){
printf ("Acceso concedido");
    }else {
    printf ("Acceso denegado");
    }
 }else {
 printf ("Acceso denegado");
 }
}else {
printf ("Acceso denegado");
}
}
