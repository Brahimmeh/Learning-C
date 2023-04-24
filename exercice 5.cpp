#include<stdio.h>
main()
{ int h,m,s,d,r;
printf("veuillez entrer l instant en seconde\n");
scanf("%d" ,&d);
if(s<0)
 printf("l instant saisie est invalide");
else 
h=d/3600;
s=d%3600;
m=s/60;
r=s%60;
printf("l instant correspondant en h/m/s est %dh %dmin %ds" ,h,m,r); 
}
