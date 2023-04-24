#include<stdio.h>
main()
{ int h,m,s,d,r,j,k;
printf("veuillez entrer l instant en seconde\n");
scanf("%d" ,&d);
while(d<0)
 {printf("l instant saisie est invalide");
 scanf("%d" ,&d);}
j=d/86400;
k=d%86400;
h=k/3600;
s=k%3600;
m=s/60;
r=s%60;
printf("l instant correspondant en j/h/m/s est %dj %dh %dmin %ds" ,j,h,m,r); 
}
