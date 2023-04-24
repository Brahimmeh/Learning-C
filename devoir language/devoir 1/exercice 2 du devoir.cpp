#include<stdio.h>
main()
{int a,b,m,r;
 printf("veuillez entrer les valeurs de a et b:\n");
scanf("%d%d", &a,&b);
while (a/10>=10 || b/10>=10)
{printf("veuillez entrer des nombre qui ne contient pas plus de 2 chiffres \n");
scanf("%d%d", &a,&b);}
m=a/10;
r=a%10;  
printf("s = %d%d%d \n",m,b,r);}

