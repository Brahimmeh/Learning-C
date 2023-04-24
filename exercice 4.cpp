#include<stdio.h>
main()
{ int h,m,s,d;
printf("veuillez entrer l instant \n");
scanf("%d%d%d" ,&h,&m,&s);
if(h<0||h>23||m<0||m>59||s<0||s>59)
 printf("l horaire saisie est invalide");
else 
d=h*3600+m*60+s;
printf("l instant saise en seconde est:%d" ,d); 
}
