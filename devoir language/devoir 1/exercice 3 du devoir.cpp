//afficher la date du lendemain//
#include<stdio.h>
main()
{
int a,j,m,g;
printf("veuillez entrer l annee:\n");
scanf("%d" ,&a);
printf("veuillez entrer le mois:\n");
scanf("%d",&m);
printf("veuillez entrer le jour: \n");
scanf("%d",&j);
printf("la date saisie est: %d/%d/%d \n" ,j,m,a);

j=j+1;

if (j==29)
{ if (m==2 )
  if((a%400!=0 && a%4!=0 )|| a%100==0)
  {
  j=01;
  m=3;}}

  
if(j==30 && m==2)
 {j=01;
 m=3;}

if (j==31)  
{ if (m==4 || m==6 || m==9 || m==11)
  {j=01;
  m=m+1;}}
  
if(j==32 && (m!=4 && m!=6 && m!=9 && m!=11 && m!=12))
{j=01;
  m=m+1;}
 
 
if (m==12 && j==32)
{
j=01;
m=01;
a=a+1;}
  

printf("la date du lendemain est: %d/%d/%d \n" ,j,m,a);
}


