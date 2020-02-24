#include <stdio.h>
#include <stdlib.h>

int main () {
int opt;
printf ("Introduce un caracter");
scanf ("%d",&opt);
switch(opt){
case 9:
case 8:
case 7:
case 6:
case 5:
case 4:
case 3:
case 2:
case 1:
case 0:
printf ("Es un numero");
break;
default:
printf ("Es un caracter");
}
}
