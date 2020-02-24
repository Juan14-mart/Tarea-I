#include <stdio.h>
#include <stdlib.h>

int main () {
int a,b,c;
printf ("Ingrese las cifras");
scanf ("%d",&a);
scanf ("%d",&b);
scanf ("%d",&c);
if (c>a<b){
printf ("%d",a);
if (b>c){
    printf ("%d",c);
    printf ("%d",b);
}else if (b<c){
 printf ("%d",b);
 printf ("%d",c);
}
 }else if (c>b<a){
 printf ("%d",b);
 if (a>c){
    printf ("%d",c);
    printf ("%d",a);
 }else if (a<b){
 printf ("%d",a);
 printf ("%d",c);
 }
 }else if (a>c<b){
 printf ("%d",c);
 if (b>a){
    printf ("%d",a);
    printf ("%d",b);
 }else if (b<a){
 printf ("%d",b);
 printf ("%d",a);
 }
 }

}
