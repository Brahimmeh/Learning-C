//la solution d une equation de 1er degree AX+B=0//
#include<stdio.h>
main()
{ float a,b,x;
printf("veuillez entrer les valeurs de a et b:");
scanf("%f%f",&a,&b);
if (a==0)
 {if (b==0)
 printf("la solution de cette equation est R");
 else {printf("la solution est vide");}}
else { x=-b/a;
 printf("la solution de cette equation est:%.1f" ,x);}}
 

 

